#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int dl;
    cout<<"Podaj dlugosc tablicy."<<endl;
    cin>>dl;
    float tab[dl];
    for(int i=0;i<dl;i++)
    {
        tab[i] = rand()%1000+0;
        cout<<"Element nr."<<i+1<<" to "<<tab[i]/1000<<endl;
    }
    float minimum = tab[0]/1000;
    int indeks = 1;
    for(int i=1;i<dl;i++)
    {
        if(minimum>tab[i]/1000)
        {
            minimum = tab[i]/1000;
            indeks = i+1;
        }
    }
    cout<<endl<<"Element nr."<<indeks<<", ktory wynosi "<<minimum<<" to najmniejszy element tej tablicy."<<endl;;
}
