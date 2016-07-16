#include <iostream>
using namespace std;
//基类　－－People
class People {
	private:
		char *name;
		int age;
	public:
		void setName(char *);
		void setAge(int );
		void display();
};

void People::setName(char *name) {
	this -> name = name;
}
void People::setAge(int age) {
	this -> age = age;
}
void People::display() {
	cout << name << " age: " << age;
}
//派生类　－－Student

class Student: public People {
	private:
		float score;
	public:
		Student(char *, int , float );
		void display1();
};


Student::Student(char *name, int age, float score) {
	this -> setName(name);
	this -> setAge(age);
	this -> score = score;
}

void Student::display1() {
	this -> display();
	cout << " score: " << score << endl;
}

int main() {
	Student stu("小明", 18, 94.4);
	stu.display1();
	return 0;
}
