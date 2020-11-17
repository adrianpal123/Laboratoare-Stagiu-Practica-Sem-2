#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    public:
        Student();
        Student(char*, int, int, bool);
        virtual ~Student();
        friend ostream & operator << (ostream&, const Student& );
        friend bool este_bursier(const Student&);
        bool get_bursa();
        char* get_nume();
        int get_anStudiu();
        int get_varsta();


    protected:

    private:
        char* nume;
        int varsta;
        int anStudiu;
        bool bursa;
};

#endif // STUDENT_H
