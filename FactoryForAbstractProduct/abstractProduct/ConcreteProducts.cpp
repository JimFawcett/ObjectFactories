///////////////////////////////////////////////////////////////////////////
// ConcreteProduct.cpp - implements Concrete Products                    //
//                                                                       //
// Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004             //
///////////////////////////////////////////////////////////////////////////

#include "ConcreteProduct.h"

///////////////////////////////////////////////////////////////
// Product A

id ConcreteProductA::ident()
{
  return 1;
}

std::string ConcreteProductA::OpA()
{
  return "ConcreteProductA";
}

size_t ConcreteProductA::OpB()
{
  return sizeof(*this);
}

std::string ConcreteProductA::OpC()
{
  return "Product1 using Interface1";
}

///////////////////////////////////////////////////////////////
// Product B

id ConcreteProductB::ident()
{
  return 2;
}

std::string ConcreteProductB::OpA()
{
  return "ConcreteProductB";
}

size_t ConcreteProductB::OpB()
{
  return sizeof(*this);
}

std::string ConcreteProductB::OpD()
{
  return "Product2 using Interface2";
}

