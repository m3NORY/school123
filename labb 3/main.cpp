#include <iostream>
int main() {
/*
int a = 0b00111010;
int mask = 0b00010000;
if (a & mask) {
    std::cout << '1' << std::endl;
}
if ( a | mask) {
        std::cout << '1' << std::endl;
}
else {
    std::cout << '0' << std::endl;
}
*/

unsigned int x;
int i;
int bitt;
std::cout << "num::" << std::endl;
std::cin >> x;
std::cout << "i:" << std::endl;
std::cin >> i;
unsigned int maska = 1 << i;
if (x & maska) {
    bitt = 1;
}
else {
    bitt = 0;
}
std::cout << "i: " << i << " в числе " << x << "равен:" << bitt << std::endl;


}