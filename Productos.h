#include <string>

#ifndef PRODUCTOS_H
#define PRODUCTOS_H

using namespace std;

class Productos{
  public:
    Productos();
    virtual string getCodigo()=0;
};

#endif
