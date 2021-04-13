#pragma once
#include <string>

class HttpReq {
 public:
  std::string sign_;
  std::string data_;
};

class HttpRes {
 public:
  std::string sign_;
  std::string data_;
};