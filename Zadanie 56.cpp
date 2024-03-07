#include <iostream>

using namespace std;

int f(int *x, int *y)
{
    int xpom = *x;
    int ypom = *y;
    *x = xpom * ypom;
    *y = xpom + ypom;
    return *x;
}
int main()
{
    int x,y;
    cout<<"Podaj dwa argumenty:"<<endl;
    cin>>x>>y;
    cout<<"Iloczyn tych argumentow wynosi "<<f(&x,&y)<<", a ich suma wynosi "<<y<<"."<<endl;
}
