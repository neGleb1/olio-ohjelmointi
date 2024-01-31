#include <string>
using namespace std;

#ifndef CHEF_H

#define CHEF_H

class Chef {

public:

   Chef(string);

   ~Chef();
   
   void makeSalad(); 

   void makeSoup();

protected:

    string name;
    
};

class ItalianChef : public Chef {

public:

   ItalianChef(string, int, int);

   //~ItalianChef();
   
   string getName(); 

   void makePasta();
   
private:

    int vesi;
    int jauhot;
    
};

#endif
