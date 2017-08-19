#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
int main () {
	while ((ch = getchar()) !=EOF){
		if (KEY_LEFT == ch){
			printf("left");
		}
	}
	return 0;
}
