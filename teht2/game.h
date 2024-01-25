#ifndef GAME_H

#define GAME_H

class Game {

public:

   Game(int max){this->maxNumber=max;};

   ~Game();
   
   void play(); 

   void printGameResult();

private:

    int maxNumber;

    int randomNumber;
    
    int playerGuess;

    int numOfGuesses = 0;
    
};

#endif // GAME_H
