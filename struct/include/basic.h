struct address{
	char *country;
	char *city;
	char *street;
};
struct student{
	//成员列表
	int xh;
	char *name;
	char *gender;
	int age;
	//结构体的嵌套
	struct address *addr;
};
