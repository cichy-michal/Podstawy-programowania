#include <iostream>

using namespace std;

int main()
{
    int a,b=2,c=2,d=0,i,j,ile=0;
    cout<<"Podaj koniec zakresu szukania liczb pierwszych: "<<endl;
    cin>>a;
    int tab[a-1];
    for(i=2;i<=a;i++) tab[i-2] = i;
    while(a>=b)
    {
    while(a>=d)
    {
        d=b*c;
        if(d-2 <= a-1)  tab[d-2]=0;
        c++;
    }
        d=0;
        b++;
        c=2;
    }
    for(i=0;i<(a-1);i++)
    {
        if(tab[i]!=0)ile++;
    }
    cout<<"W przedziale 2-"<<a<<" znajduje sie "<<ile<<" liczby pierwsze:"<<endl;
    for(i=0;i<(a-1);i++)
    {
        if(tab[i]!=0) cout<<tab[i]<<endl;

    }
}
