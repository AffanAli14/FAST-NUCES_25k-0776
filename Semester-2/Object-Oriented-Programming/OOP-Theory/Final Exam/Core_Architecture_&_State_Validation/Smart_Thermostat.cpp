#include "iostream"
using namespace std;

class RoomHeater {
    double targetTemperature = 20.0;
    double maxLimit = 30.0;
    public :
    bool increaseTemp(double degrees) {
        if(degrees > 0 && (targetTemperature + degrees) <= maxLimit) {
            targetTemperature += degrees;
            return true;
        }
        return false;
    }
    double getTemp() { return targetTemperature; }
};
 
int main() {
    RoomHeater heater;
    cout << "Temp Increase (5 deg): " << heater.increaseTemp(5.0) << endl;
    cout << "Temp Increase (20 deg - should fail): " << heater.increaseTemp(20.0) << endl;
}