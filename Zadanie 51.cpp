#include <iostream>

using namespace std;

    double potega(float x,int y)
    {
        if(y<0)
        {
            x = 1/x;
            y = (-y);
        }
        if(y==0) return 1;
        else return x*potega(x,y-1);
    }
int main()
{
    float x;
    int y;
    cout<<"Podaj podstawe potegi:"<<endl;
    cin>>x;
    cout<<"Podaj wykladnik potegi:"<<endl;
    cin>>y;
    cout<<"Wyrazenie x do potegi y wynosi "<<potega(x,y)<<"."<<endl;
}
