#include <iostream>

using namespace std;

class Example {
public:
    Example(int num);
    ~Example();
    void display();
private:
    int m_num;
};

Example::Example(int num):m_num(num){
    cout << "Constructor called!" << endl;
}
Example::~Example() {
    cout << "Destructor called!" << endl;
}
void Example::display() {
    cout << "The number is: " << m_num << endl;
}

int main() {
    Example ex(10);
    ex.display();
    return 0;
}
/*
当main函数结束时，ex对象会被销毁，这时析构函数会被调用，打印出"Destructor called!"。

 */
