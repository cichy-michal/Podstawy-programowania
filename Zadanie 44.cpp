#include <iostream>

using namespace std;

int b=1,c=0,wyk=0;
int silnia_2_i(int a)
{
    if(a%2==0) wyk=(a-1)/2+1;
    else wyk=(a-1)/2;
    for(int i=0;i<wyk;i++)
    {
        b*=(a-c);
        c+=2;
    }
    a=b;
}
int silnia_2_r(int a)
{
    if(a==1 || a==0) return 1;
    return a * silnia_2_r(a-2);
}

int main()
{
    int a;
    cout<<"Podaj liczbe naturalna:"<<endl;
    cin>>a;
    if(a<0) cout<<"To nie jest liczba naturalna"<<endl;
    if(a==0 || a==1) cout<<"Silnia podwojna z podanej liczby wynosi 1."<<endl;
    else cout<<"Silnia podwojna z podanej liczby liczona metoda iteracyjna wynosi "<<silnia_2_i(a)<<
        ", a liczona metoda rekurencyjna wynosi "<<silnia_2_r(a)<<"."<<endl;

}
