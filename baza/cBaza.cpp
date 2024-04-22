#include "cBaza.h"
#include <iostream>
#include <cstddef>

using namespace std;

cBaza::cBaza()
{
    this->pierwszyElement = NULL;
}

cBaza::~cBaza()
{
    //dtor
}

cBaza::bDodaj(int liczba){
    cWezel* nowyWezel = new cWezel(liczba);
    nowyWezel->nastepnyElement = this->pierwszyElement;
    this->pierwszyElement = nowyWezel;
}

cBaza::bPokaz(){
    cWezel* i=this->pierwszyElement;
    while(i!=NULL){
        cout<<i->liczba<<endl;
        i=i->nastepnyElement;
    }
}
