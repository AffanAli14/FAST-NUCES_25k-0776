#include "iostream"
using namespace std;

class Gadget {
    public :
    virtual double getBatteryLife() = 0;
};

class Phone : public Gadget {
    double batteryLife;
    public :
    Phone (double b) : batteryLife(b) {}
    double getBatteryLife() override {
        return batteryLife;
    }
};

template <typename T>
T getLongestLasting(T a,T b) {
    if(a.getBatteryLife() > b.getBatteryLife()) {
        return a;
    }
    return b;
}

int main() {
    Phone phone1(12.5),phone2(15.0);
    Phone betterPhone = getLongestLasting(phone1,phone2);
    cout << "Best Battery Life: " << betterPhone.getBatteryLife() << " hours" << endl;
}