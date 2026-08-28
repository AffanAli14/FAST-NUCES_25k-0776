#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main() {
    ofstream logOut("server_logs.txt",ios::app);
    if(logOut.is_open()) {
        logOut << "System started. New Event Occurred.\n";
        logOut.close();
    }

    ifstream logIn("server_logs.txt"); 
    string line;

    cout << "--- Current Server Logs ---" << endl;
    if(logIn.is_open()) {
        while(getline(logIn,line)) {
            cout << line << endl;
        }
        logIn.close();
    }
}