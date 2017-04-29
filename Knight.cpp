#include "Knight.h"

Knight::Knight () {}

Knight::Knight (int dx, int dy) : pozition(std::make_pair(dx, dy)){}

Knight::Knight (std::pair < int, int > param) : pozition (param){}

bool Knight::valid ( std::pair < int, int > mPair, Pieces* const ChessPiece[8][8]) const {
    if( mPair.first > 8 || mPair.first < 1 )
        return false;
    if( mPair.second > 8 || mPair.second < 1 )
        return false;
    if( ChessPiece[mPair.first][mPair.second] == NULL )
        return true;
    else
        if( ChessPiece[mPair.first][mPair.second] -> getColor() == getColor() )
            return false;
        else
            return true;
}

std::vector < std::pair < int, int > > Knight::getPossibleMoves(Pieces* const ChessPiece[8][8]) const {
    std::vector < std::pair < int, int > > mList;
    std::pair < int, int > aux;
    aux = std::make_pair ( pozition.first - 2, pozition.second - 1 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    aux = std::make_pair ( pozition.first - 2, pozition.second + 1 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    aux = std::make_pair ( pozition.first - 1, pozition.second - 2 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    aux = std::make_pair ( pozition.first - 1, pozition.second + 2 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    aux = std::make_pair ( pozition.first + 2, pozition.second - 1 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    aux = std::make_pair ( pozition.first + 2, pozition.second + 1 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    aux = std::make_pair ( pozition.first + 1, pozition.second - 2 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    aux = std::make_pair ( pozition.first + 1, pozition.second + 2 );
    if( valid ( aux, ChessPiece ) )
       mList.push_back( aux );
    return mList;
}
