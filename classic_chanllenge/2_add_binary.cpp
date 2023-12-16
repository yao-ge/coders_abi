/*************************************************************************
 > File Name: 2_add_binary.cpp
 > Created Time: Fri 15 Dec 2023 11:24:16 PM CST
 ************************************************************************/

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
   public:
    string addBinary(string a, string b) {
        string res;
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0) carry += a[i--] - '0';
            if (j >= 0) carry += b[j--] - '0';
            res += (carry % 2) + '0';
            carry /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(int argc, char *argv[])
{
    string a, b;
    Solution s;
    cin >> a >> b;
    cout << s.addBinary(a, b) << endl;
    return 0;
}