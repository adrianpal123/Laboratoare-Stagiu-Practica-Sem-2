#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    int *vec;
    int n=5;//vectorul va avea 5 elemente
    vec=new int[5];
    int i;
    cout<<"elementele primului vector";
    cout<<endl;
    for (i=0; i<5; i++)
    {
        cin>>vec[i];
    }

     int *vec1;
    vec1=new int[5];
    cout<<"elementele vectorului al doilea";
    cout<<endl;
    for (i=0; i<5; i++)
    {
        cin>>vec1[i];
    }

    Vector r(vec,n);
    Vector q(vec1,n);

    int *tr;
    tr=new int[5];
    for (i=0;i<5;i++)
    {
        tr[i]=0;
    }

    Vector p(tr,n);

    p=adunare(r,q,n);

    cout<<p;
    cout<<endl;


    Vector s(tr,n);

    s=scadere(r,q,n);

    cout<<s;
    cout<<endl;


    cout<<"verificare subpunct 3, operator unar [ ] ";

    for (i=0;i<n;i++)
        cout<<s[i]<< " ";


        cout<<endl;

    cout<<"compararea a doi vectori, folosind operatorul binar de comparatie ";
    cout<<endl;


    if (r==q)
        cout<<"vectorii au aceleasi valori, in aceeasi ordine";
    else
        cout<<"vectorii NU au aceleasi valori, sau NU sunt in aceeasi ordine";




}
