#include <iostream>
#include <stdio.h> // 引入stdio.h头文件
using namespace std;

// 定义结构体Point，包含x和y两个成员变量
struct Point {
    int x;
    int y;
};

// 定义结构体Student，包含id和name两个成员变量以及printInfo函数
struct Student {
    int id;
    string name;
    void printInfo() { // 成员函数printInfo，输出学生信息
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};



int main() {
    Point p = {3, 4}; // 创建一个Point结构体变量p，并初始化x为3，y为4
    cout << "x = " << p.x << ", y = " << p.y << endl; // 输出结构体成员变量x和y

    Student s = {1001, "Tom"}; // 创建一个Student结构体变量s，并初始化id为1001，name为"Tom"
    s.printInfo(); // 调用结构体成员函数printInfo输出学生信息

    return 0;
}
