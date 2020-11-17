#include <iostream>
#include <cstring>

#include "Planeta.h"

using namespace std;

int main()
{




    int n;
    cout<<"numarul de planete: "<<endl;
    cin>>n;

    Planeta *p;
    p= new Planeta[n];

    int i;

    char *a;
    int b,c,d;

    for (i=0;i<n;i++)
    {

        a=new char[101];
        cout<<"numele planetei: ";
        cin>>a;
        cout<<endl;
        cout<<"numarul de sateliti naturali: ";
        cin>>b;
        cout<<endl;
        cout<<"numarul de sateliti artificiali: ";
        cin>>c;
        cout<<endl;
        cout<<"gravitatie: ";
        cin>>d;
        cout<<endl;


        p[i].set_nume(a);
        p[i].set_numar_sateliti_naturali(b);
        p[i].set_numar_satelit_artificiali(c);
        p[i].set_gravitatie(d);


    }

    for (i=0;i<n;i++)
        cout<<p[i];

cout<<endl;

for (i=0;i<n;i++)
{
    cout<<"numarul total de sateliti al planetei "<< p[i].get_nume()<< "este: "<< p[i].numar_total_de_sateliti();
    cout<<endl;
}

int x,y;

cout<<"intervalul este: ";
cin>>x;
cin>>y;


cout<<"planetele care au gravitatia in interval: ";
cout<<endl;
for (i=0;i<n;i++)
{
    interval_gravitatie(p[i],x,y);
}


int maxim_naturali=0;
int maxim_artificiali=0;

for (i=0;i<n;i++)
{
    if (p[i].get_numar_sateliti_naturali()>maxim_naturali)
        maxim_naturali=p[i].get_numar_sateliti_naturali();
    if (p[i].get_numar_sateliti_artificiali()>maxim_artificiali)
        maxim_artificiali=p[i].get_numar_sateliti_artificiali();

}

cout<<endl;

cout<<"numarul maxim de sateliti naturali: "<< maxim_naturali;
cout<<endl;
cout<<"numarul maxim de sateliti artificiali: " <<maxim_artificiali;

}




