#ifndef FACTORY_H
#define FACTORY_H
///////////////////////////////////////////////////////////////////////////
// Factory.h - Creator of Concrete Products                              //
//                                                                       //
// Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004             //
///////////////////////////////////////////////////////////////////////////

#include "AbstractProduct.h"

///////////////////////////////////////////////////////////////
// Notes:
// - The text of this file does not change when products are
//   modified or new products are added.
// - Therefore, existing clients will not need to recompile when
//   that happens.  They will need to relink unless products are
//   implemented as Dynamic Link Libraries.
// - This factory can create any ConcreteProduct derived from the
//   AbstractProduct interface.

class Factory
{
public:
  AbstractProduct* CreateProduct(id productID);
};
#endif
