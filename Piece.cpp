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

vector<Move> Pawn::getPossibleMoves(Board *board){
    vector<Move> myMoves;
    if(White){
        if(mySpace->yPos==1){
            if(board->Spaces[mySpace->xPos][2].myPiece == NULL && board->Spaces[mySpace->xPos][3].myPiece == NULL){
                myMoves.push_back(Move(this, &board->Spaces[mySpace->xPos][3]));
            }
        }
        if(board->Spaces[mySpace->xPos][mySpace->yPos + 1].myPiece == NULL){
            myMoves.push_back(Move(this, &board->Spaces[mySpace->xPos][mySpace->yPos + 1]));
        }
    }else{
        if(mySpace->yPos==6){
            if(board->Spaces[mySpace->xPos][5].myPiece == NULL && board->Spaces[mySpace->xPos][4].myPiece == NULL){
                myMoves.push_back(Move(this, &board->Spaces[mySpace->xPos][4]));
            }
        }
        if(board->Spaces[mySpace->xPos][mySpace->yPos - 1].myPiece == NULL){
            myMoves.push_back(Move(this, &board->Spaces[mySpace->xPos][mySpace->yPos - 1]));
        }
    }
    return myMoves;
}
