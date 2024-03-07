#include <iostream>

using namespace std;

int mala,duza;
int nwd(int a,int b)
{
    if(a<b)
    {
        mala=a;
        duza=b;
    }
    else
    {
        mala=b;
        duza=a;
    }
    duza=duza%mala;
    if(duza==0) return mala;
    else return nwd(mala,duza);
}

int main()
{
    int a,b;
    cout<<"Podaj pierwsza liczbe naturalna:"<<endl;
    cin>>a;
    cout<<"Podaj druga liczbe naturalna:"<<endl;
    cin>>b;
    if(a<1 || b<1) cout<<"To nie jest liczba naturalna"<<endl;
    else cout<<"Najwiekszy wspolny dzielnik podanych liczb wynosi "<<nwd(a,b)<<"."<<endl;
}
