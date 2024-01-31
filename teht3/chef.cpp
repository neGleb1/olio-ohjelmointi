#include <string>
#include <iostream>
using namespace std;

#include "chef.h"


Chef::Chef(string name) {
   
    this->name=name;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
        
};

ItalianChef::ItalianChef(string name, int vesi, int jauhot):  Chef(name){
   
    this->name=name;
    this->vesi=vesi;
    this->jauhot=jauhot;
    //cout<<"Chef "<<name<<" konstruktori"<<endl;
        
};

Chef::~Chef() {

    cout<<"Chef "<<name<<" destruktori"<<endl;
        
};

//ItalianChef::~ItalianChef() {

//    cout<<"Chef "<<name<<" destruktori"<<endl;
        
//};

void Chef::makeSalad() {
   
    cout<<"Chef "<<name<<" makes salad"<<endl;
        
};

void Chef::makeSoup() {
   
    cout<<"Chef "<<name<<" makes soup"<<endl;
        
};

void ItalianChef::makePasta() {
   
    cout<<"Chef "<<name<<" makes pasta with recipe"<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
        
};

string ItalianChef::getName() {
   
    return name;
        
};
