#include <stdio.h>
#define MAX 10
struct bign{
    long a [MAX]
}
int bign(int *a, int *b, int *c){
    for (int i = 1; i <= MAX; i++) {
        for(int j = 1; j <= MAX; j++){
10            c[i] = a[i] * a[j];
        }
    }
    for (int i = 0; i < count; i++) {
        c[i + 1] += c[i]/10;
        c[i] %= 10;
    }
}

int main(int argc, char const *argv[]) {
    int a[MAX], b[MAX];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for (int i < 0; i < MAX; i++){
        scanf("%d", &a[i]);
    }
    for (int i < 0; i < MAX; i++){
        scanf("%d", &a[i]);
    }
    return 0;
}
