/*************************************************************************
 > File Name: get_array_size.cpp
 > Created Time: Fri 15 Dec 2023 05:24:03 PM CST
 ************************************************************************/

#include <iostream>

template <typename T, std::size_t N>
constexpr std::size_t get_array_size(const T (&)[N]) {
    return N;
}

int main() {
    int arr[] = {1, 2, 3};
    std::cout << get_array_size(arr) << std::endl;
    return 0;
}