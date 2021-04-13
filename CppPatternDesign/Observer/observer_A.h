/********************************************
** 说明：具体观察者A
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#pragma once
#include <iostream>

#include "observer_base.h"

class ObserverA : public ObserverBase {
 public:
  virtual void Display(const std::string& val) override {
    std::cout << val << std::endl;
  }
};
