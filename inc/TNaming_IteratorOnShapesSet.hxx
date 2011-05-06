// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_IteratorOnShapesSet_HeaderFile
#define _TNaming_IteratorOnShapesSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_MapIteratorOfMapOfShape_HeaderFile
#include <TopTools_MapIteratorOfMapOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TNaming_ShapesSet;
class TopoDS_Shape;



class TNaming_IteratorOnShapesSet  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
      TNaming_IteratorOnShapesSet();
  
      TNaming_IteratorOnShapesSet(const TNaming_ShapesSet& S);
  //! Initialize the iteration <br>
        void Init(const TNaming_ShapesSet& S) ;
  //! Returns True if there is a current Item in <br>
//!          the iteration. <br>
        Standard_Boolean More() const;
  //! Move to the next Item <br>
        void Next() ;
  
  Standard_EXPORT    const TopoDS_Shape& Value() const;





protected:





private:



TopTools_MapIteratorOfMapOfShape myIt;


};


#include <TNaming_IteratorOnShapesSet.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif