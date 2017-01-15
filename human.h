#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

struct nsa{             // nsa -> n = name, s = surname, a = age
    string name;
    string surname;
    int age;
    bool sex;
};

class human{
    int growth,age,mass, children /*count of children*/;
    bool sex,relat;
    nsa ch[100];
    string name, surname, ms,fms;
    string mansur();
    nsa partner;
    void set_growth(int growth) { this->growth = growth; }
    void set_age(int age) { this->age = age; }
    void set_mass(int mass) { this->mass = mass; }
    void set_children(int cch);
    void set_name(string name) { this->name = name; if(name == "exit") exit(0); }
    void set_surname(string surname) {this->surname = surname; }
    void set_rp();
    void set_sex(string sex);
    friend void help();
    bool get_relatioship() { return relat; }
    void add_child();
    void kill();
    void show_relatioship();
    void show_children();
    void set_relatioships();
    void myinf();
    void new_year();
public:
    void set_parametrs(string name, string surname, int growth, int age, int mass, int cch, string sex);
    void set_parametrs();
    void goup(int &count_errors, string &s);
    void help();
};

#endif // HUMAN_H
