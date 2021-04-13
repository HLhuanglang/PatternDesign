/********************************************
** 说明：被装饰的对象，组件基类
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#pragma once
#include <string>

#include "http.h"

class Componet {
 public:
  virtual void Excute(HttpReq& req, HttpRes& res) = 0;
};