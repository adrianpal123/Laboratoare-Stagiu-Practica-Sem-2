#include <iostream>
#include <vector>
#include <algorithm>
#include "Student.h"
#include <cstring>
#include <functional>
using namespace std;


bool is_bursier(Student& a)
{
    return a.get_bursa();
}

bool comp_nume(Student& a, Student& b)
{
    return (strcmp(a.get_nume(),b.get_nume())<0);
}

bool comp_anStudiu(Student& a, Student& b)
{
    return a.get_anStudiu()<b.get_anStudiu();
}

bool verif_an(Student& a)
{
    return a.get_anStudiu()==1;
}


int main()
{

    vector <Student> s;

    Student Andrei("Andrei",22,3,true);
    Student Marin("Marin",21,2,true);
    Student Pavel ("Pavel",19,1,false);
    Student Mircea ("Mircea",21,2,false);

    s.push_back(Andrei);
    s.push_back(Marin);
    s.push_back(Pavel);
    s.push_back(Mircea);

    vector <Student> :: iterator it;
    for (it=s.begin(); it!=s.end(); ++it)
        cout<<*it<<endl;
    cout<<endl;


    int mycount=count_if(s.begin(),s.end(),is_bursier);
    cout<<"cati au bursa: " << mycount;


    cout<<endl;

    sort(s.begin(),s.end(),comp_nume);

    cout<<endl;

    cout<<"Dupa ce sortam dupa ordinea numelelor: "<<endl;

    for (it=s.begin(); it!=s.end(); ++it)
        cout<<*it<<endl;

    cout<<endl;





    sort(s.begin(),s.end(),comp_anStudiu);

    cout<<"Dupa ce sortam dupa ordinea anului de studiu: "<<endl;

    for (it=s.begin(); it!=s.end(); ++it)
        cout<<*it<<endl;


cout<<endl;

   // vector <Student> s1(s.size());
//    vector<Student>::iterator it1 = copy_if (s.begin(), s.end(), s1.begin(), verif_an);
    //s1.resize(distance(s1.begin(),it1));

    //for (it1=s1.begin(); it1!=s1.end(); ++it1)
    //    cout<<*it1<<endl;


    float medie;
    int suma=0;

    for (it=s.begin(); it!=s.end(); ++it)
        suma=suma+it->get_varsta();

    medie=float(suma)/s.size();

    cout<<"media studentilor: "<<medie;

    return 0;
}
