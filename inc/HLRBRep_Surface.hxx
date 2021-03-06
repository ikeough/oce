// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_Surface_HeaderFile
#define _HLRBRep_Surface_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <BRepAdaptor_Surface.hxx>
#include <GeomAbs_SurfaceType.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <GeomAbs_Shape.hxx>
#include <gp_Vec.hxx>
#include <gp_Cylinder.hxx>
#include <gp_Cone.hxx>
#include <gp_Sphere.hxx>
#include <gp_Torus.hxx>
#include <gp_Ax1.hxx>
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class BRepAdaptor_Surface;
class TopoDS_Face;
class TColgp_Array2OfPnt;
class gp_Pnt;
class gp_Vec;
class gp_Pln;



class HLRBRep_Surface 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an undefined surface with no face loaded.
  Standard_EXPORT HLRBRep_Surface();
  
      void Projector (const Standard_Address Proj) ;
  
  //! Returns the 3D Surface.
      BRepAdaptor_Surface& Surface() ;
  
  //! Sets the 3D Surface to be projected.
  Standard_EXPORT   void Surface (const TopoDS_Face& F) ;
  
  //! returns true if it is a side face
  Standard_EXPORT   Standard_Boolean IsSide (const Standard_Real tolf, const Standard_Real toler)  const;
  
  Standard_EXPORT   Standard_Boolean IsAbove (const Standard_Boolean back, const Standard_Address A, const Standard_Real tolC)  const;
  
      Standard_Real FirstUParameter()  const;
  
      Standard_Real LastUParameter()  const;
  
      Standard_Real FirstVParameter()  const;
  
      Standard_Real LastVParameter()  const;
  
      GeomAbs_Shape UContinuity()  const;
  
      GeomAbs_Shape VContinuity()  const;
  
  //! If necessary, breaks the surface in U intervals of
  //! continuity    <S>.  And   returns  the  number  of
  //! intervals.
      Standard_Integer NbUIntervals (const GeomAbs_Shape S) ;
  
  //! If necessary, breaks the surface in V intervals of
  //! continuity    <S>.  And   returns  the  number  of
  //! intervals.
      Standard_Integer NbVIntervals (const GeomAbs_Shape S) ;
  
      GeomAbs_Shape UIntervalContinuity()  const;
  
      GeomAbs_Shape VIntervalContinuity()  const;
  
      Standard_Boolean IsUClosed()  const;
  
      Standard_Boolean IsVClosed()  const;
  
      Standard_Boolean IsUPeriodic()  const;
  
      Standard_Real UPeriod()  const;
  
      Standard_Boolean IsVPeriodic()  const;
  
      Standard_Real VPeriod()  const;
  
  //! Computes the point of parameters U,V on the surface.
  Standard_EXPORT   gp_Pnt Value (const Standard_Real U, const Standard_Real V)  const;
  
  //! Computes the point of parameters U,V on the surface.
      void D0 (const Standard_Real U, const Standard_Real V, gp_Pnt& P)  const;
  
  //! Computes the point  and the first derivatives on
  //! the surface.
  //! Raised   if  the continuity  of   the  current
  //! intervals is not C1.
      void D1 (const Standard_Real U, const Standard_Real V, gp_Pnt& P, gp_Vec& D1U, gp_Vec& D1V)  const;
  
  //! Computes   the point,  the  first  and  second
  //! derivatives on the surface.
  //! Raised  if   the   continuity   of the current
  //! intervals is not C2.
      void D2 (const Standard_Real U, const Standard_Real V, gp_Pnt& P, gp_Vec& D1U, gp_Vec& D1V, gp_Vec& D2U, gp_Vec& D2V, gp_Vec& D2UV)  const;
  
  //! Computes the point,  the first, second and third
  //! derivatives on the surface.
  //! Raised  if   the   continuity   of the current
  //! intervals is not C3.
      void D3 (const Standard_Real U, const Standard_Real V, gp_Pnt& P, gp_Vec& D1U, gp_Vec& D1V, gp_Vec& D2U, gp_Vec& D2V, gp_Vec& D2UV, gp_Vec& D3U, gp_Vec& D3V, gp_Vec& D3UUV, gp_Vec& D3UVV)  const;
  
  //! Computes  the  derivative of order   Nu  in the
  //! direction U and Nv in the  direction  V  at the point P(U,
  //! V).
  //! Raised if the current U  interval is not not CNu
  //! and the current V interval is not CNv.
  //! Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0.
      gp_Vec DN (const Standard_Real U, const Standard_Real V, const Standard_Integer Nu, const Standard_Integer Nv)  const;
  
  //! Returns the type of the surface : Plane, Cylinder,
  //! Cone,      Sphere,        Torus,    BezierSurface,
  //! BSplineSurface,               SurfaceOfRevolution,
  //! SurfaceOfExtrusion, OtherSurface
      GeomAbs_SurfaceType GetType()  const;
  
  Standard_EXPORT   gp_Pln Plane()  const;
  
      gp_Cylinder Cylinder()  const;
  
      gp_Cone Cone()  const;
  
      gp_Sphere Sphere()  const;
  
      gp_Torus Torus()  const;
  
      Standard_Integer UDegree()  const;
  
      Standard_Integer NbUPoles()  const;
  
      Standard_Integer VDegree()  const;
  
      Standard_Integer NbVPoles()  const;
  
      Standard_Integer NbUKnots()  const;
  
      Standard_Integer NbVKnots()  const;
  
      gp_Ax1 Axis()  const;




protected:





private:

  
  //! returns true if it is a side face
  Standard_EXPORT   Standard_Boolean SideRowsOfPoles (const Standard_Real tol, const Standard_Integer nbuPoles, const Standard_Integer nbvPoles, TColgp_Array2OfPnt& Pnt)  const;


  BRepAdaptor_Surface mySurf;
  GeomAbs_SurfaceType myType;
  Standard_Address myProj;


};


#include <HLRBRep_Surface.lxx>





#endif // _HLRBRep_Surface_HeaderFile
