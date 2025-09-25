#include <iostream>
#include <string>
#include <typeinfo>
#include <limits>
int main()
{

    int i = 2300;
    std::cout << "i : " << i << std::endl;
    std::cout << "type : " << typeid(i).name() << std::endl;
    std::cout << "size : " << sizeof(i) << std::endl;
    std::cout << "int min : " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "int max : " << std::numeric_limits<int>::max() << std::endl;


    unsigned int ui = 2300;
    std::cout << "ui : " << ui << std::endl;
    std::cout << "type : " << typeid(ui).name() << std::endl;
    std::cout << "size : " << sizeof(ui) << std::endl;
    std::cout << "unsigned int min : " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "unsigned int max : " << std::numeric_limits<unsigned int>::max() << std::endl;


    char c = 52;
    std::cout << "c : " << c << std::endl;
    std::cout << "type :  " << typeid(c).name() << std::endl;
    std::cout << "size : " << sizeof(c) << std::endl;
    std::cout << "char min : " << (int)std::numeric_limits<char>::min() << std::endl;
    std::cout << "char max : " << (int)std::numeric_limits<char>::max() << std::endl;


    unsigned char uc = 520;
    std::cout << "uc : " << (int)uc << std::endl;
    std::cout << "type : " << typeid(uc).name() << std::endl;
    std::cout << "size : " << sizeof(uc) << std::endl;
    std::cout << "unsigned char min : " << (int)std::numeric_limits<unsigned char>::min() << std::endl;
    std::cout << "unsigned char max : " << (int)std::numeric_limits<unsigned char>::max() << std::endl;


    short s = 40;
    std::cout << "s :  " << s << std::endl;
    std::cout << "type : " << typeid(s).name() << std::endl;
    std::cout << "size : " << sizeof(s) << std::endl;
    std::cout << "short min : " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "short max : " << std::numeric_limits<short>::max() << std::endl;


    unsigned short us = 40;
    std::cout << "us : " << us << std::endl;
    std::cout << "type : " << typeid(us).name() << std::endl;
    std::cout << "size : " << sizeof(us) << std::endl;
    std::cout << "unsigned short min : " << std::numeric_limits<unsigned short>::min() << std::endl;
    std::cout << "unsigned short max : " << std::numeric_limits<unsigned short>::max() << std::endl;


    long l = 80000;
    std::cout << "l = " << l << std::endl;
    std::cout << "type : " << typeid(l).name() << std::endl;
    std::cout << "size : " << sizeof(l) << std::endl;
    std::cout << "long min : " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "long max : " << std::numeric_limits<long>::max() << std::endl;


    unsigned long ul = 80000;
    std::cout << "ul : " << ul << std::endl;
    std::cout << "type ul : " << typeid(ul).name() << std::endl;
    std::cout << "size ul : " << sizeof(ul) << std::endl;
    std::cout << "unsigned long min : " << std::numeric_limits<unsigned long>::min() << std::endl;
    std::cout << "unsigned long max : " << std::numeric_limits<unsigned long>::max() << std::endl;


    long long ll = 120000;
    std::cout << "ll : " << ll << std::endl;
    std::cout << "type : " << typeid(ll).name() << std::endl;
    std::cout << "size : " << sizeof(ll) << std::endl;
    std::cout << "long long min : " << std::numeric_limits<long long>::min() << std::endl;
    std::cout << "long long max : " << std::numeric_limits<long long>::max() << std::endl;


    unsigned long long ull = 120000;
    std::cout << "ull : " << ull << std::endl;
    std::cout << "type : " << typeid(ull).name() << std::endl;
    std::cout << "size : " << sizeof(ull) << std::endl;
    std::cout << "unsigned long long min : " << std::numeric_limits<unsigned long long>::min() << std::endl;
    std::cout << "unsigned long long max : " << std::numeric_limits<unsigned long long>::max() << std::endl;


    float f = 3.14;
    std::cout << "f : " << f << std::endl;
    std::cout << "type : " << typeid(f).name() << std::endl;
    std::cout << "size : " << sizeof(f) << std::endl;
    std::cout << "float min : " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "float max : " << std::numeric_limits<float>::max() << std::endl;


    double d = 3.1415;
    std::cout << "d : " << d << std::endl;
    std::cout << "type : " << typeid(d).name() << std::endl;
    std::cout << "size : " << sizeof(d) << std::endl;
    std::cout << "double min : " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "double max : " << std::numeric_limits<double>::max() << std::endl;


    long double ld = 3.14159;
    std::cout << "ld : " << ld << std::endl;
    std::cout << "type :" << typeid(ld).name() << std::endl;
    std::cout << "size : " << sizeof(ld) << std::endl;
    std::cout << "long double min : " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "long double max : " << std::numeric_limits<long double>::max() << std::endl;


    bool bol = false;
    std::cout << "bol = " << bol << std::endl;
    std::cout << "type : " << typeid(bol).name() << std::endl;
    std::cout << "size : " << sizeof(bol) << std::endl;
    std::cout << "bool min : " << std::numeric_limits<bool>::min() << std::endl;
    std::cout << "bool max : " << std::numeric_limits<bool>::max() << std::endl;


    int a1 = 10;
    int a2 = 30;
    int sum = a1 + a2;
    std::cout << 's : ' << a1 << std::endl;


    return 0;

}