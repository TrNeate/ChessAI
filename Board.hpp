//
//  Board.hpp
//  ChessAI
//
//  Created by Tristan Neate on 4/22/17.
//  Copyright © 2017 Tristan Neate. All rights reserved.
//
#include "Piece.hpp"

#ifndef Board_hpp
#define Board_hpp

struct Space{
    Piece * myPiece;//If space is empty this will result in null
    int xPos;
    int yPos;
    
    Space(int x, int y){
        xPos = x;
        yPos = y;
    }
};

class Board{
public:
    Piece Spaces[8][8];
protected:
private:
};

#endif /* Board_hpp */
