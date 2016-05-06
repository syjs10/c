/*************************************************************************
    > File Name: sort.c
    > Author: JS
    > Created Time: 2016年03月09日 星期三 22时32分38秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int *p = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++){
		scanf("%d", p + i);
	}
	clock_t start = clock();
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			if (p[i] > p[j]){
 				int temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
	}	
	clock_t end = clock();
	for (int i = 0; i < n; i++){
		printf("%d ", *(p + i));
		if (i == 15){
			printf("\n");
		}
	}
	printf("time : %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	return 0;
}
