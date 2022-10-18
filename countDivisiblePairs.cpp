//program to count divisible pairs in an array
#include <iostream>
using namespace std;
 
int countDiv(int arr[], int n)
{
    int res = 0;
 
    // Iterate through all pairs
    for (int i=0; i<n; i++)
      for (int j=i+1; j<n; j++)
           
         // Increment count if one divides
         // other
         if (arr[i] % arr[j] == 0 ||
             arr[j] % arr[i] == 0)
               res++;
 
    return res;
}
 
int main()
{
    int a[] = {1, 2, 3, 9};
    int n = sizeof(a) / sizeof(a[0]);
    cout << countDiv(a, n);
    return 0;
}

