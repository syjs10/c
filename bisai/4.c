#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		int a[10000][4];
		for(int i = 0; i < n; i++){
			scanf("%d%d%d%d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
		}
		int x, y;
		scanf("%d%d", &x, &y);
		int count1 = 0, count2 = 0;
		for (int i = 0; i < n; i++){
			if(x >= a[i][0] && x <= (a[i][0] + a[i][2])){
				count1 = i;
			}
			if(y >= a[i][1] && y <= (a[i][1] + a[i][3])){
				count2 = i;
			}
		}
		if(count1 < count2 && count1*count2 != 0){
			count1 = count2;	
		}
		if (count1 != 0 && count2 != 0){
			printf("%d\n", count1 + 1);
		}else{
			printf("-1\n");
		}
	}
	
	return 0;
}
