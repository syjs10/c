#include <stdio.h>
#include <string.h>
int main()
{
	char str[1002] = {'\0'};
	while (fgets(str, 1000, stdin)){
		char *p = "poi";
		char *q = str;
		int count = 0;
		q = strstr(str, p);
		for (int i = 0; i < 334; i++){
			if (q == NULL){
				break;
			}else{
				q = strstr(q + 1, p);
				count++;
			}		
		}
		printf("%d\n", count);
		memset(str, 1002, '\0');
	}
	return 0;
}
