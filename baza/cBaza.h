#ifndef CBAZA_H
#define CBAZA_H
#include "cWezel.h"

class cBaza
{
    public:
        cBaza();
        virtual ~cBaza();
        bDodaj(cProdukt* aAdres);
        bPokaz();

    private:
        cWezel* pierwszyElement;
};

#endif // CBAZA_H
