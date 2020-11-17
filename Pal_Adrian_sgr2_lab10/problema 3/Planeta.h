#ifndef PLANETA_H
#define PLANETA_H
#include <iostream>

using namespace std;

class Planeta
{
public:
    Planeta();
    Planeta(char*, int, int, int);
    virtual ~Planeta();

    void set_nume(char *);
    void set_numar_sateliti_naturali(int );
    void set_numar_satelit_artificiali(int );
    void set_gravitatie(int );

    char* get_nume();
    int get_numar_sateliti_naturali();
    int get_numar_sateliti_artificiali();
    int get_gravitatie();

    friend ostream & operator <<(ostream &, Planeta &);
    friend void interval_gravitatie(Planeta , int, int );

    int numar_total_de_sateliti();




protected:

private:
    char* nume;
    int numar_sateliti_naturali;
    int numar_sateliti_artificiali;
    int gravitatie;
};

#endif // PLANETA_H
