#include <stdio.h>
#include <time.h>
int main()

{
	int i;
	int next = time(0);
	for(i = 0; i < 10; i++){
		
		next = next * 1103512545 + 12345;
		printf("%u\n",(unsigned int) (next/65536)%32768);
	}
	return 0;
}