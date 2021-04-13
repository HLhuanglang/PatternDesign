/********************************************
** 说明：被观察的对象基类
** 作者：HLhuanglang
** 联系：1282424466@qq.com
********************************************/
#ifndef SUBJECT_BASE_H
#define SUBJECT_BASE_H
#include <list>

#include "observer_base.h"
class SubjectBase {
 public:
  SubjectBase() {}
  virtual ~SubjectBase() {}

 public:
  virtual void Notify() {
    for (auto& iter : this->observer_) {
      iter->Display("原始信息");
    }
  }
  virtual void Attach(ObserverBase* ob) { this->observer_.push_back(ob); }
  virtual void Detach(ObserverBase* ob) { this->observer_.remove(ob); }

 public:
  std::list<ObserverBase*> observer_;
};
#endif