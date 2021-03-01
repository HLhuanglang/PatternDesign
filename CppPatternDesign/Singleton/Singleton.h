#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

class Singleton {
 public:
  static Singleton& GetInstance() {
    // 静态成员变量不包含在对象实例中，具有进程级的生命周期。（静态成员存放于全局区，程序运行前就已经存在）
    static Singleton instance;
    return instance;
  }

  void Hello() { std::cout << "hello,world!" << std::endl; }

 private:
  Singleton() {}
  Singleton(const Singleton&) = delete;
  Singleton& operator=(const Singleton&) = delete;
};

#endif  // !SINGLETON_H
