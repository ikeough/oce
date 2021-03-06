// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_HyperbolaToBSplineCurve_HeaderFile
#define _Convert_HyperbolaToBSplineCurve_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Convert_ConicToBSplineCurve.hxx>
#include <Standard_Real.hxx>
class gp_Hypr2d;



//! This algorithm converts a hyperbola into a rational B-spline curve.
//! The hyperbola is an Hypr2d from package gp with the
//! parametrization :
//! P (U) =
//! Loc + (MajorRadius * Cosh(U) * Xdir + MinorRadius * Sinh(U) * Ydir)
//! where Loc is the location point of the hyperbola, Xdir and Ydir are
//! the normalized directions of the local cartesian coordinate system
//! of the hyperbola.
//! KeyWords :
//! Convert, Hyperbola, BSplineCurve, 2D .
class Convert_HyperbolaToBSplineCurve  : public Convert_ConicToBSplineCurve
{
public:

  DEFINE_STANDARD_ALLOC

  

  //! The hyperbola H is limited between the parametric values U1, U2
  //! and the equivalent B-spline curve has the same orientation as the
  //! hyperbola.
  Standard_EXPORT Convert_HyperbolaToBSplineCurve(const gp_Hypr2d& H, const Standard_Real U1, const Standard_Real U2);




protected:





private:





};







#endif // _Convert_HyperbolaToBSplineCurve_HeaderFile
