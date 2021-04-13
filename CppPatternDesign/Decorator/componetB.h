#pragma once
#include <iostream>

#include "componet.h"
class ComponetB : public Componet {
 public:
  virtual void Excute(HttpReq& req, HttpRes& res) override {
    std::cout << req.data_ << std::endl;
    // do something
  }
};