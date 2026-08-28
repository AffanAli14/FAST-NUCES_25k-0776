#include "iostream"
using namespace std;

void connectServer (int outcome) {
    if(outcome == 1) throw 404;
    if(outcome == 2) throw "Timeout";
    if(outcome == 3) throw 3.14;

    cout << "Successfully connected to Server!" << endl;
}

int main() {
    int testCase = 2;

    try {
        cout << "Attempting server connection (Scenario " << testCase << ")..." << endl;
        connectServer(testCase);
    }
    catch(int code) {
        cout << "Network Error Code: " << code << endl;
    }
    catch(const char* msg) {
        cout << "Network Status Message: " << msg << endl;
    }
    catch(...) {
        cout << "An Unknown catastrophic error was caught!" << endl;
    }
}