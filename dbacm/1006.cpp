#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main ()
{
      int m;
      cin >> m;
      while (m--) {
            int n;
            cin >> n;
            int *a = new int[n];
            for (int i = 0; i < n; i++) {
                  cin >> a[i];
            }
            int sign = 0;
            while (m-- > 0) {
                  int sum = 0;
                  for (int i = 0; i < n; i++) {
                        sum += a[i];
                  }
                  if (sum != 2 * n){
                        sign = 1;
                        break;
                  }
                  sort(a, a+n);
                  

            }
            delete a;
            a = NULL;
      }
      return 0;
}
