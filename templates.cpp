#include <iostream>

template <class T>
T max (const T& a, const T& b) {
    return a < b ? b : a;
}


int main() {

    int a = 6, b= 7;
    
    std::cout << max(a, b) << std::endl;
}
