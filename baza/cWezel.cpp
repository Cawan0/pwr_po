#include "cWezel.h"
#include <cstddef>

cWezel::cWezel(int aLiczba) : liczba(aLiczba)
{
    this->nastepnyElement = NULL;

}

cWezel::~cWezel()
{
    //dtor
}
