#include "iostream"
using namespace std;

template <typename T>
class Spooler {
    T jobs[5];
    int count = 0;
    public :
    void addJob(T document) {
        if(count < 5) {
            jobs[count++] = document;
        }
    }
    int getJobCount() { return count; }
};

int main() {
    Spooler<string> printer;
    printer.addJob("Essay.docx");
    cout << "Jobs in spooler: " << printer.getJobCount() << endl;
}