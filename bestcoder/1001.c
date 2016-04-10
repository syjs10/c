#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--){
		int a, b;
		scanf("%d%d", &a, &b);
		int k, l, sum = 0;
		k = 180 * (a - 2) / a;
		l = 180 * (b - 2) / b;
		for (int i = 0; i <= 300; i++){
			for (int j = 0; j <= 300; j++){
				sum = i * k + j * l;
				if (sum == 360){
					break;
				}
			}
			if(sum == 360){
				break;
			}
		}
		if(sum == 360){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
