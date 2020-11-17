#include <iostream>
#include <cstring>
#include <stdio.h>
#include<stdlib.h>
#include "Depozit.h"

using namespace std;

int main()
{
    char **a;
    int i;

    int n;
    cin>>n;


    Depozit *v;
    v=new Depozit[n];


    int pr;

    int maxim=0;

    for (i=0; i<n; i++)

    {
        cin >>pr;
        cout<<"depozitul " << i<< " are "  << pr<< " produse"<<endl;

        cout<<"depozitul " << i << " are produsele: "<<endl;

        a=new char*[pr];
        for (int t=0; t<pr; t++)
            a[t]=new char[101];
        for (int j=0; j<pr; j++)
        {
            fflush(stdin);
            cin.getline(a[j],101);
        }

        v[i].set_produse(a,pr);
        v[i].set_nr(pr);

        if (v[i].get_nr()>maxim)
        {
            maxim=v[i].get_nr();
        }


    }

    cout<<endl;

    cout<<"Depozitul/depozitele care are/au cel/cele mai multe produse este/sunt: "<<endl;

    for (i=0; i<n; i++)
    {
        if (maxim==v[i].get_nr())
        {
            cout<<"Depozitul " << i<< " cu produsele: "<<endl;
            cout<<v[i]<< " ";
        }


        cout<<endl;
    }

    int g;
    cout<<"citim o valoare";
    cout<<endl;
    cin>>g;

    cout<<endl;
    cout<<"citim 5 produse";
    cout<<endl;
    char **s;
    s=new char*[5];
    for (i=0; i<5; i++)
        s[i]=new char[101];
    for (i=0; i<5; i++)
    {
        fflush(stdin);
        cin.getline(s[i],101);
    }



    cout<<"marim numarul de produse cu valorea respectiva";
    cout<<endl;
    Depozit h(s,5);
    Depozit m;
    m=h+=g;
    cout<<"dupa marire: ";;

    cout<<m.get_nr();
    cout<<endl;

    cout<<"dupa micsorare: ";
m=h-=g;
    cout<<m.get_nr();






    return 0;
}

