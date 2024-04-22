#ifndef CBAZA_H
#define CBAZA_H
#include "cWezel.h"

class cBaza
{
    public:
        cBaza();
        virtual ~cBaza();
        bDodaj(int liczba);
        bPokaz();

    private:
        cWezel* pierwszyElement;
};

#endif // CBAZA_H
