// (boilerplate) code 1
// --------------------#include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// void main()
// {

// }

#include <stdio.h>
#include <time.h>
int main(void) {
    double time_spent = 0.0;
    clock_t begin = clock();
  int i, a[20], n, key, flag = 0;
  printf("Enter the size of array : ");
  scanf("%d", &n);
  printf("Enter the array elements : ");
  for(i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the key elements : ");
  scanf("%d", &key);
  for(i = 0; i < n; i++)
  {
    if(a[i] == key)
    {
      flag = 1;
      break;
    }
  }
  if(flag == 1)
  {
    printf("The key element is found at location %d ", i + 1);
  }
  else
  {
    printf("The key element is not found in array");
  }
  clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);
  return 0;
}
// float t2 = clock();