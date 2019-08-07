///////////////////////////////////////////////////////////////////////////
// Client.cpp - User of Concrete Products through an Abstract Interface  //
// ver 1.1                                                               //
// Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004             //
///////////////////////////////////////////////////////////////////////////
/*
   ver 1.1
   - added client deletion of pointers handed out by factory
*/
#include "AbstractProduct.h"
#include "Factory.h"
#include <iostream>

///////////////////////////////////////////////////////////////
// Limitations:
// - Need one factory for each inheritance hierarcy.
// - Clients have to use the same language to talk with every
//   object they use from a given factory.
// - With the help of RTTI clients can actually do more than
//   that.
// - They can use mixin interfaces by querying for additional
//   interfaces

void UseInterfaces(AbstractProduct *pAP);

int main()
{
  std::cout << "\n  Demonstrating use of Factories and Interfaces "
            << "\n ===============================================\n";

  Factory f;
  AbstractProduct* pPr;

  /////////////////////////////////////////////////////////////
  // Create and Use Product 1
  
  pPr = f.CreateProduct(1);
  if(pPr)
  {
    std::cout << "\n  1st product created is " << pPr->OpA()
              << ".  Its size is " << pPr->OpB() << " bytes.";

  UseInterfaces(pPr);
  delete pPr;
  }
  std::cout << "\n\n";

  /////////////////////////////////////////////////////////////
  // Create and Use Product 2
  
  pPr = f.CreateProduct(2);
  if(pPr)
  {
    std::cout << "\n  2nd product created is " << pPr->OpA()
              << ".  Its size is " << pPr->OpB() << " bytes.";

  UseInterfaces(pPr);
  delete pPr;
  }
  std::cout << "\n\n";
  return 0;
}

//
///////////////////////////////////////////////////////////////
// Query for Interfaces 1 and 2.  Use if available

void UseInterfaces(AbstractProduct *pAP)
{
  Interface1* pI1 = dynamic_cast<Interface1*>(pAP);
  if(pI1)
    std::cout << "\n  " << pI1->OpC();
  else
    std::cout << "\n  can't use Interface1";

  Interface2* pI2 = dynamic_cast<Interface2*>(pAP);
  if(pI2)
    std::cout << "\n  " << pI2->OpD();
  else
    std::cout << "\n  can't use Interface2";
}
