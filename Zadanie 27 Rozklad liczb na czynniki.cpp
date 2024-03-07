#include <iostream>

using namespace std;

int main()
{
    int a,b=2,i,c=0;
    cout<<"Podaj liczbe calkowita:"<<endl;
    cin>>a;
    if(a==0 || a==1 || a<0)
    {
        cout<<"Tej liczby nie da sie rozlozyc na liczby pierwsze."<<endl;
        return 0;
    }
    if(a>0)
    {
    cout<<a<<" = ";
    while(a!=1)
    {
    while(a%b==0)
    {
        a/=b;
        c++;
    }
    if(c!=0)
    {
        cout<<b<<"^"<<c;
        if(a!=1)
        {
            cout<<" * ";
        }
    }
    b++;
    c=0;
    }
    }
}
