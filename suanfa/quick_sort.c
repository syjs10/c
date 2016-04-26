#include <stdio.h>
#include <stdlib.h>
void sort(int *a, int l, int r){
    if (l < r) {
        return;
    } else {
        int i = l;
        int j = r;
        int key = a[l];
        while (i < j) {
            while (i < j && key <= a[j]) {
                j--;
            }
            a[j] = a[i];
            while (i < j && key >= a[i]) {
                i++;
            }
            a[j] = a[i];
        }
        a[i] = key;
        sort(a, l, i - 1);
        sort(a, i + 1, r);
    }
}
int main(int argc, char const *argv[]) {
    int n;
    while (~scanf("%d", &n)){
        int *p = (int *)malloc(sizeof(int) * n);
        sort(p, 0, n - 1);
    }
    return 0;
}
