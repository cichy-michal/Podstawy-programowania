#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"Wybierz program z jakiego chcesz skorzystac."<<endl;
    cout<<"1.Zamiana liczby z systemu dziesietnego na liczbe w systemie dwojkowym."<<endl;
    cout<<"2.Zamiana liczby z systemu dwojkowego na liczbe w systemie dziesietnym."<<endl;
    cout<<"Podaj liczbe 1 lub 2."<<endl;
    int wybor;
    cin>>wybor;
    switch(wybor)
    {
        case 1:
    int a,b,c,d,wykladnik;
    cout<<"Podaj liczbe w systemie dziesietnym:"<<endl;
    cin>>a;
    cout<<"Ta liczba w systemie dwojkowym to:"<<endl;
    if(a>65535)
    {
        cout<<"Ta liczba nie miesci sie w typie danych int."<<endl;
        return 0;
    }
    wykladnik=15;
    while(wykladnik>=0)
    {
        b=pow(2,wykladnik);
    if(a>=b)
    {
        c=a;
        a=c-b;
        cout<<1;
    }
    else
    {
        wykladnik--;
        d=(b*2);
        if(c>=d)
        {
            cout<<0;
        }
    }
    }
    return 0;
        case 2:
            float e,f;
            int liczba=0,wyk=15;
            cout<<"Podaj liczbe w systemie dwojkowym:"<<endl;
            cin>>e;
            cout<<"Ta liczba w systemie dziesietnym to :"<<endl;
            if(e>1111111111111111)
            {
                cout<<"Ta liczba nie miesci sie w typie danych int."<<endl;
                return 0;
            }
            while(wyk>=0)
            {
                f=pow(10,wyk);
            if(e/f>=1)
            {
                liczba+=pow(2,wyk);
                e-=f;
            }
            else
            {
                wyk--;
            }
            }
            cout<<liczba<<endl;
    }
}
