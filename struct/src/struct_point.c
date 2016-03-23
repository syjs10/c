/*************************************************************************
    > File Name: src/struct_point.c
    > Author: JS
    > Created Time: 2016年03月12日 星期六 22时33分09秒
 ************************************************************************/


#include <stdio.h>
#include <string.h>
#include "basic.h"
void out_student(struct student *stup);
void out_students(struct student *stups[], int n);
int main(void)
{
	struct address addr1 = 
	{"china", "shanghai", "beijing road"};
	struct student stu1 = 
	{1, "zhangsan", "male", 20, &addr1};
	struct address addr2 = 
	{"china", "beijing", "changan road"};
	struct student stu2 = 
	{2, "lisi", "male", 22, &addr2};
	struct student *stup1 = &stu1;
	struct student *stup2 = &stu2;
	struct student *stus[] = {&stu1, &stu2};
	out_students(stus, 2);
	printf("name:%s\n", stup1 -> name);
	printf("city:%s\n", stup1 -> addr -> city);
	printf("name:%s\n", (*stup1).name);
	printf("************************\n");
	out_student(stup1);
	printf("------------------------\n");
	out_student(stup2);
	
	return 0;
}
void out_student(struct student *stup)
{
	printf ("size: %lu\n", sizeof(stup));
	printf ("xh: %d\n", stup -> xh);
	printf ("name: %s\n", stup -> name);
	printf ("gender: %s\n", stup -> gender);
	printf ("age: %d\n", stup -> age);
	printf ("country: %s\n", stup -> addr ->country);
	printf ("city: %s\n", stup -> addr -> city);
	printf ("street: %s\n", stup -> addr -> street);
}
void out_students(struct student *stups[], int n)
{
	for (int i = 0; i < 2; i++){
		out_student(stups[i]);
		printf ("=================\n");
	}
}

