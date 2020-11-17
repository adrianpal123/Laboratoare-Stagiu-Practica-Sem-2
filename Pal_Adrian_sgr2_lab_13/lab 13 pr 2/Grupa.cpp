#include "Grupa.h"
#include <cstring>
#include <iostream>

using namespace std;

Grupa::Grupa()
{
    this->nume=NULL;
    this->x.nume=NULL;
    this->x.prenume=NULL;
    this->x.nume_materie=NULL;
    this->x.nota_finala=NULL;

}

Grupa::Grupa(char* a)
{
    this->nume=new char[strlen(a)+1];
    strcpy(this->nume,a);


}

void Grupa::createStudent(Student& b)
{
    this->x.nota_finala=b.nota_finala;
    this->x.nume=new char[strlen(b.nume)+1];
    strcpy(this->x.nume,b.nume);
    this->x.prenume=new char[strlen(b.prenume)+1];
    strcpy(this->x.prenume,b.prenume);
    this->x.nume_materie=new char[strlen(b.nume_materie)+1];
    strcpy(this->x.nume_materie,b.nume_materie);
}

ostream& operator <<(ostream& st, Grupa & a)
{
    st<<"Grupa este: "<<a.nume<<"iar studentii sunt: "<<endl;
    vector <Grupa::Student> ::iterator it;
      for (it=&Grupa::l1.begin();it!=&Grupa::l1.end();++it)
        st<<"Nume: "<< it->a.x.nume<< ", Prenume: "<<it->a.x.prenume << ", Nume materie: "<< it->a.x.nume_materie << ", Nota finala: "<<it->a.x.nota_finala;
    return st;
}
void Grupa::addStudent(Student& b)
{
    Grupa::l1.push_back(b);
}

void Grupa:: Create_and_Add_Student(char* x, char* y, char* z, int a)
{
    this->x.nume=new char[strlen(x)+1];
    strcpy(this->x.nume,x);
    this->x.prenume=new char[strlen(y)+1];
    strcpy(this->x.prenume,y);
    this->x.nume_materie=new char[strlen(z)+1];
    strcpy(this->x.nume_materie,z);
    this->x.nota_finala=a;

    Grupa:: Student b;

    b.nume=new char[strlen(x)+1];
    strcpy(b.nume,x);
    b.prenume=new char[strlen(y)+1];
    strcpy(b.prenume,y);
    b.nume_materie=new char[strlen(z)+1];
    strcpy(b.nume_materie,z);
    b.nota_finala=a;

    Grupa::l1.push_back(b);

}

int Grupa:: get_nota_finala()
{
    return this->x.nota_finala;
}
Grupa::~Grupa()
{
    //dtor
}
