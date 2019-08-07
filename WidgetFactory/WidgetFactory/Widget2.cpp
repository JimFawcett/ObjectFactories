///////////////////////////////////////////////////////////
// Widget2.cpp - Widget2 product definition

#include "Widget2.h"
#include <iostream>

void Widget2::doWork()
{
  std::cout << "\n  Widget2 working";
}

Widget2::~Widget2()
{
  std::cout << "\n  Widget2 destroyed\n";
}
