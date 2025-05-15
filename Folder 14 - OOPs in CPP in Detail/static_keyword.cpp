#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{  // empty class takes 1 Byte of Memory

    
    // properties / Data members
    private:
    int health;
    
    public:
    char *name;
    char level;

    // static variable defined
    static int timeToComplete;

    Hero(){
        // cout << "constructor called" << endl;
        // name = new char[100];
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

        // cout << "copy constructor called" << endl;
        char *ch = new char(strlen(temp.name) + 1);
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }
        
    void print(){
        cout << endl;
        cout << "Name " << this->name << endl;
        cout << "Health " << this->health << endl;
        cout << "Level " << this->level << endl;
    }

    static int random(){
        cout << "Random function called" << endl;
        return timeToComplete;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }

    // Destructor
    ~Hero(){
        cout << "Destructor called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main(){

    cout << Hero::timeToComplete << endl;

    cout << Hero::random() << endl;

    // possible to call static memeber using object (not recommended)
    // Hero obj1;
    // cout << obj1.timeToComplete << endl;
    return 0;
}