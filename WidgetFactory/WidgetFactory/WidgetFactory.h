#ifndef WIDGETFACTORY_H
#define WIDGETFACTORY_H
///////////////////////////////////////////////////////////
// WidgetFactory.h - Widget factory declaration

struct WidgetFactory
{
  static IWidget* CreateWidget(int WidgetIndex);
};

#endif
