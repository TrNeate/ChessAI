//
//  Board.cpp
//  ChessAI
//
//  Created by Tristan Neate on 4/22/17.
//  Copyright © 2017 Tristan Neate. All rights reserved.
//

#include "Header.h"

Board::Board(){
    for(int i = 0; i < 8; i++){
        for( int j = 0; j < 8; j++){
            Spaces[i][j] = Space(i, j);
        }
    }
}
