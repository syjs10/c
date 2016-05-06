/*************************************************************************
    > File Name: rand.c
    > Author: JS
    > Created Time: 2016年03月09日 星期三 22时41分22秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n = 1000000;
//	scanf("%d", &n);
	printf("%d\n", n);
	srand((unsigned)time(NULL));
	while (n--){
		printf("%d ",(int) rand() % 1000000 + 1);
	}
	return 0;
}
