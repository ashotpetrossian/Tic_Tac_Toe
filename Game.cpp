#include"Game.hpp"
#include"GameBoard.hpp"

void Game::setPlayer1Name(std::string name){
    Player1 = name;
}
void Game::setPlayer2Name(std::string name){
    Player2 = name;
}

bool Game::squareIsEmpty(int index){
    if(gameboard.boardMap[index] == ' '){
        return true;
    }
    return false;
}

void Game::setSymbolForPlayer1(int index, char symbol){
    gameboard.boardMap[index] = 'X';
}
void Game::setSymbolForPlayer2(int index, char symbol){
    gameboard.boardMap[index] = 'O';
}

bool Game::isValidInsertforPlayer1(int index, char symbol){
    if(squareIsEmpty(index) && symbol == 'X'){
        return true;
    }
    return false;
}
bool Game::isValidInsertforPlayer2(int index, char symbol){
    if(squareIsEmpty(index) && symbol == 'O'){
        return true;
    }
    return false;
}



bool Game::XWon(){
    if( gameboard.boardMap[1] == 'X' && gameboard.boardMap[2] == 'X' && gameboard.boardMap[3] == 'X'){
        return true;
    } else if (gameboard.boardMap[4] == 'X' && gameboard.boardMap[5] == 'X' && gameboard.boardMap[6] == 'X'){
        return true;
    } else if(gameboard.boardMap[7] == 'X' && gameboard.boardMap[8] == 'X' && gameboard.boardMap[9] == 'X'){
        return true;
    } else if(gameboard.boardMap[1] == 'X' && gameboard.boardMap[5] == 'X' && gameboard.boardMap[9] == 'X'){
        return true;
    } else if(gameboard.boardMap[3] == 'X' && gameboard.boardMap[5] == 'X' && gameboard.boardMap[7] == 'X'){
        return true;
    } else if(gameboard.boardMap[1] == 'X' && gameboard.boardMap[4] == 'X' && gameboard.boardMap[7] == 'X'){
        return true;
    } else if(gameboard.boardMap[2] == 'X' && gameboard.boardMap[5] == 'X' && gameboard.boardMap[8] == 'X'){
        return true;
    } else if(gameboard.boardMap[3] == 'X' && gameboard.boardMap[6] == 'X' && gameboard.boardMap[9] == 'X'){
        return true;
    } else {return false;}
}

bool Game::OWon(){
    if( gameboard.boardMap[1] == 'O' && gameboard.boardMap[2] == 'O' && gameboard.boardMap[3] == 'O'){
        return true;
    } else if (gameboard.boardMap[4] == 'O' && gameboard.boardMap[5] == 'O' && gameboard.boardMap[6] == 'O'){
        return true;
    } else if(gameboard.boardMap[7] == 'O' && gameboard.boardMap[8] == 'O' && gameboard.boardMap[9] == 'O'){
        return true;
    } else if(gameboard.boardMap[1] == 'O' && gameboard.boardMap[5] == 'O' && gameboard.boardMap[9] == 'O'){
        return true;
    } else if(gameboard.boardMap[3] == 'O' && gameboard.boardMap[5] == 'O' && gameboard.boardMap[7] == 'O'){
        return true;
    } else if(gameboard.boardMap[1] == 'O' && gameboard.boardMap[4] == 'O' && gameboard.boardMap[7] == 'O'){
        return true;
    } else if(gameboard.boardMap[2] == 'O' && gameboard.boardMap[5] == 'O' && gameboard.boardMap[8] == 'O'){
        return true;
    } else if(gameboard.boardMap[3] == 'O' && gameboard.boardMap[6] == 'O' && gameboard.boardMap[9] == 'O'){
        return true;
    } else {return false;}
}

void Game::show(){
    gameboard.changeBoard();
    gameboard.displayBoard();
}
