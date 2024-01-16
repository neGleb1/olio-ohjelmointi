#include <cstdlib> 
#include <iostream>
#include <time.h>
using namespace std; 

int game(int maxnum) {

    srand(time(0));
    int generatedNumber = rand() % maxnum + 1;
    int userNumber;
    int repeats;
    
    cout << "Try to guess generated number from 1 to " << maxnum << "!" << endl;
    
    while (userNumber != generatedNumber){
    
        cout << "Enter number " << endl;
        cin >> userNumber;
        
        if(userNumber < generatedNumber) cout << "Luku on suurempi" << endl;
        if(userNumber > generatedNumber) cout << "Luku on pienempi" << endl;
        
        repeats++;
    }
    cout << "Oikea vastaus" << endl;
    return repeats;

}

int main() 
{ 

    int limit;
    int repeats;
    
    cout << "Enter the limit of generated numbers " << endl;
    cin >> limit;

    repeats = game(limit);
    cout << "Your repeats number is " << repeats << endl;
    
    return 0;
}
