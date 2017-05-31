#ifndef __SINGLETON_H__
#define __SINGLETON_H__

//单例模式主要目标：
//1.确定一个类只有唯一一个实例
//2.提供该唯一实例的全局访问点

//单例类不适合当作父类，因为派生的时候不方便：
//1.构造函数私有
//2.所有的派生类都会调用同一个父类对象

//没有必要将单例类作为父类，因为将一个类改错单例类是很方便的

//--------------java中实现单例模式注意事项--------------
//1.在java1.5版本之前的版本中，双重检查加锁会失效
//2.如果有多个类加载器，可能产生多个实例
//3.在JVM1.2以及之前的版本中，要建立单间注册表防止垃圾收集器将单例回收
//--------------java中实现单例模式注意事项--------------

class Singleton
{
private:
	static Singleton * uniqueInstance;
	Singleton(){};							//将默认构造方法隐藏起来
public:
	~Singleton(){};

	//唯一可以获取实例的方法
	//设置为静态的，可以在任何包含了该头文件的地方通过类来调用
	static Singleton * getIntance();		
};



#endif