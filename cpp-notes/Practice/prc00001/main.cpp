#include <iostream>
#include <cstdlib>
using namespace std;

//类的声明
class Student{
private:  //私有的
    char *m_name;
    int m_age;
    float m_score;

public:  //共有的
    void setname(char *name);
    void setage(int age);
    void setscore(float score);
    void show();
};

//成员函数的定义
void Student::setname(char *name){
    m_name = name;
}
void Student::setage(int age){
    m_age = age;
}
void Student::setscore(float score){
    m_score = score;
}
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<endl;
}

int main(){
    system("chcp 65001");
    //"system" 函数是一个用于执行命令的标准库函数。"chcp 65001" 命令将控制台的代码页更改为 "UTF-8"，这是一种用于支持 Unicode 字符的编码格式。这意味着您可以在控制台窗口中正确显示包括中文等非英语字符的文本。
    //在栈上创建对象
    /*
     * 私有变量 m_name, m_age 和 m_score 都是通过成员函数 setname, setage 和 setscore 来设置的，而不是直接通过类实例来访问的。因此，您可以访问私有变量。
     */
    Student stu;
    stu.setname("小明");
    stu.setage(15);
    stu.setscore(92.5f);
    stu.show();

    //在堆上创建对象
    Student *pstu = new Student;
    pstu -> setname("李华");
    pstu -> setage(16);
    pstu -> setscore(96);
    pstu -> show();

    return 0;
}