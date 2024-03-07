#include <iostream>

using namespace std;

int main()
{
    int a,b=2,i;
    cout<<"Podaj liczbe naturalna dodatnia:"<<endl;
    cin>>a;
    if(a<=0)
    {
        cout<<"To nie jest liczba naturalna dodatnia."<<endl;
        return 0;
    }
    cout<<"Ponizsze liczby wystepuja w rozkladzie na czynniki pierwsze podanej liczby:"<<endl;
    if(a==1)
    {
        cout<<1<<endl;
        return 0;
    }
    while(a!=1)
    {
    while(a%b==0)
    {
        a=a/b;
        cout<<b<<endl;
    }
    b++;
    }
}
