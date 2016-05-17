#include <stdio.h>
#include <math.h>
int judge(int );

int main(){
	for (int i = 100; i < 1000; i++){
		if (judge(i)){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}

int judge(int a){
	if ((pow(a / 100, 3) + pow(a % 10, 3) + pow((a % 100)/10, 3)) == a){
		return 1;
	} else {
		return 0;
	}
}

