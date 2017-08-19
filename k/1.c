#include <stdio.h>
int main() {
      int m;
      while (~scanf("%d", &m)) {
            int a[100000];
            int i;
            for ( i = 0; i < m; i++) {
                  scanf("%d", &a[i]);
            }
            int max = a[0];
            for ( i = 0; i < m-1; i++) {
                  int temp = a[i] - a[i+1];
                  if (temp <= 0) {
                        continue;
                  } else {
                        max += temp;
                  }
            }
            printf("%d\n", max);
      }
      return 0;
}
