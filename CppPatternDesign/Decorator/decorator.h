/********************************************
** 说明：装饰类基类
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#pragma once
#include "componet.h"

class Decorator {
 public:
  Decorator(Componet* comp) : comp_(comp) {}
  virtual ~Decorator() = default;
  virtual void Excute(HttpReq& req, HttpRes& res) = 0;

 protected:
  Componet* comp_;
};
