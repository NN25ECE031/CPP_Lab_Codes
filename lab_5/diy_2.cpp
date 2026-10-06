#include <iostream>
using namespace std;

class Time {
    int hh, mm;

public:
    Time(int h, int m) : hh(h), mm(m) {}

    friend Time laterOf(Time, Time);

    void show() {
        cout << hh << ":" << mm << endl;
    }
};

Time laterOf(Time a, Time b) {
    if (a.hh > b.hh || (a.hh == b.hh && a.mm > b.mm))
        return a;
    return b;
}

int main() {
    Time t1(10, 30), t2(12, 15);
    Time t = laterOf(t1, t2);
    t.show();
}

