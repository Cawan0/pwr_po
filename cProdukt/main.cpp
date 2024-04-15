#include <iostream>
#include "include/cProdukt.h"

using namespace std;

int main()
{

    //test
    cProdukt a(12,"cos");
    cProdukt b(12,"cos");
    cProdukt c(12,"cos");
    a.Pokaz();
    cWarzywo d(11,"marchew","czarny");

    cout<<a.getLp()<<endl;
    cout<<b.getLp()<<endl;
    cout<<c.getLp()<<endl;
    d.Pokaz();
    d.Wypelnij(13,"jablko","czerwone");
    d.Pokaz();

    return 0;
}
