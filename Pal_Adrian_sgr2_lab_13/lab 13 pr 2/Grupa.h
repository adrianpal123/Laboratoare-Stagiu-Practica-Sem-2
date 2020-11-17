#ifndef GRUPA_H
#define GRUPA_H
#include <iostream>
#include <vector>

using namespace std;

class Grupa
{
private:
    char* nume;
    struct Student
    {
        char *nume;
        char* prenume;
        char* nume_materie;
        int nota_finala;


    } x;

    vector <Student> l1;


public:

    Grupa();
    Grupa(char*);
    virtual ~Grupa();
    void createStudent(Student& a);
    void addStudent(Student& a);
    void CreateStudent(char*, char*, char*, int);
    friend ostream& operator <<(ostream&, Grupa &);
    int get_nota_finala();
};



#endif // GRUPA_H
