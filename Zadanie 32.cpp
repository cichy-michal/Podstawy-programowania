#include <iostream>

using namespace std;

int main()
{
    int zakres;
    cout<<"Podaj koniec zakresu liczb jakie chcesz przetestowac."<<endl;
    cin>>zakres;
    int tab1[zakres/2-1];
    if(zakres>2 && zakres%2==0)
    {
        //Tablica liczb naturalnych parzystych od 4 do podanego zakresu.
        for(int i=0;i<zakres/2-1;i++)
        {
            tab1[i] = 4 + 2 * i;
        }
        //Tablica liczb pierwszych znajdujacych sie w podanym zakresie.
        int b=2,c=2,d=0,a=0,ile=0;
        int tab2[zakres-1];
        for(int i=2;i<=zakres;i++) tab2[i-2] = i;
        while(zakres>=b)
        {
        while(zakres>=d)
        {
            d=b*c;
            if(d-2 <= zakres-1)  tab2[d-2]=0;
            c++;
        }
            d=0;
            b++;
            c=2;
        }
        for(int i=0;i<zakres-1;i++)
        {
            if(tab2[i]!=0)ile++;
        }
        int tab3[ile];
        for(int i=0;i<zakres-1;i++)
        {
            if(tab2[i]!=0)
            {
                tab3[a] = tab2[i];
                a++;
            }
        }
        //Szukanie sumy liczb z tablicy 3 odpowiadajacej danej liczbie z tablicy 1.
        int hip;
        for(int i=0;i<zakres/2-1;i++)
        {
            for(int j=0;j<ile;j++)
            {
                for(int l=0;l<ile;l++)
                {
                    if(tab1[i] == tab3[j] + tab3[l])
                    {
                            cout<<tab1[i]<<" = "<<tab3[j]<<" + "<<tab3[l]<<endl;
                            hip++;
                            goto s;
                    }
                }
            }
         s:
         if(hip==0)
         {
             cout<<"Hipoteza Goldbacha obalona!!!"<<endl;
             return 0;
         }
         hip=0;
        }
    }
    else
    {
        cout<<"Podana liczba nie jest liczba naturalna parzysta wieksza od 2."<<endl;
    }
}
