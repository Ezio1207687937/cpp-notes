#include <iostream>
#include <string>

using namespace std;

int main() {
    // 创建字符串 str
    string str = "Hello, world!";
    // 输出字符串和字符串长度
    cout << "str: " << str << endl;
    cout << "str.size(): " << str.size() << endl;
    // 判断字符串是否为空
    cout << "str.empty(): " << str.empty() << endl;

    // 在字符串 str 后面添加字符串 " How are you?"
    str.append(" How are you?");
    cout << "str: " << str << endl;

    // 把字符串 str 中从位置 7 开始的 5 个字符替换成字符串 "friend"
    str.replace(7, 5, "friend");
    cout << "str: " << str << endl;

    // 获取字符串 str 中从位置 7 开始的 6 个字符作为子字符串 subStr
    string subStr = str.substr(7, 6);
    cout << "subStr: " << subStr << endl;

    // 清空字符串 str，输出字符串和是否为空
    str.clear();
    cout << "str: " << str << endl;
    cout << "str.empty(): " << str.empty() << endl;

    return 0;
}
