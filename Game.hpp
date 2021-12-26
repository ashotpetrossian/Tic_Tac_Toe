#ifndef GAME_H_
#define GAME_H_
#include"GameBoard.hpp"
#include<string>

#include<iostream>
class Game{    
    private:
        GameBoard gameboard; //composition
        std::string Player1;
        std::string Player2;
    public:
        void setPlayer1Name(std::string);
        void setPlayer2Name(std::string);
        void setSymbolForPlayer1(int index, char symbol);
        void setSymbolForPlayer2(int index, char symbol);
        bool squareIsEmpty(int index);
        bool isValidInsertforPlayer1(int index, char symbol);
        bool isValidInsertforPlayer2(int index, char symbol);
        bool XWon();
        bool OWon();
        void show();
};



#endif