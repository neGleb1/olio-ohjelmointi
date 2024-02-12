#include <iostream>
using namespace std;

#ifndef KERROSTALO_H

#define KERROSTALO_H

class Asunto {

public:

   int asukasMaara;
   int neliot;

   Asunto();

   ~Asunto();
   
   void maarita(int, int); 

   double laskeKulutus(double);
};

class Kerros : public Asunto {

public:
   
   Kerros();

   virtual ~Kerros();
   
   virtual void maaritaAsunnot(); 

   virtual double laskeKulutus(double);

private:
    
    Asunto *as1;
    Asunto *as2;
    Asunto *as3;
    Asunto *as4;
};

class Katutaso : public Asunto, public Kerros {

public:
   
   Katutaso();

   ~Katutaso();
   
   void maaritaAsunnot() override; 

   double laskeKulutus(double) override;

private:
    
    Asunto *as1;
    Asunto *as2;
};

class Kerrostalo : public Kerros, public Katutaso {

public:

   Kerrostalo() : eka(new Katutaso), toka(new Kerros), kolmas(new Kerros){
   
        cout<<"Kerrostalo constructor"<<endl;
   };

   ~Kerrostalo();

   double laskeKulutus(double);
   
private:

    Kerros *eka;
    Kerros *toka;
    Kerros *kolmas;

};

#endif
