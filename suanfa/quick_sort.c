#include <stdio.h>
#include <stdlib.h>
void sort(int *a, int l, int r){
    if (l > r) {
        return;
    }
        int i = l;
        int j = r;
        int key = a[l];
        while (i < j) {
            while (i < j && key <= a[j]) {
                j--;
            }
            a[i] = a[j];
            while (i < j && key >= a[i]) {
                i++;
            }
            a[j] = a[i];
        }
        a[i] = key;
        sort(a, l, i - 1);
        sort(a, i + 1, r);

}
int main(int argc, char const *argv[]) {
    int n;
    while (~scanf("%d", &n)){
        int *p = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++){
            scanf("%d", &p[i]);
        }
        sort(p, 0, n - 1);
        for (int i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
        free(p);
    }
    return 0;
}
