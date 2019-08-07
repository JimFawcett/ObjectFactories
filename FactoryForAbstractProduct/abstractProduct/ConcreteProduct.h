#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H
///////////////////////////////////////////////////////////////////////////
// ConcreteProduct.h - declares Concrete Products                        //
//                                                                       //
// Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004             //
///////////////////////////////////////////////////////////////////////////

#include "AbstractProduct.h"
#include <string>

///////////////////////////////////////////////////////////////
// Product A

class ConcreteProductA : public AbstractProduct, public Interface1
{
public:
  id ident();
  std::string OpA();
  size_t OpB();
  std::string OpC();
private:
  char buf[256];
};

///////////////////////////////////////////////////////////////
// Product B

class ConcreteProductB : public AbstractProduct, public Interface2
{
public:
  id ident();
  std::string OpA();
  size_t OpB();
  std::string OpD();
private:
  char buf[1024];
};

#endif
