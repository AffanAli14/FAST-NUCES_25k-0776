#include "iostream"
using namespace std;

class Server {
    int ping;
    public:
    Server(int p) : ping(p) {}
    int getPing() {
        return ping;
    }
};

class NetworkManager {
    public:
    bool isNetworkStable(Server nodes[],int count) {
        if(count <= 0) {
            return false;
        }
        for(int i;i < count;++i) {
            if(nodes[i].getPing() > 500) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Server network[2] = {Server(45),Server(501)};
    NetworkManager nm;
    cout << "Network Stable? " << (nm.isNetworkStable(network,2) ? "Yes" : "No") << endl;
}