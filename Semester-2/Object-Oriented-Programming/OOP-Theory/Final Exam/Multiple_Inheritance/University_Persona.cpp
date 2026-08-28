#include "iostream"
using namespace std;

class Person {
    protected:
    int idNumber;
    public :
    Person (int id) : idNumber(id) {}
    int getID() {return idNumber; }
};

class Student : virtual public Person {
    public :
    Student (int id) : Person(id) {}
};

class Employee : virtual public Person {
    public :
    Employee(int id) : Person(id) {}
};

class TeachingAssitant : public Student , public Employee {
    public :
    TeachingAssitant(int id) :Person(id),Student(id),Employee(id) {}
};

int main() {
    TeachingAssitant ta(0776);
    cout << "TA ID Number: " << ta.getID() << endl;
}