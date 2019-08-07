///////////////////////////////////////////////////////////
// Client.cpp - Widget user

#include "IWidget.h"
#include "WidgetFactory.h"
#include <iostream>

int main()
{
  std::cout << "\n  Demonstrating Widget Factory";
  std::cout << "\n ==============================\n";

  IWidget* pWidget = WidgetFactory::CreateWidget(1);
  if(pWidget)
  {
    pWidget->doWork();
    delete pWidget;
  }
  else
    std::cout << "\n  can't create widget1";

  pWidget = WidgetFactory::CreateWidget(2);
  if(pWidget)
  {
    pWidget->doWork();
    delete pWidget;
  }
  else
    std::cout << "\n  can't create widget2";

  pWidget = WidgetFactory::CreateWidget(3);
  if(pWidget)
  {
    pWidget->doWork();
    delete pWidget;
  }
  else
    std::cout << "\n  can't create widget3";

  pWidget = WidgetFactory::CreateWidget(4);
  if(pWidget)
  {
    pWidget->doWork();
    delete pWidget;
  }
  else
    std::cout << "\n  can't create widget4";

  std::cout << "\n\n";
}