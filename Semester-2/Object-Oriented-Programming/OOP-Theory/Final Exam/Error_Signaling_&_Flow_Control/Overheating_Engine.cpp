#include "iostream"
using namespace std;

class OverheatError {
    public:
    int currentTemp;
};

class Engine {
    public :
    void run(int temp) {
        if(temp >= 120) {
            throw OverheatError{temp};
        }
        cout << "Engine running smoothly at " << temp << "C." << endl;
    }
};

int main() {
    Engine v8;

    try {
        cout << "Accelerating engine..." << endl;
        v8.run(125);
    }
    catch(OverheatError& e) {
        cout << "Critical Halt: Engine failed at " << e.currentTemp << "C!" << endl;
    }
}