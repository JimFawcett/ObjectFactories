///////////////////////////////////////////////////////////
// WidgetFactory.h - Widget factory declaration

#include "IWidget.h"
#include "Widget1.h"
#include "Widget2.h"
#include "Widget3.h"
#include "WidgetFactory.h"

IWidget* WidgetFactory::CreateWidget(int WidgetIndex)
{
  switch(WidgetIndex)
  {
    case 1: return new Widget1();
    case 2: return new Widget2();
    case 3: return new Widget3();
    default:
      return 0;
  }
}


