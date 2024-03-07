#include <iostream>

using namespace std;

int main()
{
    float a,b;
    char znak;
    cout<<"Podaj operator arytmetyczny:"<<endl;
    cin>>znak;
    if(znak='%')
    {
        int a,b;
        cout<<"Podaj argument a, ktory jest liczba calkowita dodatnia:"<<endl;
        cin>>a;
        cout<<"Podaj argument b, ktory jest liczba calkowita dodatnia:"<<endl;
        cin>>b;
        cout<<"Wynik obliczen to: "<<a%b<<endl;
    }
    else
    cout<<"Podaj argument a:"<<endl;
    cin>>a;
    cout<<"Podaj argument b:"<<endl;
    cin>>b;
    if(znak == '+')
    {
        cout<<"Wynik obliczen to: "<<a+b<<endl;
    }
    if(znak == '-')
    {
        cout<<"Wynik obliczen to: "<<a-b<<endl;
    }
    if(znak == '*')
    {
        cout<<"Wynik obliczen to: "<<a*b<<endl;
    }
    if(znak == '/')
    {
        cout<<"Wynik obliczen to: "<<a/b<<endl;
    }
}
