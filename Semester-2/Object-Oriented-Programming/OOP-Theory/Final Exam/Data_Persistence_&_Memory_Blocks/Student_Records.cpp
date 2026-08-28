#include "iostream"
#include "fstream"
using namespace std;

struct Student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    Student s1 = {"Mea" , 0776 , 3.26};

    ofstream stuOut("records.dat" , ios::binary);
    
    if(stuOut.is_open()) {
        stuOut.write(reinterpret_cast<char*>(&s1), sizeof(Student));
        stuOut.close();
        cout << "Student record written directly to memory bytes." << endl;
    }
}