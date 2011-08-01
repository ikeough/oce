// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_PointReplica_HeaderFile
#define _StepGeom_PointReplica_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepGeom_PointReplica_HeaderFile
#include <Handle_StepGeom_PointReplica.hxx>
#endif

#ifndef _Handle_StepGeom_Point_HeaderFile
#include <Handle_StepGeom_Point.hxx>
#endif
#ifndef _Handle_StepGeom_CartesianTransformationOperator_HeaderFile
#include <Handle_StepGeom_CartesianTransformationOperator.hxx>
#endif
#ifndef _StepGeom_Point_HeaderFile
#include <StepGeom_Point.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class StepGeom_Point;
class StepGeom_CartesianTransformationOperator;
class TCollection_HAsciiString;



class StepGeom_PointReplica : public StepGeom_Point {

public:

  //! Returns a PointReplica <br>
  Standard_EXPORT   StepGeom_PointReplica();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepGeom_Point)& aParentPt,const Handle(StepGeom_CartesianTransformationOperator)& aTransformation) ;
  
  Standard_EXPORT     void SetParentPt(const Handle(StepGeom_Point)& aParentPt) ;
  
  Standard_EXPORT     Handle_StepGeom_Point ParentPt() const;
  
  Standard_EXPORT     void SetTransformation(const Handle(StepGeom_CartesianTransformationOperator)& aTransformation) ;
  
  Standard_EXPORT     Handle_StepGeom_CartesianTransformationOperator Transformation() const;




  DEFINE_STANDARD_RTTI(StepGeom_PointReplica)

protected:




private: 


Handle_StepGeom_Point parentPt;
Handle_StepGeom_CartesianTransformationOperator transformation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif