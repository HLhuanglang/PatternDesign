#include "observer_A.h"
#include "observer_B.h"
#include "subject_hello.h"

int main() {
  ObserverA _ob_a;
  ObserverB _ob_b;
  SubjectHello _sub_hello("hello,world");
  _sub_hello.Attach(&_ob_a);
  _sub_hello.Attach(&_ob_b);
  _sub_hello.Notify();
}