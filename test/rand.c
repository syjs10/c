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
	int n;
	scanf("%d", &n);
	printf("%d\n", n);
	srand((unsigned)time(NULL));
	while (n--){
		printf("%c",(char)('a'+( rand() % 25)));
	}
	return 0;
}
