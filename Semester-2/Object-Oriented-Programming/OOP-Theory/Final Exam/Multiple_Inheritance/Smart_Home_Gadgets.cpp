#include "iostream"
using namespace std;

class Device {
    protected :
    string serialNumber;
    public:
    Device(const string& sn) : serialNumber(sn) {}
    string getSerial() { return serialNumber; }
};

class Camera : virtual public Device {
    public :
    Camera(string sn) : Device(sn) {}
};

class Microphone : virtual public Device {
    public :
    Microphone(string sn) : Device(sn) {}
};

class SmartDisplay : public Camera, public Microphone {
    public:
    SmartDisplay(string sn) : Device(sn), Camera(sn), Microphone(sn) {}
};

int main() {
    SmartDisplay display("SN-XYZ-123");
    cout << "Smart Display Serial: " << display.getSerial() << endl;
}