// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_VectorWithMagnitude_HeaderFile
#define _Geom2d_VectorWithMagnitude_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Geom2d_VectorWithMagnitude.hxx>

#include <Geom2d_Vector.hxx>
#include <Standard_Real.hxx>
#include <Handle_Geom2d_Vector.hxx>
#include <Handle_Geom2d_Geometry.hxx>
class Standard_ConstructionError;
class gp_Vec2d;
class gp_Pnt2d;
class Geom2d_Vector;
class gp_Trsf2d;
class Geom2d_Geometry;



//! Defines a vector with magnitude.
//! A vector with magnitude can have a zero length.
class Geom2d_VectorWithMagnitude : public Geom2d_Vector
{

public:

  
  //! Creates a persistent copy of V.
  Standard_EXPORT Geom2d_VectorWithMagnitude(const gp_Vec2d& V);
  
  //! Creates a vector with two cartesian coordinates.
  Standard_EXPORT Geom2d_VectorWithMagnitude(const Standard_Real X, const Standard_Real Y);
  

  //! Creates a vector from the point P1 to the point P2.
  //! The magnitude of the vector is the distance between P1 and P2
  Standard_EXPORT Geom2d_VectorWithMagnitude(const gp_Pnt2d& P1, const gp_Pnt2d& P2);
  
  //! Set <me> to X, Y coordinates.
  Standard_EXPORT   void SetCoord (const Standard_Real X, const Standard_Real Y) ;
  
  Standard_EXPORT   void SetVec2d (const gp_Vec2d& V) ;
  
  //! Changes the X coordinate of <me>.
  Standard_EXPORT   void SetX (const Standard_Real X) ;
  
  //! Changes the Y coordinate of <me>
  Standard_EXPORT   void SetY (const Standard_Real Y) ;
  
  //! Returns the magnitude of <me>.
  Standard_EXPORT   Standard_Real Magnitude()  const;
  
  //! Returns the square magnitude of <me>.
  Standard_EXPORT   Standard_Real SquareMagnitude()  const;
  

  //! Adds the Vector Other to <me>.
  Standard_EXPORT   void Add (const Handle(Geom2d_Vector)& Other) ;
  void operator += (const Handle(Geom2d_Vector)& Other) 
{
  Add(Other);
}
  

  //! Adds the vector Other to <me>.
  Standard_EXPORT   Handle(Geom2d_VectorWithMagnitude) Added (const Handle(Geom2d_Vector)& Other)  const;
  Handle(Geom2d_VectorWithMagnitude) operator + (const Handle(Geom2d_Vector)& Other)  const
{
  return Added(Other);
}
  

  //! Computes the cross product  between <me> and Other
  //! <me> ^ Other. A new vector is returned.
  Standard_EXPORT   Standard_Real Crossed (const Handle(Geom2d_Vector)& Other)  const;
  Standard_Real operator ^ (const Handle(Geom2d_Vector)& Other)  const
{
  return Crossed(Other);
}
  
  //! Divides <me> by a scalar.
  Standard_EXPORT   void Divide (const Standard_Real Scalar) ;
  void operator /= (const Standard_Real Scalar) 
{
  Divide(Scalar);
}
  

  //! Divides <me> by a scalar. A new vector is returned.
  Standard_EXPORT   Handle(Geom2d_VectorWithMagnitude) Divided (const Standard_Real Scalar)  const;
  Handle(Geom2d_VectorWithMagnitude) operator / (const Standard_Real Scalar)  const
{
  return Divided(Scalar);
}
  

  //! Computes the product of the vector <me> by a scalar.
  //! A new vector is returned.
  //!
  //! -C++: alias operator *
  //! Collision with same operator defined for the class Vector!
  Standard_EXPORT   Handle(Geom2d_VectorWithMagnitude) Multiplied (const Standard_Real Scalar)  const;
  

  //! Computes the product of the vector <me> by a scalar.
  Standard_EXPORT   void Multiply (const Standard_Real Scalar) ;
  void operator *= (const Standard_Real Scalar) 
{
  Multiply(Scalar);
}
  
  //! Normalizes <me>.
  //!
  //! Raised if the magnitude of the vector is lower or equal to
  //! Resolution from package gp.
  Standard_EXPORT   void Normalize() ;
  
  //! Returns a copy of <me> Normalized.
  //!
  //! Raised if the magnitude of the vector is lower or equal to
  //! Resolution from package gp.
  Standard_EXPORT   Handle(Geom2d_VectorWithMagnitude) Normalized()  const;
  
  //! Subtracts the Vector Other to <me>.
  Standard_EXPORT   void Subtract (const Handle(Geom2d_Vector)& Other) ;
  void operator -= (const Handle(Geom2d_Vector)& Other) 
{
  Subtract(Other);
}
  

  //! Subtracts the vector Other to <me>. A new vector is returned.
  Standard_EXPORT   Handle(Geom2d_VectorWithMagnitude) Subtracted (const Handle(Geom2d_Vector)& Other)  const;
  Handle(Geom2d_VectorWithMagnitude) operator - (const Handle(Geom2d_Vector)& Other)  const
{
  return Subtracted(Other);
}
  
  //! Applies the transformation T to this vector.
  Standard_EXPORT   void Transform (const gp_Trsf2d& T) ;
  
  //! Creates a new object which is a copy of this vector.
  Standard_EXPORT   Handle(Geom2d_Geometry) Copy()  const;




  DEFINE_STANDARD_RTTI(Geom2d_VectorWithMagnitude)

protected:




private: 




};







#endif // _Geom2d_VectorWithMagnitude_HeaderFile
