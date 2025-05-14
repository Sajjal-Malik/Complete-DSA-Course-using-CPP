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

    // when an instance is created a constructor is envoked by befault  (Default Constructor)

    // object created statically (constructor called)
    Hero david(88);

    // object created dynamically (constructor called)
    Hero *john = new Hero(99);

    Hero jack(67, 'C');

    return 0;
}