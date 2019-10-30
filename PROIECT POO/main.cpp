#include <iostream>
#include <vector>
#include <string>
#include "headerpersoana.h"
#include "headerbazadedate.h"

using namespace std;

int main()
{
    int n,optiune=-1;
    string nume;
    int varsta;
    char sex;
    cout<<"Introduceti numarul de persoane: "<<endl;
    cin>>n;
    baza_de_date b(n);
    cin>>b;
    cout<<"Alegeti: "<<endl<<" - 1 pentru a adauga o persoana "<<endl;
    cout<<" - 2, 3 sau 4 pentru a elimina o persoana dupa nume, varsta, respectiv sex "<<endl;
    cout<<" - 5 sau 6 pentru a afisa o persoana in ordine alfabetica sau dupa varsta "<<endl;
    cout<<" - 7 pentru citirea si afisarea tuturor persoanelor "<<endl;
    cout<<" - 0 pentru a iesi din program"<<endl;
    while(optiune!=0)
    {
        cin>>optiune;
        switch(optiune)
        {
        case 1:
        {
            persoana p;
            cin>>p;
            b.adauga_persoana(p);
            cout<<b;
            break;
        }
        case 2:
        {
            cout<<"Introduceti numele: "<<endl;
            cin>>nume;
            b.elimina_pers(nume);
            cout<<b;
            break;
        }
        case 3:
        {
            cout<<"Introduceti varsta: "<<endl;
            cin>>varsta;
            b.elimina_pers(varsta);
            cout<<b;
            break;
        }
        case 4:
        {
            cout<<"Introduceti sexul: "<<endl;
            cin>>sex;
            b.elimina_pers(sex);
            cout<<b;
            break;
        }
        case 5:
        {
            b.afisare_pers1();
            break;
        }
        case 6:
        {
            b.afisare_pers2();
            break;
        }
        case 7:
            {
            b.citire_si_afisare();
            break;
            }
        case 0:
        {
            break;
        }
        default:
        {
            cout<<"Optiunea nevalabila!"<<endl;
            break;
        }
        }
        if(optiune!=0)
            cout<<"Alegeti alta optiune: "<<endl;
        else
            cout<<"Ati iesit din program!"<<endl;
    }

    return 0;
}
