# chapter-1-cmake快速入门

### 1 cmake基本概念

##### 1 什么是cmake

	cmake适用于**构建**、**测试**和**软件打包**的开源跨平台工具

##### 2 为什么选用camke

* 避免硬编码路径
* 持续集成：

  * 每次继承都通过自动化的制造（提交、发布、自动化）来验证，准确的发现集成错误
  * 完成更新，集成到主干，快速发现、定位错误
  * 不同的更新主干，不经常集成，会导致集成成本变大
  * 自动化测试
* 支持不同操作系统（交叉编译）
* 支持多个编译器
* 单元测试

**cnake特性：**

* 自动搜索需要的程序、库文件和头文件
* 独立的构建目录，可以安全清理
* 创建复杂的自定义命令
* 配置时选择可选组件的能力
* 在静态库和共享构件之间轻松切换
* 大多数平台自动生成文件依赖项并支持并行构建

##### 3 cmake工作原理

​![image](assets/image-20240928185808-iuinzpp.png)​

### 2 cmake安装

##### 1 **Linux**

* 直接安装

```undefined
apt install cmake
```

* 源码编译安装

```undefined
apt install g++
apt install make
apt install ninja-build
apt install unzip
apt install libssl-dev

cd camke
./configure
make -j32
make install

vi~/.bash_profile
export PATH=/usr/local/share/cmake$PATH

cmake --version
```

##### 2 Windows

* 直接安装

  * 下载：https://github.com/Kitware/CMake/releases/download/v3.30.4/cmake-3.30.4.zip
  * 配置环境变量
* 编译安装

  * 下载

    https://github.com/Kitware/CMake/releases/download/v3.31.0-rc1/cmake-3.31.0-rc1.zip
  * 编译源码安装

    ```undefined
    # -S cmakelists文件位置 -B build位置
    cmake -S . -B build
    # Windows下默认Debug形式编译
    cmake --build build
    cmake --build build --config Release
    # Windows下需要切换到管理员
    cmake --install build
    ```

* 配置环境变量

### 3 cmake实例

```c++
#include <iostream>

using namespace std;

int main() {
	cout << "first cmake" << endl;
	// 避免执行exe cmd 窗口闪退
	system("pause");
	return 0;
}
```

```cmake
# 指定cnake最低版本
cmake_minimum_required(VERSION 3.20)

# 构建项目名称
project(first_cmake)

# 构建可执行程序
add_executable(first_cmake first_cmake.cpp)
```

##### 1 Windows

```cmake
cmake -S . -B build
```

* visual studio

  * 打开first\_cmake.vcxproj
  * 点击生成

    ​![image](assets/image-20241011223135-msodhwq.png)​
  * 设置启动项目

    ​![image](assets/image-20241011223205-0xrqs24.png)​
* cmake

  * cmake --build build
  * 执行exe文件
* nmake

  ​![image](assets/image-20241011224541-qnje78m.png)​

  ```cmake
  # -G 指定vs版本
  cmake -S . -B n -G "NMake Makefiles"
  cmake --build n
  ```

##### 2 Linux

```cmake
cmake -S . -B build
cmake --build build
```

### 4 动态库与静态库

##### 1 静态库

* 文件名

  * Windows .lib

    * Debug：字符源码
    * Release：二进制源码
  * Linux lib.a
* 特点：

  * 需要像动态库要明确加载，如果确实则会导致问题
  * 编译时间较慢
  * 依赖库问题
* 注意：当编译静态库时，例如A部分调用了静态线程库，而A调用的B部分调用了动态的线程库，这时回导致编译不过，而动态库则不会存在这个问题（静态库将所有代码复制进来，而动态库只需要接口地址）

##### 2 动态库

* 文件名

  * Windows .dll
  * Linux lib.so
* ‍
