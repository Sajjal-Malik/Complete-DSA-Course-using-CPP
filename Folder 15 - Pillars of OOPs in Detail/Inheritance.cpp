#include<bits/stdc++.h>
using namespace std;

class Human {

    protected:
        int height;
    public:
        int weight;
    
    private:
        int age;

    public:
        int getAge(){
            return this->age;
        }
        
        void setWeight(int weight){
            this->weight = weight;
        }
};

class Male: public Human {

    public:
        string color;

        void sleep(){
            cout << "Male is sleeping" << endl;
        }

        int getHeight(){
            return this->height;
        }
};

int main(){

    Male m1;

    // cout << m1.age << endl;  // not accessible parent -> private .property or .method()

    // cout << m1.height << endl;  // not accessible outside child -> protected .property or .method()
    // cout << m1.weight << endl;  // not accessible outside child -> protected .property or .method()

    cout << m1.getHeight() << endl;
    cout << m1.color << endl;
    m1.sleep();

    return 0;
}