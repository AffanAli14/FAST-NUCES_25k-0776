#include "iostream"
using namespace std;

template <typename T>
class InventoryBag {
    T items[10];
    int count = 0;
    public :
    void storeItem(T item) {
        if(count < 10){
            items[count++] = item;
        }
    }
    int getCount() { return count; }
};

int main() {
    InventoryBag<double> magicBag;
    magicBag.storeItem(3.14);
    magicBag.storeItem(9.81);
    cout << "Items in magic bag: " << magicBag.getCount() << endl;
}