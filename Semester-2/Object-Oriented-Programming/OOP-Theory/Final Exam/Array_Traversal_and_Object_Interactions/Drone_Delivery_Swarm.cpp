#include "iostream"
using namespace std;

class Drone {
    double battery;
    public :
    Drone (double b) : battery(b) {}
    double getBatteryPercentage() {
        return battery;
    }
};

class DeliveryHub {
    public :
    bool clearForTakeOff(Drone swarm[], int numDrones) {
        for(int i=0;i<numDrones;++i) {
            if(swarm[i].getBatteryPercentage() < 15.0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Drone swarm[3] = {Drone(90.0),Drone(85.0),Drone(14.5)};
    DeliveryHub hub;
    cout << "Clear for takeoff? " << (hub.clearForTakeOff(swarm,3) ? "Yes" : "No") << endl;
}