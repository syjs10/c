/*************************************************************************
    > File Name: ../test/a.c
    > Author: JS
    > Created Time: 2016年03月17日 星期四 19时32分09秒
 ************************************************************************/


#include <stdio.h>

int gcd (int a,int b)
{
	if (a < b){
		int temp = a;
		a = b;
		b = temp;
	}
	if (a % b == 0){
		return b;
	}else{
		gcd(a,a % b);
	}
}
int main ()
{
	int a, b;
	scanf ("%d%d", &a, &b);
	printf ("%d\n", a*b/gcd(a,b));
	return 0;
}
