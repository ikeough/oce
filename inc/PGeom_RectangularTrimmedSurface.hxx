// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom_RectangularTrimmedSurface_HeaderFile
#define _PGeom_RectangularTrimmedSurface_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom_RectangularTrimmedSurface.hxx>

#include <Handle_PGeom_Surface.hxx>
#include <Standard_Real.hxx>
#include <PGeom_BoundedSurface.hxx>
class PGeom_Surface;


class PGeom_RectangularTrimmedSurface : public PGeom_BoundedSurface
{

public:

  
  //! Creates a RectangularTrimmedSurface with default values.
  Standard_EXPORT PGeom_RectangularTrimmedSurface();
  
  //! Creates a RectangularTrimmedSurface with these values.
  Standard_EXPORT PGeom_RectangularTrimmedSurface(const Handle(PGeom_Surface)& aBasisSurface, const Standard_Real aFirstU, const Standard_Real aLastU, const Standard_Real aFirstV, const Standard_Real aLastV);
  
  //! Set the value  of  the  field basisSurface  with
  //! <aBasisSurface>.
  Standard_EXPORT   void BasisSurface (const Handle(PGeom_Surface)& aBasisSurface) ;
  
  //! Returns the value of the field basisSurface.
  Standard_EXPORT   Handle(PGeom_Surface) BasisSurface()  const;
  
  //! Set the value of the field firstU with <aFirstU>.
  Standard_EXPORT   void FirstU (const Standard_Real aFirstU) ;
  
  //! Returns the value of the field firstU.
  Standard_EXPORT   Standard_Real FirstU()  const;
  
  //! Set the value of the field lastU with <aLastU>.
  Standard_EXPORT   void LastU (const Standard_Real aLastU) ;
  
  //! Returns the value of the field lastU.
  Standard_EXPORT   Standard_Real LastU()  const;
  
  //! Set the value of the field firstV with <aFirstV>.
  Standard_EXPORT   void FirstV (const Standard_Real aFirstV) ;
  
  //! Returns the value of the field firstV.
  Standard_EXPORT   Standard_Real FirstV()  const;
  
  //! Set the value of the field lastV with <aLastV>.
  Standard_EXPORT   void LastV (const Standard_Real aLastV) ;
  
  //! Returns the value of the field lastV.
  Standard_EXPORT   Standard_Real LastV()  const;

PGeom_RectangularTrimmedSurface(const Storage_stCONSTclCOM& a) : PGeom_BoundedSurface(a)
{
  
}
    Handle(PGeom_Surface) _CSFDB_GetPGeom_RectangularTrimmedSurfacebasisSurface() const { return basisSurface; }
    void _CSFDB_SetPGeom_RectangularTrimmedSurfacebasisSurface(const Handle(PGeom_Surface)& p) { basisSurface = p; }
    Standard_Real _CSFDB_GetPGeom_RectangularTrimmedSurfacefirstU() const { return firstU; }
    void _CSFDB_SetPGeom_RectangularTrimmedSurfacefirstU(const Standard_Real p) { firstU = p; }
    Standard_Real _CSFDB_GetPGeom_RectangularTrimmedSurfacelastU() const { return lastU; }
    void _CSFDB_SetPGeom_RectangularTrimmedSurfacelastU(const Standard_Real p) { lastU = p; }
    Standard_Real _CSFDB_GetPGeom_RectangularTrimmedSurfacefirstV() const { return firstV; }
    void _CSFDB_SetPGeom_RectangularTrimmedSurfacefirstV(const Standard_Real p) { firstV = p; }
    Standard_Real _CSFDB_GetPGeom_RectangularTrimmedSurfacelastV() const { return lastV; }
    void _CSFDB_SetPGeom_RectangularTrimmedSurfacelastV(const Standard_Real p) { lastV = p; }



  DEFINE_STANDARD_RTTI(PGeom_RectangularTrimmedSurface)

protected:




private: 


  Handle(PGeom_Surface) basisSurface;
  Standard_Real firstU;
  Standard_Real lastU;
  Standard_Real firstV;
  Standard_Real lastV;


};







#endif // _PGeom_RectangularTrimmedSurface_HeaderFile
