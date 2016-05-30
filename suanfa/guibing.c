#include <stdio.h>
#define MAX 10
int a[MAX] = {23, 435, 54, 66, 8, 80, 4, 24, 54, 76};

int Queue(int , int , int);

int main ()
{
		
	Queue(0, MAX / 2, MAX);
	return 0;
}
int Queue(int start, int mid, int end){
	if (start < end){
		int left[mid - start + 1];
		int right[end - mid];
		for (int i = 0; i < mid; i++){
			left[i] = a[i];
			right[i] = a[i + mid];
			printf("%d %d\n", left[i], right[i]);
		}
		
	} else {
		return 0;
	}
}
