#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#include<map>
#include<iterator>

class GameBoard{
    private:
        char board[7][7]{
            {'-','-','-','-','-','-','-',},
            {'|',' ','|',' ','|',' ','|',},
            {'-','-','-','-','-','-','-',},
            {'|',' ','|',' ','|',' ','|',},
            {'-','-','-','-','-','-','-',},
            {'|',' ','|',' ','|',' ','|',},
            {'-','-','-','-','-','-','-',}
        };
        char X = 'X';
        char O = 'O';
    public:
        std::map<int, char>::iterator _it = boardMap.begin();
        std::map<int, char> boardMap{
            {1, ' '}, {2, ' '}, {3, ' '},
            {4, ' '}, {5, ' '}, {6, ' '},
            {7, ' '}, {8, ' '}, {9, ' '}
        };
        void changeBoard();
        void displayBoard();
};  


#endif