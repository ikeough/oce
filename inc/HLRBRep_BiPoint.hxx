// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_BiPoint_HeaderFile
#define _HLRBRep_BiPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;
class gp_Pnt;


//! Contains the colors of a shape. <br>
class HLRBRep_BiPoint  {
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

  
  Standard_EXPORT   HLRBRep_BiPoint();
  
  Standard_EXPORT   HLRBRep_BiPoint(const Standard_Real x1,const Standard_Real y1,const Standard_Real z1,const Standard_Real x2,const Standard_Real y2,const Standard_Real z2,const TopoDS_Shape& S,const Standard_Boolean reg1,const Standard_Boolean regn,const Standard_Boolean outl,const Standard_Boolean intl);
  
       const gp_Pnt& P1() const;
  
       const gp_Pnt& P2() const;
  
       const TopoDS_Shape& Shape() const;
  
        void Shape(const TopoDS_Shape& S) ;
  
        Standard_Boolean Rg1Line() const;
  
        void Rg1Line(const Standard_Boolean B) ;
  
        Standard_Boolean RgNLine() const;
  
        void RgNLine(const Standard_Boolean B) ;
  
        Standard_Boolean OutLine() const;
  
        void OutLine(const Standard_Boolean B) ;
  
        Standard_Boolean IntLine() const;
  
        void IntLine(const Standard_Boolean B) ;





protected:





private:



gp_Pnt myP1;
gp_Pnt myP2;
TopoDS_Shape myShape;
Standard_Boolean myFlags;


};


#include <HLRBRep_BiPoint.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif