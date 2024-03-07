#include <iostream>

using namespace std;

char* odwrot(char *start,char *cel)
{
    while(*start) start++;
    start--;
    for(int i=0;i<500;i++)
    {
        *cel = *start;
        cel = cel + 1;
        *cel = 32;
        cel++;
        start--;
    }
    cel -=1000;
    return cel;
}

int main()
{
    char *start,*cel,*pantadeusz,*hamlet;
    start = new char [1000];
    cel = new char [1000];
    cout<<"Wpisz tekst, ktory chcesz sformatowac:"<<endl;
    cin.getline(start,1000);
    cout<<odwrot(start,cel)<<endl<<endl;;
    char pan_tadeusz[1000]={"Litwo! Ojczyzno moja! Ty jestes jak zdrowie,\nIle cie trzeba cenic, ten tylko sie dowie,\nKto cie stracil. Dzis pieknosc twa w calej ozdobie\nWidze i opisuje, bo tesknie po tobie\nPanno swieta, co Jasnej bronisz Czêstochowy\nI w Ostrej swiecisz Bramie! Ty, co grod zamkowy\nNowogrodzki ochraniasz z jego wiernym ludem!"};
    pantadeusz = pan_tadeusz;
    char hamlet_[1000]={"Taras przed zamkiem.\nna warcie. \tzbliza siê ku niemu.\nKto tu?\nNie, pierwej ty sam mi odpowiedz,\nStoj, wymien haslo!\nNiech Bog chroni krola.\nBernardo?\n\nTen sam.\nBardzo akuratnie\nStawiacie sie na czas, panie Bernardo."};
    hamlet = hamlet_;
    cout<<"Sformatowany Pan Tadeusz:"<<endl;
    cout<<odwrot(pantadeusz,cel)<<endl<<endl;
    cout<<"Sformatowany Hamlet:"<<endl;
    cout<<odwrot(hamlet,cel)<<endl;
    delete [] start;
    delete [] cel;
}
