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

    // when an instance is created a constructor is envoked by befault  (Default Constructor)

    // object created statically (constructor called)
    Hero david;

    // object created dynamically (constructor called)
    Hero *john = new Hero();

    return 0;
}