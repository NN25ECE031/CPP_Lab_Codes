#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    void increment() {
        value++;
    }

    void reset() {
        value = 0;
    }

    int get() {
        return value;
    }
};

int main() {
    Counter counters[3];

    // Reset all counters
    for (int i = 0; i < 3; i++) {
        counters[i].reset();
    }

    // Increment counters
    counters[0].increment();
    counters[0].increment();

    counters[1].increment();

    counters[2].increment();
    counters[2].increment();
    counters[2].increment();

    // Display counters
    for (int i = 0; i < 3; i++) {
        cout << "Counter " << i << " = "
             << counters[i].get() << endl;
    }

    return 0;
}
