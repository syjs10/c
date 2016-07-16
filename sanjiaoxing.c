#include <stdio.h>
#include <math.h>
int judgeRt(int , int , int);

int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	//　判断是否能够成三角形
	if (a + b > c && a + c > b && b + c > a){
	//　判断三角形形状
		if (a == b || b == c || a == c){
			if (a == b && b == c){
				printf("等边三角形\n");
			} else {
				if (judgeRt(a, b, c) || judgeRt(b, c, a) || judgeRt(c, b, a)){
					printf("等腰直角三角形\n");
				} else {
					printf("等腰三角形\n");
				}
			}
		} else if (judgeRt(a, b, c) || judgeRt(b, c, a) || judgeRt(c, b, a)){
			printf("直角三角形\n");
		} else {
			printf("普通三角形\n");
		}
		// 计算三角形面积
		double s;
		s = (a + b + c) / 2;
		printf("面积：%.2lf\n", sqrt(s * (s - a) * (s - b) * (s - c)));
	} else {
		printf("无法构成三角形！\n");
	}
	return 0;
}

int judgeRt(int a, int b, int c){ // 判断是否是直角三角形
	if (a * a + b * b == c * c){
		return 1;
	} else {
		return 0;
	}
}
