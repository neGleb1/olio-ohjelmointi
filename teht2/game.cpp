#include <cstdlib> 
#include <iostream>
#include <time.h>
using namespace std;

#include "game.h"

void Game::play() {

    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    
    cout << "Try to guess generated number from 1 to " << maxNumber << "!" << endl;
    
    while (playerGuess != randomNumber){
    
        cout << "Enter number " << endl;
        cin >> playerGuess;
        
        if(playerGuess < randomNumber) cout << "Luku on suurempi" << endl;
        if(playerGuess > randomNumber) cout << "Luku on pienempi" << endl;
        
        numOfGuesses++;
    }

    printGameResult();
    
}

void Game::printGameResult() {

    cout << "Oikea vastaus " << randomNumber << endl;

    cout << "Your repeats number is " << numOfGuesses << endl;

}

Game::~Game() {

    cout << "Object of class Game was cleared" << endl;

}
