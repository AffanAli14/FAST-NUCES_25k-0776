#include "iostream"
using namespace std;

class Animal {
    public :
    virtual void makeSound() = 0;
};

class Lion : public Animal {
    public :
    void makeSound() override {
        cout << "Roar!" << endl;
    }
};

class Monkey : public Animal {
    public :
    void makeSound() override {
        cout << "Monkey wala sound" << endl;
    }
};

int main() {
    Animal* enclosure[3];
    enclosure[0] = new Lion();
    enclosure[1] = new Monkey();
    enclosure[2] = new Lion();

    for(int i=0;i<3;++i){
        enclosure[i]->makeSound();
    }

    for(int i=0;i<3;i++) {
        delete enclosure[i];
    }
}