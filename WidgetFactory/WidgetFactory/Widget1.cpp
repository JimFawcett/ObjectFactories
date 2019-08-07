///////////////////////////////////////////////////////////
// Widget1.cpp - Widget1 product definition

#include "Widget1.h"
#include <iostream>

void Widget1::doWork()
{
  std::cout << "\n  Widget1 working";
}

Widget1::~Widget1()
{
  std::cout << "\n  Widget1 destroyed\n";
}
