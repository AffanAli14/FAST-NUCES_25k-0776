#include "iostream"
#include "exception"
#include "fstream"
using namespace std;


class SignalLostError : public exception {
    public: 
    const char* what() const noexcept override {
        return "CRITICAL : Orbital connection served.";
    }
};

class Satellite {
    protected:
    string designation;
    public:
    Satellite(string d) : designation(d) {}

    virtual double checkSignal() = 0;
};

class RelaySatellite : public Satellite {
    public :
     RelaySatellite(string d) : Satellite(d) {}

    double checkSignal() override {
        return 85.0;
    }
};

class SpySatellite : public Satellite {
    double currentSignal;
    public :
    SpySatellite(string d,double sig) : Satellite(d),currentSignal(sig) {}
    double checkSignal() override {
        if(currentSignal < 10.0) {
            throw SignalLostError();
        }
        return currentSignal;
    }
};

class GroundStation {
    public :
    void scanSky(Satellite* satellites[], int size) {
        for(int i=0;i<size;i++) {
            try {
                cout << "Checking " << i << ":" << satellites[i]->checkSignal() << endl;
            }
            catch(SignalLostError& e) {
                cout << e.what() << endl;
                ofstream outFile("blackbox.txt",ios::app);
                if(outFile.is_open()) {
                    outFile << "CONNECTION LOST\n";
                    outFile.close();
                }
            }
        } 
    }
};

int main() {
    Satellite* fleet[2];
    fleet[0] = new RelaySatellite("RELAY-1");
    fleet[1] = new SpySatellite("SPY-99",4.5);

    GroundStation station;
    station.scanSky(fleet,2);
}