#include "iostream" 
using namespace std;

class User {
    protected:
    string email;
    public:
    User(string e) : email(e) {}
    virtual double getPlatformRating() = 0;
};

class Client : public User {
    public:
    Client(string e) : User(e) {} 
    double getPlatformRating() {
        return 4.8;
    }
};

class Freelancer : public User {
    public:
    Freelancer(string e) : User(e) {}
    double getPlatformRating() {
        return 4.9;
    }
};

int main() {
    Freelancer f("dev@mail.com");
    cout << "Freelancer Rating: " << f.getPlatformRating() << endl;
}