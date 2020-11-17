#include "Student.h"
#include <cstring>
#include <iostream>
using namespace std;

Student::Student()
{
    this->nume=new char[101];
    strcpy(this->nume," ");
    this->varsta=0;
    this->anStudiu=0;
    this->bursa=false;
}

Student::Student(char* a, int x, int y, bool z)
{
    this->nume=new char[strlen(a)+1];
    strcpy(this->nume,a);
    this->varsta=x;
    this->anStudiu=y;
    this->bursa=z;
}

Student::~Student()
{
    //dtor
}

ostream & operator << (ostream &st, const Student &a)
{
    st<<"Numele: " << a.nume<<", Varsta: "<<a.varsta<< ", Anstudiu: "<< a.anStudiu<< ", Bursa(adevarat/fals): "<< a.bursa;
    return st;
}

bool este_bursier(const Student&a)
{
    return a.bursa;
}
bool Student:: get_bursa()
{
    return this->bursa;
}
char* Student:: get_nume()
{
    return this->nume;
}
int Student:: get_anStudiu()
{
    return this->anStudiu;
}
int Student:: get_varsta()
{
    return this->varsta;
}
