/*************************************************************************
    > File Name: 1001.c
    > Author: JS
    > Created Time: 2016年03月15日 星期二 21时54分50秒
 ************************************************************************/


#include <stdio.h>

int main()
{
	int sum,n;
	sum=0;
	scanf("%d",&n);
	while(n!=0){
		sum=sum+n;
		n=n-1;
	}
	for ( ; ; )
    printf("%d\n\n",sum);
    return 0;
}
