//
//  Header.h
//  ChessAI
//
//  Created by Tristan Neate on 4/22/17.
//  Copyright © 2017 Tristan Neate. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include<vector>
using namespace std;

class Piece;
struct Space{
    Piece * myPiece;//If space is empty this will result in null
    int xPos;
    int yPos;
    
    Space(int x, int y){
        xPos = x;
        yPos = y;
    }
    
    Space();
};

class Board{
public:
    Space Spaces[8][8];
    Board();
protected:
private:
};


enum Ptypes {pawn, knight, bishop, rook, queen, king};


struct Move{
    Piece *piece;
    Space *newSquare;
    Move(Piece *p, Space *s){
        piece = p;
        newSquare = s;
    }
};


class Piece{
public:
    bool White;
    Space *mySpace;
    Ptypes Type;
    Board *board;
    
    Piece(bool white, Space *myspace, Ptypes type, Board *boardd);
    ~Piece();
    vector<Move> getPossibleMoves(Board *board);
    
protected:
    
private:
};


class Pawn : public Piece{
    public:
    Pawn(bool white, Space *myspace, Board *boardd) : Piece(white, myspace, pawn, boardd){}
    vector<Move> getPossibleMoves(Board *board);
};


#endif /* Header_h */
