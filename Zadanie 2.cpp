#include <iostream>

using namespace std;

int main()
{
   float wzrost,bmi,waga;
   cout<<"Podaj swoja wage w kilogramach:"<<endl;
   cin>>waga;
   cout<<"Podaj swoj wzrost w metrach:"<<endl;
   cin>>wzrost;
   bmi=waga/(wzrost*wzrost);
    if(bmi<18.5)
   {
       cout<<"Jestes za chudy"<<endl;
   }
    if(bmi>25)
   {
       cout<<"Jestes za gruby"<<endl;
   }
   cout<<"Twoje BMI wynosi "<<bmi<<"."<<endl;
}
