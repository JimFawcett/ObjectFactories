///////////////////////////////////////////////////////////
// Widget3.cpp - Widget3 product definition

#include "Widget3.h"
#include <iostream>

void Widget3::doWork()
{
  std::cout << "\n  Widget3 working";
}

Widget3::~Widget3()
{
  std::cout << "\n  Widget3 destroyed\n";
}
