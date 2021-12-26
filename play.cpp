#include"GameBoard.hpp"
#include"Game.hpp"
#include<iostream>

void play(){
    Game game;
    std::cout<<"\t!!!Welcome to TicTacToe!!!\n";
    std::string player1;std::string player2;
    std::cout<<"What is your name player1?: ";
    std::getline(std::cin, player1);
    std::cout<<"What is your name player2?: ";
    std::getline(std::cin, player2);
    std::cout<<player1<<" is X\t"<<player2<<" is O"<<std::endl;
    std::cout<<"Key of putting X or O on positions by numbers are from 1 to 9\n";
    while(true){
        game.show();
        int index; char symbol;
        std::cout<<player1<<" enter the position and symbol: "<<std::endl;
        std::cin>>index; std::cin>>symbol;
        while(!game.isValidInsertforPlayer1(index, symbol)){
            std::cerr<<"Invalid input or position"<<std::endl;
            std::cin.clear();
            while(std::cin.get() != '\n'){
                continue;
            }
            std::cout<<"Please enter right position and symbol!\n";
            std::cin>>index; std::cin>>symbol;
        }
        game.setSymbolForPlayer1(index, symbol);
        game.show();
        if(game.XWon() == true){
            std::cout<<player1<<" won the game!!!\n";
            break;
        }
        std::cout<<player2<<" enter the position and symbol: "<<std::endl;
        std::cin>>index; std::cin>>symbol;
        while(!game.isValidInsertforPlayer2(index, symbol)){
            std::cerr<<"Invalid input or position"<<std::endl;
            std::cin.clear();
            while(std::cin.get() != '\n'){
                continue;
            }
            std::cout<<"Please enter the right position and symbol!\n";
            std::cin>>index; std::cin>>symbol;
        }
        game.setSymbolForPlayer2(index, symbol);
        game.show();
         if(game.OWon() == true){
            std::cout<<player2<<" won the game!!!\n";
            break;
        }
    }
    std::cout<<"Thanks for the game, Bye"<<std::endl;
}

int main(){
    play();
}