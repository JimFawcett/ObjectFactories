#ifndef EXAMPLEINTERFACE_H
#define EXAMPLEINTERFACE_H
///////////////////////////////////////////////////////////////////////
//  ExampleInterface.h - provides protocol for clients to use with   //
//                       implementation classes                      //
//                                                                   //
//  Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004        //
///////////////////////////////////////////////////////////////////////

#include <string>
#include "factory.h"

///////////////////////////////////////////////////////////////
//  Example abstract class declaration
//    - provides protocol for derived classes test1 and test2

class ExampleInterface
{
  public:
    virtual ~ExampleInterface() { }
    virtual void announcer() = 0;
    static void registerObjects(objFactory<ExampleInterface> &factory);
    static std::string type(int n);
};

#endif
