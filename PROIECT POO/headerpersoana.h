#ifndef HEADERPERSOANA_H_INCLUDED
#define HEADERPERSOANA_H_INCLUDED

#include <vector>
#include <string>
#include "headerbazadedate.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class persoana
{
    string nume;
    int anul_nasterii;
    char sex;
public:
    persoana();
    void set_nume(string);
    string get_nume();
    void set_anul_nasterii(int);
    int get_anul_nasterii();
    void set_sex(char s);
    char get_sex();
    persoana(string,int,char);
    friend ostream& operator<<(ostream&,persoana &);
    friend istream& operator>>(istream &, persoana &);
    friend class baza_de_date;
    persoana & operator=(const persoana &);
};

#endif // HEADERPERSOANA_H_INCLUDED
