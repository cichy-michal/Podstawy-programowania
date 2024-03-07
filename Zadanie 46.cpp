#include <iostream>

using namespace std;

int b=0,c=1,d=0;
int Fi(int a)
{
    for(int i=2;i<=a;i++)
    {
        d = b + c;
        b = c;
        c = d;
    }
    return d;
}
int Fr(int a)
{
   if(a==3) return 2;
   if(a==2) return 1;
   else return Fr(a-1) + Fr(a-2);
}

int main()
{
    int a;
    cout<<"Podaj wyraz ciagu Fibonacciego, ktory chcesz wyznaczyc"<<endl;
    cin>>a;
    if(a<0) cout<<"Nie ma takiego wyrazu ciagu Fibonacciego."<<endl;
    if(a==0) cout<<"Ten wyraz ciagu Fibonacciego to 0."<<endl;
    if(a==1) cout<<"Ten wyraz ciagu Fibonacciego to 1."<<endl;
    if(a>1) cout<<"Ten wyraz ciagu Fibonacciego policzony metoda iteracyjna to "<<Fi(a)<<
        ", a metoda rekurencyjna to "<<Fr(a)<<endl;


}
