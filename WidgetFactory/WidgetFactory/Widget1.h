#ifndef WIDGET1_H
#define WIDGET1_H
///////////////////////////////////////////////////////////
// Widget1.h - Widget1 product declaration 

#include "IWidget.h"

class Widget1 : public IWidget
{
public:
  virtual void doWork();
  virtual ~Widget1();
};

#endif
