#ifndef WIDGET3_H
#define WIDGET3_H
///////////////////////////////////////////////////////////
// Widget3.h - Widget3 product declaration 

#include "IWidget.h"

class Widget3 : public IWidget
{
public:
  virtual void doWork();
  virtual ~Widget3();
};

#endif
