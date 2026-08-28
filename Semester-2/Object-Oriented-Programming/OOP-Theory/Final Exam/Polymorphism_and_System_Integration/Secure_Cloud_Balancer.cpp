#include "iostream"
using namespace std;

class Node {
    public :
    virtual double getCPU() = 0;
};

class DatabaseNode : public Node {
    public :
    double getCPU() {
        return 85.5;
    }
};

template <typename T>
class Storage {
    T items[5];
    int count = 0;
    public :
    void add(T item) {
        if(count < 5) {
            items[count++] = item;
        }
    }
    int getCount() {
        return count;
    }
};

int main() {
    Storage<Node*> cloudStorage;

    Node* db1 = new DatabaseNode();
    Node* db2 = new DatabaseNode();

    cloudStorage.add(db1);
    cloudStorage.add(db2);

    cout << "Nodes in cloud: " << cloudStorage.getCount() << endl;

    delete db1;
    delete db2;
}