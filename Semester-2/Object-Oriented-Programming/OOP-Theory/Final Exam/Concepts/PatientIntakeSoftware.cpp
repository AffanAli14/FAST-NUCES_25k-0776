#include "iostream"
#include "fstream"
using namespace std;

class Patient {
    protected: 
    int medicalID;
    public:
    Patient(int id) : medicalID(id) {}
};

class Inpatient : virtual public Patient {
    public :
    Inpatient(int id) : Patient(id) {}
};

class ERPatient : virtual public Patient {
    public :
    ERPatient(int id) : Patient(id) {}
};

class IntensiveCarePatient : public Inpatient, public ERPatient {
    int severityScore;
    public:
    IntensiveCarePatient(int id, int score) : Patient(id), Inpatient(id), ERPatient(id) , severityScore(score) {}

    int getSeverityScore() {
        return severityScore;
    }
};

template <typename T>
T prioritize(T a,T b) {
    if(a.getSeverityScore() > b.getSeverityScore()) {
        return a;
    }
    return b;
}

struct VitalRecord {
    int patientID;
    double heartRate;
};
int main() {
    IntensiveCarePatient p1(101, 8);
    IntensiveCarePatient p2(102, 10);

    IntensiveCarePatient worst = prioritize(p1, p2);
    cout << "Highest priority patient has score: " << worst.getSeverityScore() << endl;

    VitalRecord records[50];
    for(int i = 0; i < 50; i++) {
        records[i] = {i, 80.0 + i};
    }

    ofstream archiveOut("archive.dat", ios::binary);
    if(archiveOut.is_open()) {
        archiveOut.write(reinterpret_cast<char*>(records), sizeof(VitalRecord) * 50);
        archiveOut.close();
        cout << "50 records successfully archived to binary file." << endl;
    }
}