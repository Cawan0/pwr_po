#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

typedef unsigned long long int ull;

class Sito{
public:
    void Odsiej(){
        for(ull i=2;i*i<=numbers.size();i++){
            for(int j=i*i;j<=numbers.size();j+=i)
            numbers[j-1]=false;
        }
    };
    void Wyswietl(){
        for(ull i=0;i<this->numbers.size();i++){
            if(numbers[i])
            cout<<i+1<<" "<<endl;
        }
    };
    bool Sprawdz(ull x){
        cout<<"halo"<<endl;
        return this->numbers[x-1];

    };
    Sito(ull range){
        this->numbers.resize(range);
        fill(numbers.begin(),numbers.end(),true);
        this->numbers[0]=false;
    };
private:
    vector<bool> numbers;
};



int main()
{
    ull range;
    ull menu,numberForCheck;
    cout<<"Zakres od 1 do ";
    cin>>range;
    Sito a(range);
    a.Odsiej();

    while(menu!=0){
        system("cls");
        cout<<"Zakres od 1 do "<<range<<endl;
        cout<<"1. Wyswietl liczby pierwsze"<<endl<<"2. Sprawdz czy liczba jest pierwsza"<<endl<<endl<<"0. Wyjdz z wprogramu"<<endl<<"Wybor: ";
        cin>>menu;
        if(menu==1){
            a.Wyswietl();
            system("pause");
        }else if(menu==2){
            cout<<"Liczba do sprawdzenia: ";
            cin>>numberForCheck;
            if(!(numberForCheck<1 || numberForCheck>range)){
            if(a.Sprawdz(numberForCheck)){
                cout<<"Liczba jest piewsza"<<endl;
            }else{
                cout<<"Liczba nie jest pierwsza"<<endl;
            }
            system("pause");
            }
        }
    }

    return 0;
}
