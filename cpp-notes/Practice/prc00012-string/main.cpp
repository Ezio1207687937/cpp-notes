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

    // 5个s字符组成的字符串
    string s1(5,'s');
    cout << s1 <<endl;

    return 0;
}

/*
 补充：
 字符串拼接方法：1、+运算符；2、str1.append(str2)

 字符串查找：str.find(sub),返回sub第一次出现在字符串中的起始下标

 find()、rfind()与find_first_of() 的区别：
find() 函数从字符串的起始位置开始搜索，向右（正向）查找指定的子字符串。当找到匹配的子字符串时，find() 函数返回第一个匹配子字符串的起始位置。如果没有找到匹配项，则返回 std::string::npos。
rfind() 函数从字符串的末尾开始搜索，向左（逆向）查找指定的子字符串。当找到匹配的子字符串时，rfind() 函数返回最后一个匹配子字符串的起始位置。如果没有找到匹配项，则返回 std::string::npos。
  find_first_of() 查找给定字符集合中任意一个字符首次出现的位置，比如
            std::string str = "C++ programming is fun!";
            std::string chars_to_find = "aeiou";
            我们在字符串 str 中查找英语元音字符（"a", "e", "i", "o", "u"）中任意一个字符首次出现的位置。find_first_of() 找到了首个元音字符 "o"，位于位置 7。
 */
