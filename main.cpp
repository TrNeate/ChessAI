//
//  main.cpp
//  ChessAI
//
//  Created by Tristan Neate on 4/22/17.
//  Copyright © 2017 Tristan Neate. All rights reserved.
//

#include "Header.h"

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    Board * myBoard = new Board();
    myBoard->Spaces[0][1].myPiece = new Pawn(true, &myBoard->Spaces[0][1], myBoard);
    return 0;
}
