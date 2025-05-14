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

    Hero(int health){
        this->health = health;  // this is a pointer that stores the address of current object
    }

    Hero(int health, char level){
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(Hero &temp){
        this->health = temp.health;
        this->level = temp.level;
    }
        
    void print(){
        cout << this->health << endl;
        cout << this->level << endl;
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

   Hero john(99, 'D');
   john.print();

   // copy constructor
   Hero jack(john);
   jack.print();

//    cout << jack.getHealth() << endl;
//    cout << jack.getLevel() << endl;

    return 0;
}