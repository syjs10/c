#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a[5] = {1,0,1,1,0}, b[5] = {0,0,1,1,0}, c[6] = {0};
    for (int i = 4; i >= 0; i--) {
        c[i] = (c[i + 1] + a[i] + b[i]) / 2;
        c[i + 1] = (c[i + 1] + a[i] + b[i]) % 2;

    }
    for(int i = 0; i < 6; i++){
        if (c[i] == 0 && i == 0){
            continue;
        }
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}
