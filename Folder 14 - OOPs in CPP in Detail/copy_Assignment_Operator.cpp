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

};

int main(){

   Hero hero1;
   hero1.setHealth(79);
   hero1.setLevel('B');
   char name[6] = "Malik";
   hero1.setName(name);

//    hero1.print();

   // using default copy constructor
   //    Hero hero2 = hero1;
   Hero hero2(hero1);
//    hero2.print();

   // Due to shallow copy (change will occur in object 2 as well)
   hero1.name[0] = 'Z';
   hero1.print();

   hero2.print();

   hero1 = hero2;

   hero1.print();
   
   hero2.print();


    return 0;
}