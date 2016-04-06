#include <stdio.h>
#include <string.h>
int n, l[15];//定义n表示木棍数量， l数组每个元素表示木棍长度
int h[10000];//确定两条边就知道第三条边,第一条边的长度×100+第二条边的长度
int is_triangle(int a, int b, int c) {
    return !h[a * 100 + b] && a && b && c && a + b > c && a + c > b && b + c > a && (h[a * 100 + b] = 1);
    //三角形要没出现过，每次每条边长度比零大，且两边之和大于第三边
}
int dfs(int index, int a, int b, int c){//深度优先搜索函数定义
     //把每一根木棒放在三堆中的哪一堆,直到把所有木块都放到三堆之一中,再去判断三堆内所有长度作为三角形都合法
    //所以搜索时要保存枚举到第几个木棍及三堆木棍当前的总长度
    if (index == n){
        return a < b && b < c && is_triangle(a, b , c);
    }
    return dfs(index + 1, a + l[index], b, c) + dfs(index + 1, a, b + l[index], c) + dfs(index + 1, a, b, c + l[index]);
    //将l[index]加到第几堆用递归实现
}
int main(){
    int T;
    scanf("%d", &T);
    while (T--){
        scanf("%d", &n);
        for (int i= 0; i < n; ++i){
            scanf("%d", &l[i]);
        }
        memset(h, 0, sizeof(h));
        printf("%d\n", dfs(0, 0, 0, 0));
    }
    
    return 0;
}
