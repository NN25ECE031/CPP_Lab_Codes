#include <iostream>
using namespace std;

class Counter {
    static int total, alive;

public:
    Counter() { total++; alive++; }
    ~Counter() { alive--; }

    static void show() {
        cout << "Total created: " << total << endl;
        cout << "Currently alive: " << alive << endl;
    }
};

int Counter::total = 0;
int Counter::alive = 0;

int main() {
    Counter a, b;
    Counter::show();

    {
        Counter c;
        Counter::show();
    }

    Counter::show();
}
