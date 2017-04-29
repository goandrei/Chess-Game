#ifndef KNIGHT_H_INCLUDED
#define KNIGHT_H_INCLUDED
#include <vector>
#include "Pieces.h"

class Knight : public Pieces
{

public:
    Knight ( );
    Knight ( int, int );
    Knight ( std::pair < int, int > );
    bool valid ( std::pair < int, int >, Pieces* const [][8] ) const ;
    std::vector < std::pair < int, int > > getPossibleMoves(Pieces* const [][8] ) const;
};

#endif // KNIGHT_H_INCLUDED
