/*************************************************************************
 > File Name: get_sizeof.cpp
 > Created Time: Tue 12 Dec 2023 03:45:30 PM CST
 ************************************************************************/

#include <iostream>

int get_sizeof_int() { return sizeof(int); }

int get_sizeof_pthread_mutex_t() { return sizeof(pthread_mutex_t); }

int main(int argc, char *argv[]) {
    std::cout << "sizeof(int) = " << get_sizeof_int() << std::endl;
    std::cout << "sizeof(pthread_mutex_t) = " << get_sizeof_pthread_mutex_t() << std::endl;
    return 0;
}