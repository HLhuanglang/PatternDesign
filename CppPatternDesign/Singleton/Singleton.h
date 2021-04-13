#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <memory>
#include <mutex>

template <typename T>
class Singleton {
 public:
  template <typename... ArgTypes>
  static T* GetInstance(ArgTypes&&... args) {
    if (nullptr == instance_) {
      std::call_once(once_f_, [&]() { Singleton::instance_.reset(new T()); });
    }
    return instance_.get();
  }

  static T* GetInstance() {
    if (nullptr == instance_) {
      std::call_once(once_f_, [&]() { Singleton::instance_.reset(new T()); });
    }
    return instance_.get();
  }

 private:
  Singleton();
  Singleton(const Singleton& rhs) = delete;
  Singleton& operator=(const Singleton& rhs) = delete;

 private:
  static std::unique_ptr<T> instance_;
  static std::once_flag once_f_;
};

template <typename T>
std::unique_ptr<T> Singleton<T>::instance_ = nullptr;

template <typename T>
std::once_flag Singleton<T>::once_f_;

#endif  // !SINGLETON_H
