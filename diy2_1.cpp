#include <iostream>
using namespace std;

int volume(int s) {
    return s * s * s;              // Cube
}

int volume(int l, int b, int h) {
    return l * b * h;              // Cuboid
}

float volume(float r, float h) {
    return 3.14 * r * r * h;       // Cylinder
}

int main() {
    cout << "Cube: " << volume(5) << endl;
    cout << "Cuboid: " << volume(2, 3, 4) << endl;
    cout << "Cylinder: " << volume(3.0f, 5.0f) << endl;
}
