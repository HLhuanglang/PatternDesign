#include "componetA.h"
#include "componetB.h"
#include "decoratorA.h"

int main() {
  //假装是http请求
  HttpReq _req;  //请求数据
  _req.sign_ = "Holo_wo";
  _req.data_ = "data from browser";
  HttpRes _res;  //响应数据

  //装饰者A,主要增加一层校验签名的功能
  //然后把数据丢给正在的处理者A

  //////////////////////////////////////////////////////////////////////////
  //这里可以封装成一个简单的工厂类
  DecoratorA* _de = nullptr;
  int _type = 0;
  switch (_type) {
    case 0: {
      _de = new DecoratorA(new ComponetA());
      break;
    }
    case 1: {
      _de = new DecoratorA(new ComponetB());
      break;
    }
    default:
      break;
  }
  //////////////////////////////////////////////////////////////////////////

  DecoratorA* _de = new DecoratorA(new ComponetA());
  _de->Excute(_req, _res);
}