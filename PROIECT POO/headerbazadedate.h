#ifndef HEADERBAZADEDATE_H_INCLUDED
#define HEADERBAZADEDATE_H_INCLUDED

#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "headerpersoana.h"
#include "headerbazadedate.h"
using namespace std;

class persoana;

class baza_de_date
{
    persoana *v;
    int nr_persoane;
public:
    baza_de_date();
    baza_de_date(int);
    ~baza_de_date();
    int get_nrpers();
    friend istream & operator>>(istream &, baza_de_date &);
    friend ostream& operator <<(ostream &, baza_de_date &);
    void adauga_persoana(persoana);
    void elimina_pers(string);
    void elimina_pers(int);
    void elimina_pers(char);
    void afisare_pers1();
    void afisare_pers2();
    void citire_si_afisare();

};
//baza_de_date baza_de_date :: adauga_persoana(baza_de_date, persoana);

#endif // HEADERBAZADEDATE_H_INCLUDED
