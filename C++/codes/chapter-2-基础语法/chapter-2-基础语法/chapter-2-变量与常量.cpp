#include <iostream>

#define PI 3.14

int main() {
	// 定义变量
	int a;
	// 初始化
	a = 10;
	// 定义变量并初始化
	int b = 20;

	const float pi = 3.14;

	std::cout << "a:" << a << std::endl;
	std::cout << "b:" << b << std::endl;
	std::cout << "PI:" << PI << std::endl;
	std::cout << "pi:" << pi << std::endl;

	return 0;

}