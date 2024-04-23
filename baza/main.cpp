#include <iostream>
#include "cBaza.h"
#include "cWezel.h"


using namespace std;

int main()
{

    cProdukt b(12,"cos");
    cWarzywo c(14,"marchew","czerwony");
    cBaza a;

    a.bDodaj(&b);
    a.bDodaj(&c);
    a.bPokaz();



    b.setLp(17);
    cout<<endl;
    a.bPokaz();

    return 0;
}
