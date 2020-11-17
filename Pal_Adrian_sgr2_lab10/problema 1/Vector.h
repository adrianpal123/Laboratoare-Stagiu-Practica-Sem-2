#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class Vector
{
    public:
        Vector();
        Vector(int *, int);

        friend Vector adunare(const Vector , const Vector, const int);

        friend Vector scadere(const Vector , const Vector , const int);

        friend ostream & operator << (ostream &, Vector &);

        int operator [] (int );

        friend int operator ==(const Vector, const Vector);


    protected:

    private:

    int *vectorul;
        int n; //numarul de elemente din vector

};

#endif // VECTOR_H
