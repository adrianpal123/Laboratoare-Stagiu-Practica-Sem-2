#include <iostream>
#include "Grupa.h"
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    Grupa g1("grupa1");
    Grupa g2("grupa2");
    Grupa g3("grupa3");



    vector <Grupa> G;

    G.push_back(g1);
    G.push_back(g2);
    G.push_back(g3);

    g1.Create_and_Add_Student("Gabor","Mihai","SP",9);
    g1.Create_and_Add_Student("Bern","Pavel","P2",9);
    g1.Create_and_Add_Student("Rencea","Dorin","Asd2",9);

    g2.Create_and_Add_Student("Gabor1","Mihai1","SP",8);
    g2.Create_and_Add_Student("Bern1","Pavel1","P2",10);
    g2.Create_and_Add_Student("Rencea1","Dorin1","Asd2",10);

    g3.Create_and_Add_Student("Gabor2","Mihai2","SP",7);
    g3.Create_and_Add_Student("Bern2","Pavel2","P2",10);
    g3.Create_and_Add_Student("Rencea2","Dorin2","Asd2",6);
    cout<<g1;

    vector <Grupa>::iterator it;


    for (it=G.begin();it!=G.end();++it)
    {
        cout<<*it;
    }


    return 0;
}
