#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--){
		long long a[4]; 
		scanf("%lld%lld%lld%lld", &a[0], &a[1], &a[2], &a[3]);
		int i, j;
		long long max = 0;
		for (i = a[0]; i <= a[1]; i++){
			for (j = a[2]; j <= a[3]; j++){
				if(max < (i ^ j)){
					max = (i ^ j);
				}
			}
		}
		printf("%lld\n", max);
	}
	return 0;
}
