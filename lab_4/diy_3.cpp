#include <iostream>
using namespace std;

class Tracer {
public:
    Tracer()  { cout << "Created\n"; }
    ~Tracer() { cout << "Destroyed\n"; }
};

int main() {
    for (int i = 0; i < 5; i++) {
        Tracer *t = new Tracer;
        delete t;   // Remove this line to observe the leak
    }
}
