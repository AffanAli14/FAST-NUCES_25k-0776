#include "iostream"
using namespace std;

class SecuritySystem {
    public :
    void authenticate(string password) {
        if(password.length() < 8) {
            throw "Password too short";
        }
        cout << "Authentication successful!" << endl;
    }
};

int main() {
    SecuritySystem sys;

    try {
        cout << "Attempting to login with '123'..." << endl;
        sys.authenticate("123");
    }
    catch(const char* msg) {
        cout << "Security Alert: " << msg << endl;
    }
}