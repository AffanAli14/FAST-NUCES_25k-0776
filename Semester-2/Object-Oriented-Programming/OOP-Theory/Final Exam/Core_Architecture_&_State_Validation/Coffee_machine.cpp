#include "iostream"
using namespace std;

class EspressoMachine {
    private:
    int waterLevel = 100;
    int coffeeBeansLevel = 50;
    public:
    bool brew(int shots) {
        int waterNeeded = shots * 30;
        int beansNeeded = shots * 15;

        if(waterLevel >= waterNeeded && coffeeBeansLevel >= beansNeeded) {
            waterLevel -= waterNeeded;
            coffeeBeansLevel -= beansNeeded;
            return true;
        }
        return false;
    }
};

int main() {
    EspressoMachine machine;
    if(machine.brew(2)) {
        cout << "Brew 2 shots: Success" << endl;
    } else {
        cout << "Brew 2 shots: Failed" << endl;
    }

    if(machine.brew(5)) {
        cout << "Brew 5 shots (Should fail): Success" << endl;
    } else {
        cout << "Brew 5 shots (Should fail): Failed" << endl;
    }
}