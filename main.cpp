#include <iostream>

int gcd(const int a, const int b) {
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main() {

    int a = 8, b = 16;
    std::cout << "Greatest common denominator of " << a << " and " << b << " is " << gcd(a, b) << std::endl;
    return 0;
}