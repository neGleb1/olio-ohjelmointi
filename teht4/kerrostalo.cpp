#include <iostream>
using namespace std;

#include "kerrostalo.h"

Asunto::Asunto(){
    
    cout<<"Asunto constructor"<<endl;
}

Asunto::~Asunto(){
    
    cout<<"Asunto destructor"<<endl;
}

void Asunto::maarita(int asukkaita, int neliota){
    
    asukasMaara = asukkaita;
    neliot = neliota;
    cout<<"Asunto asukkaita= "<<asukasMaara<<" neliota= "<<neliot<<endl;
}

double Asunto::laskeKulutus(double hinta){
    
    double kulutus = asukasMaara*neliot*hinta;
    cout<<"Asunnon kulutus, kun hinta= "<<hinta<<" on "<<kulutus<<endl;
    return kulutus;
}

Kerros::Kerros() : as1(), as2(), as3(), as4(){
    
    cout<<"Kerros constructor"<<endl;
}

Kerros::~Kerros(){
    
    cout<<"Kerros destructor"<<endl;
}

void Kerros::maaritaAsunnot(){
    cout<<"Maaritetaan kerroksen asuntoja"<<endl;
    as1.maarita(3, 80);
    as2.maarita(2, 60);
    as3.maarita(1, 70);
    as4.maarita(3, 100);
}

double Kerros::laskeKulutus(double hinta){
    
    double kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + as3.laskeKulutus(hinta) + as4.laskeKulutus(hinta);
    cout<<"Kerroksen kulutus, kun hinta= "<<hinta<<" on "<<kulutus<<endl;
    return kulutus;
}

Katutaso::Katutaso()  : as1(),  as2() {
    
   cout<<"Katutaso constructor"<<endl;
}

Katutaso::~Katutaso(){
    
    cout<<"Katutaso destructor"<<endl;
}

void Katutaso::maaritaAsunnot() {
    cout<<"Maaritetaan katutason asuntoja"<<endl;
    as1.maarita(3, 80);
    as2.maarita(2, 60);
}

double Katutaso::laskeKulutus(double hinta){
    
    double kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);
    cout<<"Katutason kulutus, kun hinta= "<<hinta<<" on "<<kulutus<<endl;
    return kulutus;
}

Kerrostalo::~Kerrostalo(){
    
    delete eka;
    eka = nullptr;
    cout<<"Kerrostalo destructor"<<endl;
}

double Kerrostalo::laskeKulutus(double hinta){
    
    cout<<"Maaritetaan kerrostalon asuntoja"<<endl;
    eka->maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    double kulutus = eka->laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
    cout<<"Kerrostalon kulutus, kun hinta= "<<hinta<<" on "<<kulutus<<endl;
    return kulutus;
}

