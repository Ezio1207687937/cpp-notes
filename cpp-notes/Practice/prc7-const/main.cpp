#include <iostream>
#include "cstdlib"
using namespace std;

class Student{
public:
    Student(char *name, int age, float score);
    void show();
    //声明常成员函数
    char *getname() const;
    int getage() const;
    float getscore() const;
    //成员函数是指在函数的参数列表后面加上 const 关键字，以表示该函数不会修改调用对象的状态
    //常成员函数需要在声明和定义的时候在函数头部的结尾加上 const 关键字
private:
    char *m_name;
    int m_age;
    float m_score;
};

Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){ }
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}
//定义常成员函数
char * Student::getname() const{
    return m_name;
}
int Student::getage() const{
    return m_age;
}
float Student::getscore() const{
    return m_score;
}

int main(){
    system("chcp 65001");
    Student stu("鸣人",15,59);
    //stu.show();
    cout<<stu.getname()<<"的年龄是"<<stu.getage()<<"岁,分数是："<<stu.getscore()<<endl;
}

//初始化 const 成员变量只有一种方法，就是通过构造函数的初始化列表
//函数开头的 const 用来修饰函数的返回值，表示返回值是 const 类型，也就是不能被修改，例如const char * getname()。
//函数头部的结尾加上 const 表示常成员函数，这种函数只能读取成员变量的值，而不能修改成员变量的值，例如char * getname() const。