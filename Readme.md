﻿在所有的设计模式中，部分项目对于类的定义是不规范的：
1.类的定义与实现应该分开放在头文件和cpp文件中，这里为了将程序结构更加清晰的展现出来，才将声明和实现都放在同一个地方
2.基类的析构函数应该加上virsual声明,特别是接口类
3.接口类可以没有默认构造函数
4.抽象类型不可以作为参数（形参、函数返回值），但是抽象类型指针可以作为参数