#ifndef CPRODUKT_H
#define CPRODUKT_H
#include <string>

class cProdukt
{
    public:
        cProdukt();
        cProdukt(float aCena, std::string aNazwa);
        virtual ~cProdukt();
        Wypelnij(float aCena, std::string aNazwa);
        Pokaz();
        setLp(int aLp);
        getLp();
        static int gLp;

    private:
        unsigned int lp;
        float cena;
        std::string nazwa;


};

class cWarzywo: public cProdukt{
    public:
        char mKolor[20];
        Pokaz();
        Wypelnij(float aCena,std::string aNazwa, char aKolor[20]);
        cWarzywo();
        cWarzywo(float aCena, std::string aNazwa, char aKolor[20]);
};

#endif // CPRODUKT_H
