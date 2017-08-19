#include <stdio.h>
int main ()
{
	int x;
	x = 5;
	x = x || 0;
	printf("%d", x);
	return 0;
}
