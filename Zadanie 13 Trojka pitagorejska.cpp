#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<"Podaj liczbe calkowita a:"<<endl;
    cin>>a;
    cout <<"Podaj liczbe calkowita b:"<<endl;
    cin>>b;
    cout <<"Podaj liczbe calkowita c:"<<endl;
    cin>>c;
    if((a*a)+(b*b)==(c*c)||(b*b)+(c*c)==(a*a)||(c*c)+(a*a)==(b*b))
       {
           cout <<"Liczby stanowia trojke pitagorejska."<<endl;
       }
    else
        {
            cout <<"To nie jest trojka pitagorejska."<<endl;
        }

}
