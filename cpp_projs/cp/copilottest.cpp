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

