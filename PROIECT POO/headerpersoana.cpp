#include <vector>
#include<string>
#include <iostream>
#include "headerbazadedate.h"
#include <bits/stdc++.h>
#include "headerpersoana.h"
using namespace std;
persoana :: persoana()
{
    nume =" ";
    anul_nasterii=0;
    sex='\0';
}
void persoana :: set_nume(string nume)
{
    this->nume = nume;
}
string persoana :: get_nume()
{
    return nume;
}
void persoana :: set_anul_nasterii(int an)
{
    this->anul_nasterii = an;
}
int persoana :: get_anul_nasterii()
{
    return anul_nasterii;
}
void persoana :: set_sex(char s)
{
    sex=s;
}
char persoana :: get_sex()
{
    return sex;
}
persoana :: persoana(string nume,int an,char sex) : nume(nume),anul_nasterii(an),sex(sex) {}

ostream & operator << (ostream &out,persoana &p)
{
    out<<" - Numele este: "<<p.nume<<endl;
    out<<" - Anul nasterii este: "<<p.anul_nasterii<<endl;
    out<<" - Sexul este: "<<p.sex<<endl;
    return out;
}
istream & operator>>(istream &in, persoana &p)
{
    string num;
    int an_nastere;
    char sex;
    cout<<"Introduceti numele,anul nasterii si sexul:"<<endl;
    in>>num>>an_nastere>>sex;
    p.nume=num;
    p.anul_nasterii=an_nastere;
    p.sex=sex;
    return in;
}
persoana & persoana :: operator=(const persoana & pers)
{
    if(this==&pers)
        return *this;
    else
    {
        nume = pers.nume;
        anul_nasterii = pers.anul_nasterii;
        sex=pers.sex;
        return *this;
    }
}
