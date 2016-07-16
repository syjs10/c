#include <stdio.h>
#define MAX 10
int a[MAX] = {23, 435, 54, 66, 8, 80, 4, 24, 54, 76};

void Queue(int , int , int);
void sort(int , int);
int main ()
{
		
	sort(0, MAX-1);
	for (int i = 0; i < MAX; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
void Queue(int start, int mid, int end){
		int left[mid - start + 1];
		int right[end - mid];
		int k = start, i = 0, j = 0; 
		for (int i = 0; i < (mid - start + 1); i++){
			left[i] = a[start + i];
		}
		for (int j = 0; j < (end - mid); j++){
			right[j] = a[j + mid + 1];
		}
		while (i <  (mid - start + 1)&& j < (end - mid)){
			if (left[i] > right[j]){
				a[k++] = right[j++];
			} else {
				a[k++] = left[i++];
			}
		}
		while (i < (mid - start + 1)){
			a[k++] = left[i++];
		} 	
		while (j < (end - mid)){
			a[k++] = right[j++];
		}
}

void sort(int start, int end){
	if (start < end){
		int mid = (start + end) / 2; 
		sort(start, mid);
		sort(mid + 1, end);
		Queue(start, mid, end);
	} 
} 
