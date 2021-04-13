#pragma once
#include <iostream>
#include <string>

#include "sbuject_base.h"

class SubjectHello : public SubjectBase {
 public:
  explicit SubjectHello(const std::string& msg) : msg_(msg) {}

 public:
  virtual void Notify() override {
    for (auto& iter : this->observer_) {
      iter->Display(msg_);
    }
  }

 private:
  std::string msg_;
};