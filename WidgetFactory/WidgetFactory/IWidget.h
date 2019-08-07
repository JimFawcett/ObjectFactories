#ifndef IWIDGET_H
#define IWIDGET_H
///////////////////////////////////////////////////////////
// IWidget.h - Widget product interface

struct IWidget
{
  virtual void doWork()=0;
  virtual ~IWidget() {}
};
#endif
