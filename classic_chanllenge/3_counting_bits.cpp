/*************************************************************************
 > File Name: 3_counting_bits.cpp
 > Created Time: Sat 16 Dec 2023 03:53:30 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> res(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            res[i] = res[i >> 1] + (i & 1);
        }
        return res;
    }
};

int main(int argc, char *argv[])
{
    Solution s;
    std::vector<int> res = s.countBits(5);
    for (long unsigned int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " " << std::endl;
    }
    return 0;
}