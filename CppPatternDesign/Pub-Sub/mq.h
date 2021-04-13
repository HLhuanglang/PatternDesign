/********************************************
** 说明：消息队列
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#pragma once
#include <map>
#include <string>

#include "sub_base.h"

struct Msg {
  std::string topic_;
  std::string data_;
};

class MQ {
 public:
  static MQ& GetInstance() {
    static MQ insance;
    return insance;
  }

  void Publish(const std::string& topic) {}

  void Subscribe(const std::string& topic, SubBase* sub) {}

 private:
  std::map<Msg, SubBase*> msg_;
  MQ() {}
  MQ(const MQ&) = delete;
  MQ& operator=(const MQ&) = delete;
};
