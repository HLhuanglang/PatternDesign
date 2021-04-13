/********************************************
** 说明：具体观察者B
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#include <iostream>

#include "observer_base.h"

class ObserverB : public ObserverBase {
 public:
  virtual void Display(const std::string& val) override {
    std::cout << val << std::endl;
  }
};