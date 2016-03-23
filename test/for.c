






#include <stdio.h>
#define printf 3.14
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	for (int i = 0; i < 10;){
		printf("%d ", a[i++]);
	}
	printf ("\n");
	int i = 0;
	while (i != 10){
		printf ("%d ", a[i]);
		i++;
	}
	printf ("\n");
	const int PI = 0;
	return 0;
}
