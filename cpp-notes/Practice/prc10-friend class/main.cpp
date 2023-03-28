#include <iostream>
using namespace std;

// 声明一个名为 Box 的类
class Box {
private:
    double length;
    double width;
    double height;

public:
    // 定义 Box 类的构造函数
    Box(double l = 0.0, double w = 0.0, double h = 0.0) {
        length = l;
        width = w;
        height = h;
    }

    // 定义 Box 类的成员函数 getVolume()
    double getVolume() {
        return length * width * height;
    }

    // 将 BoxHelper 类声明为 Box 类的友元类
    friend class BoxHelper;
    // 将 BoxPrinter 类声明为 Box 类的友元类
    friend class BoxPrinter;
};

// 定义名为 BoxHelper 的类
class BoxHelper {
public:
    // 定义 BoxHelper 类的成员函数 printVolume()
    void printVolume(Box box) {
        cout << "Box volume = " << box.length * box.width * box.height << endl;
    }
};

// 定义名为 BoxPrinter 的类
class BoxPrinter {
public:
    // 定义 BoxPrinter 类的成员函数 printBox()
    void printBox(Box box) {
        cout << "Box length = " << box.length << ", width = " << box.width << ", height = " << box.height << endl;
    }
};

// 主函数
int main() {
    // 创建一个 Box 对象，长度为 3，宽度为 4，高度为 5
    Box myBox(3.0, 4.0, 5.0);
    // 创建一个 BoxHelper 对象
    BoxHelper helper;
    // 创建一个 BoxPrinter 对象
    BoxPrinter printer;

    // 使用 BoxHelper 类的成员函数 printVolume() 输出 Box 对象的体积
    helper.printVolume(myBox);
    //
    printer.printBox(myBox);

    return 0;
}
