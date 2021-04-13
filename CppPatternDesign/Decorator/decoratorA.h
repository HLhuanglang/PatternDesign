#pragma once

#include <iostream>

#include "decorator.h"

class DecoratorA : public Decorator {
 public:
  DecoratorA(Componet* comp) : Decorator(comp) {}

 public:
  virtual void Excute(HttpReq& req, HttpRes& res) override {
    if (this->Sign(req.sign_)) {
      //这个就是装饰者的新增的职责
      std::cout << "check sign succeed!" << std::endl;
    } else {
      std::cout << "check sign failed!" << std::endl;
      return;
    }
    this->comp_->Excute(req, res);
  }

 private:
  bool Sign(const std::string& val) {
    if ("Holo_wo" == val) {
      return true;
    } else {
      return false;
    }
  }
};