#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{  // empty class takes 1 Byte of Memory

    
    // properties / Data members
    private:
    int health;
    
    public:

    char level;
    Hero(){
        cout << "constructor called" << endl;
    }
        
    void print(){
        cout << level << endl;
    }

    // getters ------->>>>>>>
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // setters ------->>>>>>>
    void setHealth(int hlth){
        health = hlth;
    }

    void setLevel(char lvl){
        level = lvl;
    }

};

int main(){

    Hero malik;
    malik.setHealth(99);
    malik.setLevel('D');
    
    cout << malik.getHealth() << endl;
    cout << malik.getLevel() << endl;


    // static allocation
    Hero h1;
    h1.level = 'A';
    h1.setHealth(89);

    cout << "Level is: " << h1.level << endl;
    cout << "Health is: " << h1.getHealth() << endl;
    

    // Dynamic Allocation
    Hero *h2 = new Hero();

    h2->level = 'C';
    h2->setHealth(90);

    cout << "Level is: " << (*h2).level << endl;
    cout << "Health is: " << (*h2).getHealth() << endl;
    
    cout << "Level is: " << h2->level << endl;
    cout << "Health is: " << h2->getHealth() << endl;

    return 0;
}