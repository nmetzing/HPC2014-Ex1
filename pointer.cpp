#include <iostream>
#include <cstdlib>

void swap(int &a, int &b) {
    int tmp = b;
    b = a;
    a = tmp;
}

int main() {

    float x[10]; // static array


    for (int i = 0; i < 10; i++)
        std::cout << x[i] << std::endl;


    std::cout << sizeof(x) << std::endl;

    // the C way
    float *y = (float *) malloc(sizeof(float) * 10);

    std::cout << sizeof(y) << std::endl;

    free(y);

    // the C++ way
    float *z = new float[10];

    std::cout << sizeof(z) << std::endl;
    std::cout << sizeof(*z) << std::endl;


    delete[] z;

    // references
    int a = 5, b = 7;

    swap(a, b);

    std::cout << a << "\t" << b << std::endl;
}
