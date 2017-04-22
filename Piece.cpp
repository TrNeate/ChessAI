//
//  Piece.cpp
//  ChessAI
//
//  Created by Tristan Neate on 4/22/17.
//  Copyright © 2017 Tristan Neate. All rights reserved.
//

#include "Header.h"

Piece::Piece(bool white, Space *myspace, Ptypes type, Board *boardd){
    White = white;
    mySpace = myspace;
    Type = type;
    board = boardd;
}

Piece::~Piece(){
    //mySpace->myPiece = NULL;
}
