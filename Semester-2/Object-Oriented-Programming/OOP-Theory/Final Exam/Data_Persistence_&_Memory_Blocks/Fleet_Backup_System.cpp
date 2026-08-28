#include "iostream"
#include "fstream"
using namespace std;

struct GasVehicle {
    int id;
    double tankSize;
};

int main() {
    GasVehicle fleet[10];
    for(int i=0; i<10 ;++i) {
        fleet[i] = {100 + i,50.0 + (i * 2)};
    }

    try {
        ofstream fleetOut("fleet.dat",ios::binary);
        if(!fleetOut.is_open()) {
            throw "Failed to open fleet data file";
        }

        fleetOut.write(reinterpret_cast<char*>(fleet),sizeof(GasVehicle) * 10);
        fleetOut.close();

        cout << "All 10 vehicles successfully backed up as a single memory block." << endl;
    }
    catch(const char* msg) {
        cout << "Critical File Error: " << msg << endl;
    }
}