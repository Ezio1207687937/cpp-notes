#include <iostream>
#include "cstdlib"
using namespace std;

class Student{
public:
    Student(char *name, int age, float score);
    void show();
private:
    static int m_total;  //静态成员变量
    /*
     静态成员变量是指被类的所有对象共享的成员变量。这意味着，静态成员变量是独立于任何对象的，它们存储在类本身的存储空间中，而不是在对象的存储空间中。
     静态成员变量的声明和定义需要使用 static 关键字，并且必须在类的定义外部进行。一般情况下，在类的声明中只声明静态成员变量，而不进行定义
     */
private:
    char *m_name;
    int m_age;
    float m_score;
};

//初始化静态成员变量
int Student::m_total = 0;

Student::Student(char *name, int age, float score): m_name(name), m_age(age), m_score(score){
    m_total++;  //操作静态成员变量
}
void Student::show(){
    cout<<m_name<<"的年龄是"<<m_age<<"，成绩是"<<m_score<<"（当前共有"<<m_total<<"名学生）"<<endl;
}

int main(){
    system("chcp 65001");
    //创建匿名对象
    (new Student("小明", 15, 90)) -> show();
    (new Student("李磊", 16, 80)) -> show();
    (new Student("张华", 16, 99)) -> show();
    (new Student("王康", 14, 60)) -> show();

    return 0;
}

/*
 static 成员变量和普通 static 变量一样，都在内存分区中的全局数据区分配内存，到程序结束时才释放。这就意味着，static 成员变量不随对象的创建而分配内存，也不随对象的销毁而释放内存。而普通成员变量在对象创建时分配内存，在对象销毁时释放内存。

 初始化时可以赋初值，也可以不赋值。如果不赋值，那么会被默认初始化为 0。全局数据区的变量都有默认的初始值 0，而动态数据区（堆区、栈区）变量的默认值是不确定的，一般认为是垃圾值。

  静态成员变量既可以通过对象名访问，也可以通过类名访问，但要遵循 private、protected 和 public 关键字的访问权限限制。当通过对象名访问时，对于不同的对象，访问的是同一份内存
 */