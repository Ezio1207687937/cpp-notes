#include <iostream>
#include <cstdlib>
using namespace std;

class Student{
private:
    char *m_name;
    int m_age;
    float m_score;
public:
    Student(char *name, int age, float score);
    void show();
};

//采用初始化列表
Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){
    //TODO:
}
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}

int main(){
    system("chcp 65001");
    Student stu("小明", 15, 92.5f);
    stu.show();
    Student *pstu = new Student("李华", 16, 96);
    pstu -> show();

    return 0;
}

/*
 * 在构造函数定义中，初始化列表紧跟在构造函数头部的冒号（:）之后。初始化列表中包含一个或多个成员初始化器，每个成员初始化器包含一个成员变量的名称和一个初始值。
 *
 * 使用初始化列表的好处包括：

更高的性能：初始化列表可以在对象构造之前初始化成员变量，避免了在构造函数体内使用赋值语句的额外开销。
更好的代码清晰度和可读性：初始化列表将初始化代码放在一个地方，使代码更清晰易读，同时避免了在构造函数体中使用多个赋值语句的混乱。
 *
 *
 */