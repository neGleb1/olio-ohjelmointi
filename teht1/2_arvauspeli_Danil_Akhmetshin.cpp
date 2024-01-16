#include <cstdlib> 
#include <iostream>
#include <time.h>
using namespace std; 

void startGame() {

    int max = 20;
    srand(time(0));
    int generatedNumber = rand() % max + 1;
    int userNumber;
    
    cout << "Try to guess generated number from 1 to 20!" << endl;
    
    while (userNumber != generatedNumber){
    
        cout << "Enter number " << endl;
        cin >> userNumber;
        
        if(userNumber < generatedNumber) cout << "Luku on suurempi" << endl;
        if(userNumber > generatedNumber) cout << "Luku on pienempi" << endl;
    }
    cout << "Oikea vastaus" << endl;

}
 
int main() 
{ 

    startGame();
    
    return 0;
}
