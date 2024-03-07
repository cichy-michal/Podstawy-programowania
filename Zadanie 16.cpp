#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a=2,c,i,j,wykladnik;
    long long int b;
    long double x,z=1,cs=1,y=5;
    cout<<"Podaj argument x, aby obliczyc cos(x)"<<endl;
    cin>>x;
    while(x<(-M_PI))
    {
        x+=2*M_PI;
    }
    while(x>M_PI)
    {
        x-=2*M_PI;
    }
    for(j=0;j<8;j++)
    {
        wykladnik=a-1;
        b=1;
        c=0;
        for(i=0;i<wykladnik;i++)
        {
            b*=(a-c);
            c++;
        }
        z *= (-x) * x;
        cs += (z / b);
        a+=2;
        y = (z / b);
        if(abs(y)<1e-7)
        {
            break;
        }
    }
    cout<<"Wartosc cos(x) wedlug moich obliczen wynosi: "<<cs<<endl;
    cout << "Powinno wyjsc (okolo): " << cos(x) << endl;
    return 0;
}
