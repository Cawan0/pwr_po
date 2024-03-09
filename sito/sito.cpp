#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> fillVector(vector<int> v){
  // cout<<"range: "<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    // cout<<"i: "<<i<<"value: "<<i+2<<endl;
    v[i] = i+2;
  }
  return v;
}
void showVector(vector<int> v){
  // cout<<"showing vector: "<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
  }
  cout<<endl;
}
vector<int> deleteElement(vector<int> v,int value){
vector<int>::iterator it;
for(int i=2;i<=v[v.size()-1]/2;i++){
  int o=value*i;
  it=find(v.begin(),v.end(),o);
  if(
    it!=v.end()){
    // cout<<*it<<endl;
    v.erase(it);
  }
}

  // showVector(v);
  return v;
}

int main(){
  int range;
  cout<<"podaj przedzial: od 2 do ";
  cin>>range;
  range = range-1;

  vector<int> liczby(range);
  liczby=fillVector(liczby);
  // showVector(liczby);

  range = sqrt(liczby[liczby.size()-1]);
  vector<int> temp(range);
  for(int i=1;i<=range;i++){
    temp[i-1]=i;
  }
  temp.erase(temp.begin());
  for(int i=2;i<=range/2;i++){
    temp=deleteElement(temp,i);
  }
  // showVector(temp);
  for(int i=0;i<=temp.size();i++){
    // cout<<"deleting for "<<temp[i]<<endl;
    liczby=deleteElement(liczby,temp[i]);
  }
  cout<<"liczb pierwszych jest: "<<liczby.size()<<endl;
  cout<<"liczby pierwsze: "<<endl;
  showVector(liczby);


}
