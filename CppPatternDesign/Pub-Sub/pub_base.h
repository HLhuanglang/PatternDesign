/********************************************
** 说明：发布者基类
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#pragma once
#include "mq.h"

class PubBase {
 public:
  virtual void Publish(const std::string& topic, const std::string& data) = 0;

 private:
};
