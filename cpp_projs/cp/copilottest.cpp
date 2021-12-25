// Chef is given a binary string S of length N. As Chef loves 1010 and he is busy in the preparation of Christmas, he asks you to count the maximum number of continuous substrings 1010

// , which Chef can get after reordering symbols in the given string.

// As a reminder, a binary string is a string consisting only of 0
// 's ans 1

// 's.
// Input Format

//     The first line of the input contains a single integer T

// - the number of test cases. The test cases then follow.
// The first line of the test case contains an integer N
// - the length of the binary string.
// The second line of each test case contains the binary string S

//     .

// Output Format

// For each test case, print maximum number of continuous substrings 1010
// , which Chef can get after reordering symbols in the string.

//  Sample Input 1

// 3
// 2
// 11
// 8
// 11000100
// 10
// 0100111100

// Sample Output 1

// 0
// 2
// 4

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}