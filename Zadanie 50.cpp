#include <iostream>

using namespace std;

int sprawdzam(char nauczyciel[],char dziecko[])
{
    int blad=0;
    for(int i=0;i<43;i++)
    {
        if(dziecko[i] != nauczyciel[i]) blad++;
    }
    return blad;
}

int main()
{
    char dziecko[45];
    char nauczyciel[45] = {"Litwo! Ojczyzno moja! Ty jestes jak zdrowie."};
    cout<<"Przepisz bezblednie podany tekst:"<<endl;
    cout<<"Litwo! Ojczyzno moja! Ty jestes jak zdrowie."<<endl;
    cin.getline(dziecko,44);
    cout<<"Liczba bledow w tekscie wynosi "<<sprawdzam(nauczyciel,dziecko)<<"."<<endl;
}
