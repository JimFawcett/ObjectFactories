/////////////////////////////////////////////////////////////////////////
//  client.cpp - uses implementation static library                    //
//               Does not require rebuilding client if you modify      //
//               implementation, since client binds to interface and   //
//               uses an object factory.                               //
//                                                                     //
//  Jim Fawcett, CSE687 - Object Oriented Design, Spring 2006          //
/////////////////////////////////////////////////////////////////////////
//  build process                                                      //
/////////////////////////////////////////////////////////////////////////
//  required files:                                                    //
//    ExampleInterface.h, factory.h client.cpp implementation.lib      //
//                                                                     //
//  build commands:                                                    //
//    cl /EHsc client.cpp implementation.lib                           //
//                                                                     //
//  note: /EHsc enables exception handling.                            //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "../StaticImplementation/factory.h"           // object factory
#include "../StaticImplementation/ExampleInterface.h"  // interface

/////////////////////////////////////////////////////////////////////
// Note that client represents a policy layer that does not include
// any implementation layer headers.  It includes just the factory
// and interface headers, which contain no implementation details.
// There is no reference to derived types in either of these headers.
//
void main()
{
  std::cout << "\n  Demonstate Programming to Interfaces "
            << "\n ======================================\n";

  //////////////////////////////////////////////////////////////////
  // Create an implementation factory and use its interface to
  // register its objects with the factory.

  objFactory<ExampleInterface> objFactory;
  ExampleInterface::registerObjects(objFactory);

  /////////////////////////////////////////////////////////////////
  // Policy needs to know how to access the ids of the implementation
  // classes it uses, but does not need to bind to the class names.

  ExampleInterface* pExample1 = objFactory.makeObj(ExampleInterface::type(1));
  if(pExample1)
  {
    pExample1->announcer();  // polymorphic call
    delete pExample1;
  }

  ExampleInterface *pExample2 = objFactory.makeObj(ExampleInterface::type(2));
  if(pExample2)
  {
    pExample2->announcer();  // polymorphic call
    delete pExample2;
  }

  std::cout << std::endl;
  std::cout << "\n  The objFactory delivers, via ExampleInterface pointers,"
            << "\n  objects that derive from ExampleInterface.  That"
            << "\n  interface provides a protocol for clients of all"
            << "\n  derived class objects, like Example1 and Example2,"
            << "\n  to use, without needing to bind to the concrete" 
            << "\n  derived class of the objectthey are using.";
  std::cout << "\n\n";
}
