#include "Depozit.h"
#include <cstring>
#include <iostream>
using namespace std;
Depozit::Depozit()
{
      this->nr=5;
    int i;
    this->produse=new char*[5];
    for (i=0;i<5;i++)
        this->produse[i]=new char[101];
    for (i=0;i<5;i++)
        strcpy(this->produse[i],"");

}
Depozit ::Depozit(char **a, int b)
{
    this->nr=b;
    int i;
    this->produse=new char*[b];
    for (i=0;i<b;i++)
        this->produse[i]=new char[101];
    for (i=0;i<b;i++)
        strcpy(this->produse[i],a[i]);
}
void Depozit::set_produse(char **a,int b)
{
      this->nr=b;
    int i;
    this->produse=new char*[b];
    for (i=0;i<b;i++)
        this->produse[i]=new char[101];
    for (i=0;i<b;i++)
        strcpy(this->produse[i],a[i]);

}

void Depozit:: set_nr(int a)
{
    this->nr=a;
}

int Depozit:: get_nr()
{
    return this->nr;
}

ostream & operator <<(ostream &st, Depozit &a)
{
    int i;
    for (i=0;i<a.nr;i++)
        st<<a.produse[i]<<endl;

    return st;

}

Depozit Depozit :: operator += (int a)
{
    Depozit d;
    d.nr=d.nr+a;

    return d;
}

Depozit Depozit :: operator -= (int a)
{
    Depozit d;
    d.nr=d.nr-a;

    return d;
}
Depozit::~Depozit()
{
    //dtor
}
