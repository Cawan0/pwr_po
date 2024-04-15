#include "cProdukt.h"
#include <string>
#include <iostream>

using namespace std;

int cProdukt::gLp=1;

cProdukt::cProdukt(){
}

cProdukt::cProdukt(float aCena, string aNazwa) :cena(aCena), nazwa(aNazwa), lp(gLp){
    gLp++;
}

cProdukt::~cProdukt(){

}

cProdukt::Wypelnij(float aCena, string aNazwa){
    this->cena=aCena;
    this->nazwa=aNazwa;
}

cProdukt::Pokaz(){
    cout<<"Lp: "<<this->lp<<endl;
    cout<<"Nazwa: "<<this->nazwa<<endl;
    cout<<"Cena: "<<this->cena<<endl;
}

cProdukt::setLp(int aLp){
    this->lp=aLp;
}

cProdukt::getLp(){
    return this->lp;
}

cWarzywo::cWarzywo(){
}

cWarzywo::cWarzywo(float aCena, string aNazwa, char aKolor[20]) :cProdukt(aCena,aNazwa){
    copy(aKolor, aKolor+20, this->mKolor);
}

cWarzywo::Pokaz(){
    cProdukt::Pokaz();
    cout<<"Kolor: "<<this->mKolor<<endl;
}

cWarzywo::Wypelnij(float aCena, string aNazwa, char aKolor[20]){
    cProdukt::Wypelnij(aCena, aNazwa);
    copy(aKolor, aKolor+20, this->mKolor);
}
