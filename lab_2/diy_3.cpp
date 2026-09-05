#include <iostream>
using namespace std;

inline int minVal(int a, int b) {
    return (a < b) ? a : b;
}

inline int minVal(int a, int b, int c) {
    return minVal(minVal(a, b), c);
}

int main() {
    cout << minVal(5, 3) << endl;
    cout << minVal(7, 4, 2) << endl;
}
