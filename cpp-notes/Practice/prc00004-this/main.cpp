#include <iostream>
#include <cstdlib>
using namespace std;

class Student{
public:
    void setname(char *name);
    void setage(int age);
    void setscore(float score);
    void show();
private:
    char *name;
    int age;
    float score;
};

void Student::setname(char *name){
    this->name = name;
}
void Student::setage(int age){
    this->age = age;
}
void Student::setscore(float score){
    this->score = score;
}
void Student::show(){
    cout<<this->name<<"的年龄是"<<this->age<<"，成绩是"<<this->score<<endl;
}

int main(){
    system("chcp 65001");
    Student *pstu = new Student;
    pstu -> setname("李华");
    pstu -> setage(16);
    pstu -> setscore(96.5);
    pstu -> show();

    return 0;
}
/*
this 只能用在类的内部，通过 this 可以访问类的所有成员，包括 private、protected、public 属性的。
 this 是一个指针，要用->来访问成员变量或成员函数。
this 是 const 指针，它的值是不能被修改的，一切企图修改该指针的操作，如赋值、递增、递减等都是不允许的

 */