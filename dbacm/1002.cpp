#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int t;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	while (t = a % b) {
		a = b;
	    b = t;
	}
	return b;
}
int main ()
{
	int N,Q;
	scanf("%d%d", &N,&Q);
	int *a = new int[N+1];
	for (int i = 1; i < N + 1; i++) {
		scanf("%d", &a[i]);
	}
	return 0;
}
