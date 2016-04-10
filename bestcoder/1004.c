#include <stdio.h>
#include <math.h>
long long  gcd(long long a, long long b){
	if (a > b){
		long long temp = a;
		a = b;
		b = temp;
	}
	if (a == 0){
		return b;
	}else{
		gcd(b % a, a);	
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	while (n--){
		long long  a, b, i, j;
		long long  sum = 0;
		scanf("%lld%lld", &a, &b);
		for (i = 1; i <= a; i++){
			for(j = 1; j <= b; j++){
				long long s = gcd(i, j);
				if (sqrt(s)*sqrt(s) == s){
					continue;
				}
				sum++;
			}
		}
		printf("%lld\n", sum);
	}
	return 0;
}
