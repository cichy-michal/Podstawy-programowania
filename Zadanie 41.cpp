#include <iostream>

using namespace std;

int main()
{
    cout<<"Napisz tekst do zakodowania:"<<endl;
    char tekst[200];
    cin.getline(tekst,200);
    int i,j,l,b;
    char a;
    const char szyfr[26] = {'.','R','D','W',',','Y','P','U',
    ':','M','A','X','S','J','-','H','V','L','N','F','"','G',
    'O','T',';','B'};

    for(j=0;j<26;j++)
    {
        for(i=0;i<200;i++)
        {
            a=j+97;
            if(tekst[i]== a) tekst[i]=szyfr[j];
        }
    }

        cout<<"Twoj zakodowany tekst to:"<<endl;
        cout<<tekst<<endl;

    char alfabet[26];
    for(l=0;l<26;l++)
    {
        alfabet[l] = l+97;
    }
    for(j=0;j<26;j++)
    {
        for(i=0;i<200;i++)
        {
            a=szyfr[j];
            if(tekst[i]==a) tekst[i]=alfabet[j];
        }
    }
        cout<<"Aby odkodowac wczytaj liczbe 1:"<<endl;
        cin>>b;
        if(b==1) cout<<tekst<<endl;
}
