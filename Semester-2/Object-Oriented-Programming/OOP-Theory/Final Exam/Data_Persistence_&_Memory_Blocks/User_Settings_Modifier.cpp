#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main() {
    ofstream tempOut("config.txt");
    tempOut << "Volume 10";
    tempOut.close();

    ifstream configIn("config.txt");
    string settingName;
    int settingValue;

    if(configIn.is_open()) {
        configIn >> settingName >> settingValue;
        configIn.close();
    }

    ofstream configOut("config.txt");
    if(configOut.is_open()) {
        configOut << settingName << " " << (settingValue + 1);
        configOut.close();
        cout << "Setting updated successfully. New " << settingName << " is " << (settingValue + 1) << "." << endl; 
    }
}