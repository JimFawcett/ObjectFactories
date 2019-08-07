///////////////////////////////////////////////////////////////////////////
// Factory.cpp - Creator of Concrete Products                            //
//                                                                       //
// Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004             //
///////////////////////////////////////////////////////////////////////////

#include "AbstractProduct.h"
#include "concreteProduct.h"
#include "Factory.h"

///////////////////////////////////////////////////////////////////////
// Notes:
//
// If clients consist of a lot of code (millions of lines) that use these
// products (think of new parts of an evolving implementation) we don't
// want to rebuild each client every time a product implementation changes.
//
// - Adding new products requires this Factory to be recompiled
//   Clients need only relink as no text changes in files they include
// - New clients can use the new products
// - Modifying a Product implementation will only cause Clients to
//   relink.  Factory must recompile (not a problem since they are small).
// - If we build the products as Dynamic Link Libraries, the clients won't
//   even have to relink.

AbstractProduct* Factory::CreateProduct(id productID)
{
  switch(productID)
  {
  case 1  : return new ConcreteProductA;
  case 2  : return new ConcreteProductB;
    
    // can add more products here

  default : return 0;
  }
}
