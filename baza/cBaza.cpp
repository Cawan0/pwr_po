#include "cBaza.h"
#include <iostream>
#include <cstddef>
#include <string>

using namespace std;

cBaza::cBaza()
{
    this->pierwszyElement = NULL;
}

cBaza::~cBaza()
{
    //dtor
}

cBaza::bDodaj(cProdukt* aAdres){
    cWezel* nowyWezel = new cWezel(aAdres);
    nowyWezel->nastepnyElement = this->pierwszyElement;
    this->pierwszyElement = nowyWezel;
}

cBaza::bPokaz(){
    cWezel* i=this->pierwszyElement;
    while(i!=NULL){
            //cout<<i->getAdres()<<endl;
            cProdukt* o = i->getAdres();
            o->Pokaz();
        i=i->nastepnyElement;
    }
}
