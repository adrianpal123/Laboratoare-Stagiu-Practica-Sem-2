#ifndef DEPOZIT_H
#define DEPOZIT_H
#include <iostream>
using namespace std;

class Depozit
{
    public:
        Depozit();
        Depozit(char **, int);
        virtual ~Depozit();

        void set_produse(char **,int);
        void set_nr(int);
        int get_nr();

        friend ostream & operator <<(ostream &, Depozit &);
        Depozit operator +=(int);
        Depozit operator -=(int);



    protected:

    private:
        char **produse;
        int nr;
};

#endif // DEPOZIT_H
