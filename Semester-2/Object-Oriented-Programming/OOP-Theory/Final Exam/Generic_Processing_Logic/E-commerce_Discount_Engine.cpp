#include "iostream"
using namespace std;

class Item {
    double price;
    public:
    Item(double p) : price(p) {} 
    double getFinalPrice() {
        return price;
    }
};

template <typename T>
T cheaperItem(T a,T b) {
    if(a.getFinalPrice() < b.getFinalPrice()) {
        return a;
    }
    return b;
}

int main() {
    Item itemA(45.99), itemB(39.99);
    Item cheapest = cheaperItem(itemA,itemB);
    cout << "Cheaper item price: $" << cheapest.getFinalPrice() << endl;
}