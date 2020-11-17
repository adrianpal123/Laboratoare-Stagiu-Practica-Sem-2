#include "Planeta.h"
#include <iostream>

#include <cstring>
using namespace std;

Planeta::Planeta()
{
    this->nume=new char[101];
    strcpy(this->nume,"");
    this->numar_sateliti_naturali=0;
    this->numar_sateliti_artificiali=0;
    this->gravitatie=0;

}

Planeta::Planeta(char* a, int b, int c, int d)
{
    this->nume=new char[strlen(a)+1];
    strcpy(this->nume,a);
    this->numar_sateliti_naturali=b;
    this->numar_sateliti_artificiali=c;
    this->gravitatie=d;

}

void Planeta:: set_nume(char *a)
{
    this->nume=new char[strlen(a)+1];
    strcpy(this->nume,a);

}

void Planeta:: set_numar_sateliti_naturali(int a )
{
    this->numar_sateliti_naturali=a;
}

void Planeta:: set_numar_satelit_artificiali(int a )
{
    this->numar_sateliti_artificiali=a;
}

void Planeta:: set_gravitatie(int a )
{
    this->gravitatie=a;
}

char* Planeta:: get_nume()
{
    return this->nume;
}

int Planeta:: get_numar_sateliti_naturali()
{
    return this->numar_sateliti_naturali;
}

int Planeta:: get_numar_sateliti_artificiali()
{
    return this->numar_sateliti_artificiali;
}

int Planeta:: get_gravitatie()
{
    return this->gravitatie;
}

ostream & operator <<(ostream &st, Planeta &a)
{
    st<<"numele planetei: "<<a.nume<< ", numarul de sateliti naturali: "<< a.numar_sateliti_naturali<< ", numarul de sateliti artificiali: "<< a.numar_sateliti_artificiali<< ", gravitatie: "<< a.gravitatie<<endl;

    return st;

}

int Planeta:: numar_total_de_sateliti()
{
    return this->numar_sateliti_naturali+this->numar_sateliti_artificiali;
}

void interval_gravitatie(Planeta a, int x, int y)
{
    if (a.gravitatie>=x and a.gravitatie<=y)
    {
        cout<<a.nume;
        cout<<endl;
    }
}


Planeta::~Planeta()
{
    //dtor
}
