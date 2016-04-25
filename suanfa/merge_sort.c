#include <stdio.h>
#include <stdlib.h>
#define INF 2147483647
int merge(int *a, int p, int q, int r){
        int n1 = q - p + 1;
        int n2 = r - q;
        int *left, *right;
        left = (int *)malloc(sizeof(int) * (n1 + 1));
        right = (int *)malloc(sizeof(int) * (n2 + 1));
        for (int i = 0; i < n1; i++){
            left[i] = a[p + i];
        }
        left[n1] = INF;
        for (int i = 0; i < n2; i++) {
            right[i] = a[q + i + 1];
        }
        right[n2] = INF;
        int i = 0, j = 0, k = 0;
        for (k = p; k <= r; k++){
            if(left[i] <= right[j]){
                a[k] = left[i++];
            }else{
                a[k] = right[j++];
            }
        }
        free(left);
        free(right);
        return 0;
}
int merge_sort(int *a, int p, int r){
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(a, p, q);
        merge_sort(a, q+1, r);
        merge(a, p, q, r);
    }
    return 0;
}
int main(int argc, char const *argv[]) {
    int a[9] = {23 ,3, 2,423,423424,324,432,42,4};
    merge_sort(a, 0, 9);
    for (int i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
