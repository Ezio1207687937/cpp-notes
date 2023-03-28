#include <iostream>
#include <cmath>
using namespace std;

class B; // 前置声明

class A {
    private:
        int x, y;
    public:
        A(int x, int y) : x(x), y(y) {}
        friend double distance(A a, B b); // 友元函数声明
};

class B {
    private:
        int x, y;
    public:
        B(int x, int y) : x(x), y(y) {}
        friend double distance(A a, B b); // 友元函数声明
};

// 友元函数实现
double distance(A a, B b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2)); // 计算距离公式
}

int main() {
    A a(0, 0);
    B b(3, 4);
    std::cout << "Distance: " << distance(a, b) << std::endl; // 输出计算出的距离
    return 0;
}
