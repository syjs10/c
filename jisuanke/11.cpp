#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n){
		int *a = new int[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		int *k, *l;
		k = a;
		l = a;
		int count = 0;
		while (k < &a[n] && l < &a[n]){
			l++;
			while (*k == *l && l != &a[n]){
				l++;
				count++;
			}
			k = l;
		}
		cout << n - count << endl;
	}
	return 0;
}
