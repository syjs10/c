#include <stdio.h>

int binary_search(int len, int num[], int request) {
    int left = 0, right = len - 1, mid;
    while (left < right) {
        mid = (left + right) / 2 ; // step 1: 首先请填写这里的mid
        if (request <= num[mid]) { // step 2: 之后请填写这里的条件表达式
            right = mid; // step 2+: 请在这里填写right应该赋予的值
        } else { 
            left = mid + 1; // step 3: 请在这里填写left应该赋予的值
        }
    }
    // step 4: 请在填写这里的条件表达式
    if (request > num[len - 1]) left++;
    return left;
}

int main() {
    int num[10] = {1, 3, 4, 5, 7, 8, 8, 9, 10, 13};
    printf("%d\n", binary_search(10, num, 6));
    return 0;
}