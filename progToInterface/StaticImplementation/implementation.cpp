/////////////////////////////////////////////////////////////////////////
//  implementation.cpp - provides implementation for                   //
//                       implementation layer classes                  //
//                       and for static members of interface           //
//                                                                     //
//  Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004          //
/////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <iostream>
#include "implementation.h"

//----< virtual function displays class identity >-------------

void Example1::announcer()
{
  std::cout << "\n  object of " << id();
}

//----< virtual function displays class identity >-------------

void Example2::announcer()
{
  std::cout << "\n  object of " << id();
}

//----< register objects of this module for client >-----------

void ExampleInterface::registerObjects(objFactory<ExampleInterface> &factory)
{
  factory.reg(Example1::id(),Example1::create);
  factory.reg(Example2::id(),Example2::create);
}

//----< let client identify the object needed >----------------

std::string ExampleInterface::type(int n)
{
  switch(n) {
    case 1 : return typeid(Example1).name();
    case 2 : return typeid(Example2).name();
    default :
      throw "unknown class in ExampleInterface::type()";
  }
  return "unknown";
}

