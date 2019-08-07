#ifndef WIDGET2_H
#define WIDGET2_H
///////////////////////////////////////////////////////////
// Widget2.h - Widget2 product declaration 

#include "IWidget.h"

class Widget2 : public IWidget
{
public:
  virtual void doWork();
  virtual ~Widget2();
};

#endif
