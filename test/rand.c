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
		srand((unsigned)time(NULL));
	for(int i = 0; i < 70000; i++){
		int n = 50;
		int k = 0;
		while (n--){
			int a;
			a = (int) rand() % 2;
			if (a == 1){
				k++;
			}
		}
		printf("%d\n", k);
	}
	return 0;
}
