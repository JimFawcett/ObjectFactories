#ifndef CREATABLE_H
#define CREATABLE_H
///////////////////////////////////////////////////////////////////////
//  creatable.h  -  declares creatable interface and object factory  //
//  ver 2.0                                                          //
//  Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004        //
///////////////////////////////////////////////////////////////////////
/*
    Module Operations:
    ==================
    The creator class defines a creation policy for objects that can
    be created with an instance of class objFactory.  The creator class
    is template-based where its template parameters defines the class of
    the object to be created and its base.  Creatable classes inherit 
    publically from the creator class to declare and implement two functions:
      - a create function that returns a new instance of the class
        via a pointer whose type is the class or a base type.
      - a function called classID() that returns a string holding the
        class name.

*/
/////////////////////////////////////////////////////////////////////////
//  build process                                                      //
/////////////////////////////////////////////////////////////////////////
//  required files:                                                    //
//    creatable.h, implementation.h, implementation.cpp                //
//                                                                     //
//  compiler command:                                                  //
//    cl /GX /GR implementation.cpp                                    //
//                                                                     //
//  note: /GX enables exception handling.                              //
//        /GR enables RTTI which we need in order to use dynamic_cast. //
//        In the IDE you can enable RTTI on the Project Settings       //
//        menu.  Select C/C++ tab and select C++ language from the     //
//        category combo box.  Check the box for enabling RTTI.        //
//                                                                     //
/////////////////////////////////////////////////////////////////////////
//

#include "factory.h"

/////////////////////////////////////////////////////////////////////////
//  creator class declaration
//    - provides a creational policy

template <class B, class D = B>
class creator
{
  public:
    virtual ~creator() { }
    static  B* create();    // a value in objFactory map
    static classID id();    // a key in objFactory map
};

//----< returns an object of type D via a type B pointer >---------------
//
//  will fail to compile unless D is B or derived from B
//
template <class B, class D>
B* creator<B,D>::create() { return new D; }

//----< return class name >----------------------------------------------

template <class B, class D>
classID creator<B,D>::id()
{  
  std::string temp = typeid(D).name();  // returns "class name"
  return temp; 
}

#endif

