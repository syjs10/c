#include <stdio.h>
#define  max 5
int main(int argc, char const *argv[]) {
    int a[max] = {5, 3, 2 ,6, 1};
    for (int j = 1; j < max; j++){
        int key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] < key) {
            a[i + 1] = a[i];        //每次把牌插入正确位置
            i--;
        }
        a[i + 1] = key;
    }
    for (int i = 0; i < max; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
