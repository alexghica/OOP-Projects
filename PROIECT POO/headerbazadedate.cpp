#include <vector>
#include<string>
#include <bits/stdc++.h>
#include "headerbazadedate.h"
#include "headerpersoana.h"
#include <iostream>
using namespace std;
int baza_de_date :: get_nrpers()
{
    return nr_persoane;
}
baza_de_date :: baza_de_date()
{
    v =NULL;
    nr_persoane=0;
}
baza_de_date :: baza_de_date(int nr_pers)
{
    v = new persoana[nr_pers];
    nr_persoane=nr_pers;
}
baza_de_date :: ~baza_de_date()
{
    delete [] v;
    v=NULL;
}
istream & operator>>(istream &in, baza_de_date &b)
{
    for(int i=0; i<b.nr_persoane; ++i)
        in>>b.v[i];
    return in;
}
ostream & operator<<(ostream & out,baza_de_date &b)
{
    out<<"Numarul de persoane este:"<<endl;
    out<<b.nr_persoane<<endl;;
    for(int i =0; i<b.nr_persoane; ++i)
    {
        out<<"Persoana "<<i+1<<": "<<endl;
        out<<b.v[i];
    }
    return out;
}

void  baza_de_date :: adauga_persoana( persoana p)
{

    persoana *m = new persoana[this->nr_persoane+1];
    for(int i=0; i<this->nr_persoane; i++)
        m[i]=this->v[i];
    ++this->nr_persoane;
    this->v=new persoana [this->nr_persoane];
    for(int i=0; i<this->nr_persoane-1; i++)
        this->v[i]=m[i];
    this->v[this->nr_persoane-1]=p;
}
void baza_de_date :: elimina_pers( string nume)
{
    int i=0,j,t=0;
    persoana *m = new persoana[this->nr_persoane];
    while(i<this->nr_persoane)
    {
        if(this->v[i].nume==nume)
        {
            t++;
            for(j=i; j<this->nr_persoane-1; j++)
            {
                if(j!=this->nr_persoane-1)
                    this->v[j]=this->v[j+1];
            }
        }
        i++;
    }
    i=0;
    for(i=0; i<this->nr_persoane; i++)
        m[i]=this->v[i];
    this->nr_persoane = this->nr_persoane - t;
    delete [] this->v;
    this->v=new persoana [this->nr_persoane];
    for(i=0; i<this->nr_persoane; i++)
        this->v[i]=m[i];
}
void baza_de_date :: elimina_pers( int an)
{
    int i=0,j,t=0;
    persoana *m = new persoana[this->nr_persoane];
    while(i<this->nr_persoane)
    {
        if(this->v[i].anul_nasterii==an)
        {
            t++;
            for(j=i; j<this->nr_persoane-1; j++)
            {
                if(j!=this->nr_persoane-1)
                    this->v[j]=this->v[j+1];
            }
        }
        i++;
    }
    i=0;
    for(i=0; i<this->nr_persoane; i++)
        m[i]=this->v[i];
    this->nr_persoane = this->nr_persoane - t;
    delete [] this->v;
    this->v=new persoana [this->nr_persoane];
    for(i=0; i<this->nr_persoane; i++)
        this->v[i]=m[i];
}
void baza_de_date :: elimina_pers(char sex)
{
    int i=0,j,t=0;
    persoana *m = new persoana[this->nr_persoane];
    while(i<this->nr_persoane)
    {
        if(this->v[i].sex==sex)
        {
            t++;
            for(j=i; j<this->nr_persoane-1; j++)
            {
                if(j!=this->nr_persoane-1)
                    this->v[j]=this->v[j+1];
            }
        }
        i++;
    }
    i=0;
    for(i=0; i<this->nr_persoane; i++)
        m[i]=this->v[i];
    this->nr_persoane = this->nr_persoane - t;
    delete [] this->v;
    this->v=new persoana [this->nr_persoane];
    for(i=0; i<this->nr_persoane; i++)
        this->v[i]=m[i];
}
void baza_de_date :: afisare_pers1()
{
    int i,ok=0;
    persoana p;
    baza_de_date t(nr_persoane);
    for(i=0; i<nr_persoane; i++)
        t.v[i]=v[i];

    while(ok==0)
    {
        ok =1 ;
        for(i=0; i<nr_persoane-1; i++)
            if(t.v[i].nume>t.v[i+1].nume)
            {
                p=t.v[i];
                t.v[i]=t.v[i+1];
                t.v[i+1]=p;
                ok=0;
            }
    }
    for(i=0; i<nr_persoane; i++)
        cout<<t.v[i]<<endl;
}
void baza_de_date :: afisare_pers2()
{
    int i,ok=0;
    persoana p;
    baza_de_date t(nr_persoane);
    for(i=0; i<nr_persoane; i++)
        t.v[i]=v[i];

    while(ok==0)
    {
        ok =1 ;
        for(i=0; i<nr_persoane-1; i++)
            if(t.v[i].anul_nasterii>t.v[i+1].anul_nasterii)
            {
                p=t.v[i];
                t.v[i]=t.v[i+1];
                t.v[i+1]=p;
                ok=0;
            }
    }
    for(i=0; i<nr_persoane; i++)
        cout<<t.v[i]<<endl;
}
void baza_de_date :: citire_si_afisare()
{
    int n,i;
    persoana p;
    cout<<"Introduceti numarul de persoane: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p;
        adauga_persoana(p);
    }
    for(i=0;i<nr_persoane;i++)
    {
        cout<<v[i]<<endl;
    }
}
