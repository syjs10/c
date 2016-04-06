#include <stdio.h>
#include <string.h>
int main()
{
	int m, l;
	while(scanf("%d%d", &m, &l) != EOF){
		int a = 0, b = 0;
		int k[10000] = {0};
		for (int i = 0; i < m; i++){
			k[i] = 1;
		}
		for (int i = 0; i < l; i++){
			scanf("%d%d", &a, &b);
			for (int j = a; j <= b; j++){
				k[j] = 0;
			}
		}
		int sum = 0;
		for (int i = 0; i < 10000; i++){
			sum = sum + k[i];
		}
		printf("%d\n", sum+1);
	}
	return 0;
}
