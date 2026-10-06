#include <iostream>
using namespace std;

class Matrix {
    int r, c;
    int **a;

public:
    Matrix(int r, int c) : r(r), c(c) {
        a = new int*[r];
        for (int i = 0; i < r; i++)
            a[i] = new int[c];
    }

    // Deep copy constructor
    Matrix(const Matrix &m) : r(m.r), c(m.c) {
        a = new int*[r];
        for (int i = 0; i < r; i++) {
            a[i] = new int[c];
            for (int j = 0; j < c; j++)
                a[i][j] = m.a[i][j];
        }
    }

    ~Matrix() {
        for (int i = 0; i < r; i++)
            delete[] a[i];
        delete[] a;
    }
};

int main() {
    Matrix m1(2, 3);
    Matrix m2 = m1;
}
