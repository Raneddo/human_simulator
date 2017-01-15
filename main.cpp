#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "human.h"

using namespace std;

int main(){
    srand(time(0));
    cout << "Welcome! You are in simulator of human\n";
    string s;
    human pers;
    pers.set_parametrs();
    system("clear");
    cout << "Congratulation, you are create your character\n"
            "For help write \"help\"\n";
    int count_errors = 0;
    s = cin.get();
    do{
        pers.goup(count_errors,s);
    } while(true);
    return 0;
}
