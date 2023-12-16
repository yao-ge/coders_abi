/*************************************************************************
 > File Name: tmp_hello_world.cpp
 > Created Time: Fri 15 Dec 2023 02:44:54 PM CST
 ************************************************************************/

#include <iostream>

template<unsigned n>
struct factorial {
    enum { value = n * factorial<n - 1>::value };
};

template<>
struct factorial<0> {
    enum { value = 1 };
};

int main(int argc, char *argv[])
{
    std::cout << factorial<5>::value << std::endl;
    return 0;
}