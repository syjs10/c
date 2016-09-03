#include <iostream>
#include <stdlib.h>
using namespace std;
int getMaxOrMin(int *arr, int count, bool isMax){
	int temp = arr[0];
	for (int i = 0; i < count; i++){
		if (isMax){
			if (temp < arr[i]){
				temp = arr[i];
			}
		} else {
			if (temp > arr[i]){
				temp = arr[i];
			}
		}
	}
	return temp;
}
int main (){
	int arr[4] = {3,5,1,7};
	bool isMax=false;
	cin >> isMax;
	cout << getMaxOrMin(arr, 4, isMax) << endl;
	return 0;
}
