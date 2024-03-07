#include <iostream>

using namespace std;

int main()
{
    int a,c,i,wykladnik;
    long long int b;
    cout<<"Podaj liczbe calkowita:"<<endl;
    cin>>a;
    if(a<0)
    {
        cout<<"Blad. Liczba jest ujemna."<<endl;
        return 0;

    }
    if(a==0)
    {
        cout<<"Silnia z podanej liczby wynosi 1."<<endl;
        return 0;
    }
    else
    wykladnik=a-1;
    b=1;
    c=0;
    for(i=0;i<wykladnik;i++)
    {
        b*=(a-c);
        c++;
    }
    cout<<"Silnia z podanej liczby wynosi "<<b<<"."<<endl;
}
