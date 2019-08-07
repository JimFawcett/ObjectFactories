#ifndef FACTORY_H
#define FACTORY_H
///////////////////////////////////////////////////////////////////////
//  factory.h  -  declares object factory                            //
//  ver 2.0                                                          //
//  Jim Fawcett, CSE687 - Object Oriented Design, Spring 2004        //
///////////////////////////////////////////////////////////////////////
/*
    The objFactory class creates an object of the base or any derived
    class, attached to a base pointer.  The user does not need to know 
    the object's type.

    You need to treat the factory like a smart new operator.  It creates
    an object on the heap.  It's up to you to delete it.

    objFactory class declaration

    - The odd type T*(*)(), in the second argument of the map is the type
      of a function pointer for creation functions of signature T* somefun().
    - In the reg function, the second declaration is Type arg where Type
      is T*(*)() and arg is pFun.
*/

#include <string>
#include <map>

typedef std::string classID;

template <class Base> class objFactory
{
  public:
    objFactory();
    void reg(classID id, Base*(*pFun)());
    Base* makeObj(classID id);

  private:
    static std::map<classID, Base*(*)()> registry;
};
//
/////////////////////////////////////////////////////////////////////////
//  define the static instance of the class registry

template <class Base>
std::map<classID, Base*(*)()> objFactory<Base>::registry;

//----< construct objFactory >-------------------------------------------

template <class Base>
objFactory<Base>::objFactory() { }

//----< register a static member creation function >---------------------

template <class Base>
void objFactory<Base>::reg(classID id, Base*(*pFun)())
{
  registry[id] = pFun;
}

//----< create an instance of a creatable class >------------------------
//
// returns null pointer if object not found in registry
//
template <class Base>
Base* objFactory<Base>::makeObj(classID id)
{
  Base *theObject = NULL;
  std::map<classID, Base*(*)()>::const_iterator entry = registry.find(id);
  if(entry != registry.end())
    theObject = entry->second();  // using static creational function
  else
    theObject = 0;
  return theObject;
}

#endif
