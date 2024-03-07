#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    float a,b,c,wynik1,wynik2,delta,pzdelty;
    cout << "Podaj wspolczynnik a:" << endl;
    cin>>a;
    cout<<"Podaj wspolczynnik b:"<<endl;
    cin>>b;
    cout<<"Podaj wspolczynnik c:"<<endl;
    cin>>c;
    delta=(b*b)-(4*a*c);
    pzdelty=sqrt(delta);
    if(a==0 && b!=0 && c!=0)
    {
        wynik1=((-c)/(b)); // bx+c=0
        cout<<"Twoja funkcja jest liniowa.\nWynik rownania ax^2+bx+c=0 wynosi:"<<wynik1<<endl;
        return 0;
    }
    if(a==0 && b==0 && c!=0)
    {
        wynik1=c;
        cout<<"Wynik rownania ax^2+bx+c=0 wynosi:"<<wynik1<<endl;
        return 0;
    }
    if(a==0 && b==0 && c==0)
    {
        cout<<"Rozwiazaniem rownania ax^2+bx+c=0 jest kazda liczba rzeczywista."<<endl;
        return 0;
    }
    if(a!=0 && b==0 && c==0)
    {
        wynik1=sqrt(a);
        wynik2=(-sqrt(a));
        cout<<"Wynik rownania ax^2+bx+c=0 wynosi: "<<wynik1<<" i "<<wynik2<<endl;
        return 0;
    }
    if(a==0 && b!=0 && c==0)
    {
        wynik1=0;
        cout<<"Wynik rownania ax^2+bx+c=0 wynosi: "<<wynik1<<endl;
        return 0;
    }
    if(delta>0 ) // np. a=1 b=5 c=6
    {
        cout<<"Delta jest dodatnia."<<endl;
        wynik1=(((-b)-pzdelty)/(2*a));
        wynik2=(((-b)+pzdelty)/(2*a));
        cout<<"Wynik rownania ax^2+bx+c=0 wynosi: "<<wynik1<<" i "<<wynik2<<endl;
        return 0;
    }
    if(delta==0) // np. a=1 b=4 c=4
    {
        cout<<"Delta jest rowna 0."<<endl;
        wynik1=(-b/(2*a));
        cout<<"Wynik rownania ax^2+bx+c=0 wynosi:"<<wynik1<<endl;
        return 0;

    }
    if(delta<0) // np. a=1 b=4 c=6
    {
        cout<<"Delta jest ujemna."<<endl;
        cout<<"Rownanie ax^2+bx+c=0 nie ma rozwiazan w zbiorze liczb rzeczywistych."<<endl;
        return 0;
    }
}
