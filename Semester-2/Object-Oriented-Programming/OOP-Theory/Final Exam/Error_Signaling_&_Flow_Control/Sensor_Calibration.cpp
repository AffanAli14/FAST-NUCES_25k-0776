#include "iostream"
#include "stdexcept"
using namespace std;

class Sensor {
    public: 
    void readData(double value) {
        if(value < 0) {
            throw runtime_error("Negative reading detected");
        }
        cout << "Sensor reading: " << value << "is valid." << endl;
    }
};

int main() {
    Sensor tempSensor;

    try {
        cout << "Processing sensor data..." << endl;
        tempSensor.readData(-5.0);
    }
    catch(runtime_error& e) {
        cout << "System Error: " << e.what() << endl;
    }
}