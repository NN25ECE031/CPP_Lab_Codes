#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex numbers[3];

    numbers[0].setData(2, 3);
    numbers[1].setData(4, 5);
    numbers[2].setData(6, 7);

    for (int i = 0; i < 3; i++) {
        cout << "Complex number " << i << " = ";
        numbers[i].display();
    }

    return 0;
}
