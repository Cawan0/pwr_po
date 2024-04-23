#ifndef CWEZEL_H
#define CWEZEL_H
#include "cProdukt.h"
#include <string>

class cWezel
{
    public:
        cWezel(cProdukt* aAdres);
        virtual ~cWezel();
        cWezel* nastepnyElement;
        cProdukt* getAdres();

    private:
        cProdukt* mAdres;
};

#endif // CWEZEL_H
