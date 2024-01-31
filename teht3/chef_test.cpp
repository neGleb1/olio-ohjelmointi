#include "chef.h"

int main () {

    Chef firstChef("first chef");
    ItalianChef secondChef("second chef", 20, 50);

    firstChef.makeSalad();
    firstChef.makeSoup();
    
    secondChef.makeSalad();
    secondChef.makeSoup();
    secondChef.makePasta();
    
    return 0;
}
