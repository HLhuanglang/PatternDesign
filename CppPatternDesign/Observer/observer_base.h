/********************************************
** 说明：观察者基类
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#ifndef OBSERVER_BASE_H
#define OBSERVER_BASE_H

class ObserverBase {
 public:
  virtual void Display(const std::string& val) = 0;
};

#endif