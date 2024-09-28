# chapter-1-cmake快速入门

### 1 cmake基本概念

#### 1 什么是cmake

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

‍
