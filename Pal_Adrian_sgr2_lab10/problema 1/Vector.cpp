#include "Vector.h"
#include <iostream>
using namespace std;




Vector::Vector()
{
    this->n=5;
    int i;
    this->vectorul=new int[5];
    for (i=0; i<5; i++)
        this->vectorul[i]=0;
}


Vector::Vector(int* a, int b)
{
    this->n=b;
    int i;
    this->vectorul= new int[b];
    for (i=0; i<b; i++)
    {
        vectorul[i]=a[i];
    }
}

int Vector:: operator[](int index)
{

        return this->vectorul[index];

}

Vector adunare(const Vector a, const Vector b, int nr)
{
    int i;
    int *t;
    t=new int[nr];
    for (i=0; i<nr; i++)
    {
        t[i]=0;

    }
    Vector c(t,nr);

    for (i=0; i<nr; i++)
    {
        c.vectorul[i]=a.vectorul[i]+b.vectorul[i];
    }


    return c;
}

Vector scadere (const Vector a, const Vector b, int nr)
{
    int i;
    Vector c;
    for (i=0; i<nr; i++)
        c.vectorul[i]=a.vectorul[i]-b.vectorul[i];

    return c;
}


ostream & operator << (ostream &st, Vector &a)
{
    int i;

    for (i=0; i<a.n; i++)
        cout<<a.vectorul[i]<< " ";
}


int operator ==(const Vector a, const Vector b)
{
    int i;
    int ok=1;

    for (i=0;i<a.n;i++)
        if (a.vectorul[i]!=b.vectorul[i])
    {
        ok=0;
        break;
    }

    if (ok==1)
        return 1;

    return 0;
}
