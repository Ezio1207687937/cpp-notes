#include <iostream>

// find_max 函数接受两个整数引用作为参数，并返回较大整数的引用
int& find_max(int& a, int& b) {
    // 如果 a 大于 b，返回 a 的引用，否则返回 b 的引用
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 5;   // 声明一个整数变量 x，并赋值为 5
    int y = 10;  // 声明一个整数变量 y，并赋值为 10

    // 调用 find_max 函数，将 x 和 y 作为参数传递
    // 函数返回一个引用，指向较大整数的引用
    int& max_ref = find_max(x, y);

    // 输出找到的最大值
    std::cout << "Max value: " << max_ref << std::endl; // 输出：Max value: 10

    // 通过返回的引用 max_ref 修改较大的值
    max_ref = 42;

    // 输出 x 和 y 的新值
    std::cout << "x = " << x << ", y = " << y << std::endl; // 输出：x = 5, y = 42

    return 0;
}
