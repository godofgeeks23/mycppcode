// Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.

// Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K

// . Many players saw this trick and also started hiding behind Ali.

// Now, there are N
// players standing between Gi-Hun and Ali in a straight line, with the ith player having height Hi

// . Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.

// Note:

//     Line of sight is a straight line drawn between the topmost point of two objects. Ali is visible to Gi-Hun if nobody between them crosses this line.
//     Even if there are some players who have the same height as that of Gi-Hun and Ali, Ali will be visible in Gi-Hun's line of sight.
//     Gi-Hun and Ali have the same height.

// Input Format

//     The first line of input contains a single integer T

// , denoting the number of test cases. The description of T
// test cases follows.
// The first line of each test case contains two space-separated integers N
// and K
// , denoting the total number of players between Gi-Hun and Ali and the height of both of them respectively.
// The second line of each test case contains N

//     space-separated integers, denoting the heights of the players between Gi-Hun and Ali.

// Output Format

// For each test case, output in a single line the minimum number of players who need to get shot so that Ali is visible in Gi-Hun's line of sight.
//  Sample Input 1

// 3
// 4 10
// 2 13 4 16
// 5 8
// 9 3 8 8 4
// 4 6
// 1 2 3 4

// Sample Output 1
// 2
// 1
// 0

// solution
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include <climits>
#include <cctype>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <sstream>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <utility>
#include <ctime>
#include <functional>
#include <iterator>
#include <numeric>
#include <complex>
#include <valarray>
#include <cassert>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <climits>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> v(n);
        for (int i = 0; i < n; i++)
            std::cin >> v[i];
        std::sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > k)
                break;
            ans++;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}