#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H
/////////////////////////////////////////////////////////////////////////
//  implementation.h - provides class declarations for                 //
//                     implementation classes                          //
//                                                                     //
//  Jim Fawcett, CSE687 - Object Oriented Design, Spring 2006          //
/////////////////////////////////////////////////////////////////////////
//  build process                                                      //
/////////////////////////////////////////////////////////////////////////
//  required files:                                                    //
//    creatable.h, implementation.h, implementation.cpp                //
//                                                                     //
//  build commands:                                                    //
//    cl /EHsc /GR /c implementation.cpp                               //
//    lib implementation.obj                                           //
//                                                                     //
//  note: /EHsc enables exception handling.                            //
//        /GR enables RTTI which we need in order to use dynamic_cast. //
//        In the IDE you can enable RTTI on the Project Settings       //
//        menu.  Select C/C++ tab and select C++ language from the     //
//        category combo box.  Set Runtime Type Info to yes.           //
//        /c limits processing to compilation, e.g., no link, which    //
//        generates an obj.                                            //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#include "ExampleInterface.h"
#include "Creatable.h"

///////////////////////////////////////////////////////////////
//  Example1 class declaration - example creatable class

class Example1 : public ExampleInterface, 
                 public creator<ExampleInterface,Example1> 
{
  public:
    virtual void announcer();
};

/////////////////////////////////////////////////////////////////////////
//  Example2 class declaration - example creatable class

class Example2 : public ExampleInterface , 
                 public creator<ExampleInterface,Example2>
{
  public:
    virtual void announcer();
};

#endif
