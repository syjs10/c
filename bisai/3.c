#include <stdio.h>
#include <string.h>
int main ()
{
	char str[101];
	
	while(scanf ("%s", str) != EOF){
		int a[26] = {0};
		for (int i = 0; i < 100; i++){
			if (str[i] == '\0'){
				break;
			}
			a[str[i] - 'a']++;
		}
		int max = 0, min = 100;
		for (int i = 0; i < 26; i++){
			if (a[i] > max){
				max = a[i];
			}
			if (a[i] < min && a[i] != 0){
				min = a[i];
			}
		}
		int k = max - min;
		int count = 0;
		for (int i = 2; i < k; i++){
			if (k % i == 0 && k != 2){
				count = 1;
				break;
			}
		}
		if (count == 0 && k != 1 && k != 0){
			printf("Lucky Word\n%d\n", k);
		}else{
			printf("No Answer\n0\n");
		}
		memset(str, 100, '\0');
	}
	return 0;
}
