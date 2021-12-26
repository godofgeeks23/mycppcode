#include<stdio.h>
void main()
{
    int n,i,j,x,y,sumeven=0,sumodd=0,diff,temp;
    printf("Size of Array\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements of array\n");
    for(i=0 ; i<n ; i++)
    {
       scanf("%d", &a[n]);
    }
     for (x = 0; i < n; ++i) 
        {
 
            for (y = x + 1; j < n; ++j)
            {
 
                if (a[x] > a[y]) 
                {
 
                    temp =  a[x];
                    a[x] = a[y];
                    a[y] = temp;
 
                }
 
            }
        }
        for(j=0 ; j<n ; j++)
        {
      if(a[j]==b[j])
      {
          sumeven = sumeven + a[j];
      }
      else
      {
          sumodd = sumodd + a[j];
      }
        }
      diff = sumeven - sumodd;
      printf("%d", diff);
}