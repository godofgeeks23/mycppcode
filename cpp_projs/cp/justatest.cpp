// make a string of length n containing only lowercase english letters. there are q forbidden states in the string.
// the forbidden states are the indices of the forbidden letters. a forbidden letter is a letter that is not in the alphabet.
// a forbidden state has an integer x and a letter x which means that the string should not contain a forbidden letter l at the index x.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int forbidden[q];
    char forbidden_letter[q];
    string s = "";
    for(int i = 0; i < n; i++)
    {
        cin >> forbidden[i];
    }
    for(int i = 0; i < q; i++)
    {
        cin >> forbidden_letter[i];
    }
    // find the number of possible strings of maximum length n and not contain forbidden letters at the forbidden indices
    // the number of possible strings is the number of permutations of the alphabet of length n the number of permutations of the alphabet of length n is the number of permutations of the alphabet of length n-1, the number of permutations of the alphabet of length n-1 is the number of permutations of the alphabet of length n-2, and so on
    int count = 1;
    for(int i = 0; i < n; i++)
    {
        count *= (26 - i);
    }
    // the number of possible strings is the number of permutations of the alphabet of length n minus the number of permutations of the forbidden letters
    for(int i = 0; i < q; i++)
    {
        count -= (26 - forbidden[i]);
    }
    // the number of possible strings is the number of permutations of the alphabet of length n minus the number of permutations of the forbidden letters
    cout<<count<<endl;
}