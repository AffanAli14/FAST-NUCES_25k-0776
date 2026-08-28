#include "iostream"
using namespace std;

template<typename T>
class Appliance {
    T powerRating;
    int modelNumber;
    string name;
    string type;
    public: 
    Appliance(T p,int m,string n,string t) : powerRating(p),modelNumber(m),name(n),type(t) {}
    void showDetails() const {
        cout << "Name: " << name << "| Model Number: " << modelNumber << "| Power Rating: " << powerRating << "| Appliance type: " << type << endl;
    }
    void operate() {
        if(type == "WashingMachine") washMode();
        else if(type == "AirConditioner") coolMode();
        else if(type == "SmartLight") dimMode();
        else cout << "Operating in standard mode." << endl;
    }

    void washMode() { cout << "Washing clothes..." << endl; }
    void coolMode() { cout << "Cooling the room..." << endl; }
    void dimMode() { cout << "Adjusting room lighting..." << endl; } 
};


    template <>
    class Appliance<string> {
        string powerRating;
        int modelNumber;
        string name;
        string type;
        public:
        Appliance (string p,int m,string n,string t) : powerRating(p),modelNumber(m),name{n},type(t) {}

        void showDetails() const {
            cout << "\n--- Eco Appliance Details ---\n" << endl;
            cout << "Type: " << type <<"| Name: " << name << "| Model Number: " << modelNumber << "| Energy Category: " << powerRating << endl;
        }
        void operate() {
            if(powerRating == "Solar-Powered") cout << "Operating in Solar-Powered eco mode." << endl;
            else if(powerRating == "Low-Energy") cout << "Operating in Low-Energy mode." << endl;
            else cout << "Operating in eco mode." << endl;
        }
    };

int main() {
    Appliance<int> washer(2000,1011,"SpinMaster","WashingMachine");
    washer.showDetails();
    washer.operate();

    Appliance<double> ac(1.5,2042,"ArcticBreeze","AirConditioner");
    ac.showDetails();
    ac.operate();

    Appliance<float> light(9.5f,3073,"LumiGlow","SmartFlight");
    light.showDetails();
    light.operate();

    Appliance<string> eco("Low-Energy",5096,"EcoBreeze","Ecofan");
    eco.showDetails();
    eco.operate();

    Appliance<string> eco2("Solar-Powered",4084,"GreenWave","ecoHeater");
    eco2.showDetails();
    eco2.operate();

    return 0;
}