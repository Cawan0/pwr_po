#include "cWezel.h"
#include <cstddef>
#include "cProdukt.h"

cWezel::cWezel(cProdukt* aAdres)
{
    mAdres = aAdres->cKlonuj();
    this->nastepnyElement = NULL;
}

cProdukt* cWezel::getAdres(){
    return mAdres;
}

cWezel::~cWezel()
{
    //dtor
}
