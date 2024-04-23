#ifndef CPRODUKT_H
#define CPRODUKT_H
#include <string>

class cProdukt
{
    public:
        cProdukt();
        cProdukt(float aCena, std::string aNazwa);
        cProdukt(float aCena, std::string aNazwa, int aLp);
        virtual ~cProdukt();
        Wypelnij(float aCena, std::string aNazwa);
        virtual Pokaz();
        virtual cProdukt* cKlonuj();
        setLp(int aLp);
        getLp();
        static int gLp;

    private:
        float cena;
        unsigned int lp;
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
