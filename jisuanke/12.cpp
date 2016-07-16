#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char s[10000];
	while(fgets(s, 10000, stdin)){
		int i, count = 0;
		for (i = strlen(s) - 1; ; i--){
            
            if(s[i] == ' ' && s[i+1] > 'a' && s[i+1] < 'z'|| s[i+1] > 'A' && s[i+1] < 'Z'){
                break;
            }
            
			if (s[i] > 'a' && s[i] < 'z'|| s[i] > 'A' && s[i] < 'Z'){
                count++;
            }
		}
		cout << count << endl;
	} 	
	return 0;
}

