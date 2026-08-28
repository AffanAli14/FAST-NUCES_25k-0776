#include "iostream"
using namespace std;

class Property {
    double sqft;
    public:
    Property(double s) : sqft(s) {}
    double getSquareFootage() {
        return sqft;
    }
};

template <typename T>
T findBetterProperty(T a,T b) {
    if(a.getSquareFootage() > b.getSquareFootage()){
        return a;
    }
    return b;
}

int main() {
    Property p1(1500.0),p2(2000.0);
    Property best = findBetterProperty(p1,p2);
    cout << "Larger property sqft: " << best.getSquareFootage() << endl;
}