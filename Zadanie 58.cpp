#include <iostream>

using namespace std;


int* tab_mn (int x,int y)
{
    int tab[10][10];
    int ypom=y;
    int *w;
    for(int i=0;i<10;i++,x++)
    {
        for(int j=0,y=ypom;j<10;j++,y++) tab[i][j] = x*y;
    }
    w = &tab[0][0];
    return w;
}
char tab_mn_pokaz (int x,int y)
{
    int a,*w,ile=0;
    for(int i=0;i<100;i++)
    {
        w = tab_mn(x,y) + i;
        a = *w ;
        cout<<a<<"\t";
        ile++;
        if(ile==10)
        {
            ile=0;
            cout<<endl;
        }
    }
    return 0;
}

int main()
{
    int *tab;
    tab = new int [10];
    for(int i=0;i<10;i++,tab++) *tab = i+1;
    tab-=10;
    cout<<tab_mn_pokaz(*tab,*tab);
    delete [] tab;
}
