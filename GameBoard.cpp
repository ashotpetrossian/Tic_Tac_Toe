#include"GameBoard.hpp"
#include<iostream>

void GameBoard::displayBoard(){
    for (size_t i = 0; i < 7; i++)
        {
            for (size_t j = 0; j < 7; j++)
            {
                std::cout<<board[i][j];
            }
            std::cout<<std::endl;
        }
}

void GameBoard::changeBoard(){
    board[1][1] = boardMap[1];
    board[1][3] = boardMap[2];
    board[1][5] = boardMap[3];
    board[3][1] = boardMap[4];
    board[3][3] = boardMap[5];
    board[3][5] = boardMap[6];
    board[5][1] = boardMap[7];
    board[5][3] = boardMap[8];
    board[5][5] = boardMap[9];
}

