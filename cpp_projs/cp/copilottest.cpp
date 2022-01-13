// #include<iostream>
// using namespace std;

// int get_non_zero_neighbors(int matrix[100][100], int size_row, int size_cols, int element_row, int element_col)
// {
//     int i, j, count = -1;
//     if(matrix[element_row][element_col] != 0)
//     {
//     for (i = element_row - 1; i <= element_row + 1; i++)
//     {
//         for (j = element_col - 1; j <= element_col + 1; j++)
//         {
//             if (i >= 0 && i < size_row && j >= 0 && j < size_cols)
//             {
//                 if (matrix[i][j] != 0)
//                 {
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int m,n;
//     cin>>m>>n;
//     int matrix[100][100];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>matrix[i][j];
//         }
//     }
//     int qualitiy_matrix[m][n];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             qualitiy_matrix[i][j]=get_non_zero_neighbors(matrix,m,n,i,j);
//         }
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<qualitiy_matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // find the max element in qualitiy_matrix
//     int max_element=qualitiy_matrix[0][0];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(qualitiy_matrix[i][j]>max_element)
//             {
//                 max_element=qualitiy_matrix[i][j];
//             }
//         }
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(qualitiy_matrix[i][j]!=max_element)
//             {
//                 qualitiy_matrix[i][j]=0;
//             }
//         }
//     }
//     // display the position of closest non zero element in qualitiy_matrix

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    // given a string find the minimum nuber of cuts to split the string so that all substrings are palindromes
    string s = "aaaa";
    int n = s.length();
    int dp[n][n];
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = 1;
        }
    }
    for (int gap = 2; gap < n; gap++)
    {
        for (int i = 0; i < n - gap; i++)
        {
            int j = i + gap;
            if (s[i] == s[j] && dp[i + 1][j - 1] == 1)
            {
                dp[i][j] = 1;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[0][i] == 1)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}