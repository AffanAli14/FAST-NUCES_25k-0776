#include "iostream"
using namespace std;

class Entity {
    protected:
    int healthPool;
    public :
    Entity(int hp) : healthPool(hp) {}
    int getHealth() { return healthPool; }
};

class Warrior : virtual public Entity {
    public :
    Warrior(int hp) : Entity(hp) {} 
};

class Mage : virtual public Entity {
    public:
    Mage(int hp) : Entity(hp) {}
};

class Paladin : public Warrior , public Mage {
    public :
    Paladin(int hp) : Entity(hp), Warrior(hp), Mage(hp) {}
}; 

int main() {
    Paladin hero(500);
    cout << "Paladin Health Pool: " << hero.getHealth() << endl;
}