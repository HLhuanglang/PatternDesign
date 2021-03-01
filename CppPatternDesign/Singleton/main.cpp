#include "Singleton.h"

int main() {
  std::cout << &Singleton::GetInstance() << std::endl;
  std::cout << &Singleton::GetInstance() << std::endl;
}