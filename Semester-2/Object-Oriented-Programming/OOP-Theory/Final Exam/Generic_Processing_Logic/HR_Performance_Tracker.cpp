#include "iostream"
using namespace std;

class Employee {
    double kpi;
    public:
    Employee(double k) : kpi(k) {}
    double getKPI() { return kpi; }
};

template <typename F>
F getTopPerformer(F a,F b) {
    if(a.getKPI() > b.getKPI()) {
        return a;
    }
    return b;
}

int main() {
    Employee e1(85.5), e2(92.0);
    Employee top = getTopPerformer(e1, e2);
    cout << "Top KPI: " << top.getKPI() << endl;
}