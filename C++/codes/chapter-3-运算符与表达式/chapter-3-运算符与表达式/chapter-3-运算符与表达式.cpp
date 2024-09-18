#include <iostream>
#include <bitset>

int main()
{
    int a = 10;
    int b = 20;

    //std::cout << "a+b:" << a + b << std::endl;
    //std::cout << "a-b:" << a - b << std::endl;
    //std::cout << "a*b:" << a * b << std::endl;
    //std::cout << "a/b:" << a/ b << std::endl;
    //std::cout << "a%b:" << a % b << std::endl;
    //// 注意一下自增运算符在前在后的区别
    //std::cout << "a++:" << a++ << std::endl;
    //std::cout << "++a:" << ++a << std::endl;
    //std::cout << "a--:" << a-- << std::endl;
    //std::cout << "--a:" << --a << std::endl;

    //std::cout << "a==b:" << (a==b) << std::endl;
    //std::cout << "a!=b:" << (a!=b) << std::endl;
    //std::cout << "a>b:" << (a>b) << std::endl;
    //std::cout << "a<b:" << (a<b) << std::endl;
    //std::cout << "a>=b:" << (a>=b) << std::endl;
    //std::cout << "a<=b:" << (a<=b) << std::endl;

    //std::cout << "德摩根定律:" << (!(a||b)==(!a&&!b)) << std::endl;

    std::cout << "&:" << (a&b) << std::endl;
    std::cout << "|:" << (a|b) << std::endl;
    std::cout << "^:" << (a^b) << std::endl;
    std::cout << "<<:" << (a<<2) << std::endl;
    std::cout << ">>:" << (a>>2) << std::endl;
    // 设计原码 反码 补码
    std::cout << "~:" << ~a << std::endl;
    std::cout << (std::bitset<10>)a << std::endl;
    std::cout << std::dec << a << std::endl;
    std::cout << (std::bitset<10>)~a << std::endl;
    std::cout << std::dec << ~a << std::endl;

    return 0;
}

