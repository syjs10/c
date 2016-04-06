#include <stdio.h>
int main()
{
	long int l, n;
	while (scanf("%ld%ld", &l, &n) != EOF){
		long int a[1000000] = {0};
		for (int i = 0; i < n; i++){
			scanf("%ld", &a[i]);
		}
		long int max = 0, min = 1000000;
		for(int i = 0; i < n; i++){
			if(max < a[i]){
				max = i;
			}
			if(min > a[i] && a[i] != 0){
				min = a[i];
			}
		}
		a[max] = 0;
		max = 0;
		for(int i = 0; i < n; i++){
			if(max < a[i]){
				max = a[i];
			}
		}
		printf("%ld %ld\n", l-max, l-min);
	}
	return 0;
}
