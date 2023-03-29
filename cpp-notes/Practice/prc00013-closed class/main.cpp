// 引入所需的头文件
#include <iostream>
#include <string>

// 定义一个 Engine 类
class Engine {
public:
    // 定义 Engine 类的构造函数，接受一个 std::string 类型的参数 engine_type
    // 使用成员初始化列表将 engine_type 赋值给成员变量 type
    Engine(std::string engine_type) : type(engine_type) {}

    // 定义一个公共成员函数 start，用于启动引擎
    void start() {
        // 输出引擎启动信息，包括引擎类型
        std::cout << "Starting " << type << " engine!" << std::endl;
    }

private:
    // 声明一个私有成员变量 type，类型为 std::string
    std::string type;
};

// 定义一个 Car 类
class Car {
public:
    // 定义 Car 类的构造函数，接受两个 std::string 类型的参数 car_type 和 engine_type
    // 使用成员初始化列表分别将 car_type 赋值给成员变量 type，将 engine_type 传递给成员对象 engine 的构造函数
    Car(std::string car_type, std::string engine_type) : type(car_type), engine(engine_type) {}

    // 定义一个公共成员函数 start，用于启动汽车
    void start() {
        // 输出汽车启动信息，包括汽车类型
        std::cout << "Starting " << type << " car!" << std::endl;
        // 调用成员对象 engine 的 start 函数，输出引擎启动信息
        engine.start();
    }

private:
    // 声明一个私有成员变量 type，类型为 std::string
    std::string type;
    // 声明一个私有成员对象 engine，类型为 Engine 类
    Engine engine;
};

// 主函数
int main() {
    // 创建一个 Car 类的对象 my_car，并使用 "Sedan" 和 "Gasoline" 分别初始化成员变量 type 和成员对象 engine
    Car my_car("Sedan", "Gasoline");
    // 调用 my_car 对象的 start 函数，输出 "Starting Sedan car!" 和 "Starting Gasoline engine!"
    my_car.start();

    // 返回 0，表示程序正常结束
    return 0;
}

/*
 包含成员对象的类叫封闭类。任何能够生成封闭类对象的语句，都要说明对象中包含的成员对象是如何初始化的。
 封闭类对象生成时，先执行成员对象的构造函数、再执行自身的构造函数。封闭类对象消亡时，先执行自身的析构函数，再执行成员对象的析构函数。
 */
