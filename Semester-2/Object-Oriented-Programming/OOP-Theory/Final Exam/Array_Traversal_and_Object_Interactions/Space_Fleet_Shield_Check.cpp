#include "iostream"
using namespace std;

class Fighter {
    double shield;
    public :
    Fighter(double s) : shield(s) {}
    double getShieldLevel() {
        return shield;
    }
};

class Mothership {
    public:
    bool checkFleetShields(Fighter fighters[],int size) {
        if(size <= 0){
            return false;
        }
        for (int i=0; i< size;++i)   {
            if(fighters[i].getShieldLevel() < 20.0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Fighter fleet[3] = {Fighter(100),Fighter(50),Fighter(10)};
    Mothership base;
    cout << "Fleet Safe? " << (base.checkFleetShields(fleet,3) ? "Yes" : "No") << endl;
}