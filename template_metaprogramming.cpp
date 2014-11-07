#include <iostream>

template <int N>
int factorial() {
    return N * factorial<N-1>();
}

template <>
int factorial<0> () {
    return 1;
}

int main() {
    std::cout << factorial<0>() << std::endl;
    std::cout << factorial<6>() << std::endl;
}
