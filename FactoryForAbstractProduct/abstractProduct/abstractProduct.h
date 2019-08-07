#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H
///////////////////////////////////////////////////////////////////////////
// AbstractProduct.h - Defines Language to use with Concrete Products    //
// ver 1.1                                                               //
// Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004             //
///////////////////////////////////////////////////////////////////////////
/*
   ver 1.1
   - added virtual qualifier to destructors declared in interface1 and 2.
*/
#include <string>
typedef unsigned int id;

class AbstractProduct
{
public:
  virtual ~AbstractProduct() {}
  virtual id ident()=0;
  virtual std::string OpA()=0;
  virtual size_t OpB()=0;
};

struct Interface1
{
  virtual ~Interface1() {}
  virtual std::string OpC() { return ""; }
};

struct Interface2
{
  virtual ~Interface2() {}
  virtual std::string OpD() { return ""; }
};


#endif
