#include "iostream"
#include "stdexcept"
using namespace std;

template <typename T>
class Silo {
    T items[100];
    int count;
    public :
    Silo() : count (0) {}
    void addCrop(T item) {
        if (count < 100){
            items[count++] = item;
        }
    }
    T getCrop(int index) {
        return items[index];
    }
};

class Crop {
    public:
    virtual double calculateYield() = 0;
};

class Wheat : public Crop {
    public :
    double calculateYield() {
        return 500.0;
    }
};

class Corn : public Crop {
    int waterLevel;
    public :
    Corn(int water) : waterLevel(water) {}
    double calculateYield() {
        if(waterLevel < 0) {
            throw runtime_error("Drought failure");
        }
        return 800.0;
    }
};

int main() {
    Silo<Crop*> farmSilo;

    Crop* crop1 = new Wheat();
    Crop* crop2 = new Corn(-5);

    farmSilo.addCrop(crop1);
    farmSilo.addCrop(crop2);

    for(int i = 0; i < 2; ++i) {
        try{
            cout << "Crop " << i << " yield: " << farmSilo.getCrop(i) -> calculateYield() << endl;
        }
        catch (runtime_error& e) {
            cout << "System Alert: " << e.what() << endl;
        }
    }
}