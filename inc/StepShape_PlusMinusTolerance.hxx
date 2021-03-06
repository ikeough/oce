// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_PlusMinusTolerance_HeaderFile
#define _StepShape_PlusMinusTolerance_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_PlusMinusTolerance.hxx>

#include <StepShape_ToleranceMethodDefinition.hxx>
#include <StepShape_DimensionalCharacteristic.hxx>
#include <MMgt_TShared.hxx>
class StepShape_ToleranceMethodDefinition;
class StepShape_DimensionalCharacteristic;


//! Added for Dimensional Tolerances
class StepShape_PlusMinusTolerance : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepShape_PlusMinusTolerance();
  
  Standard_EXPORT   void Init (const StepShape_ToleranceMethodDefinition& range, const StepShape_DimensionalCharacteristic& toleranced_dimension) ;
  
  Standard_EXPORT   StepShape_ToleranceMethodDefinition Range()  const;
  
  Standard_EXPORT   void SetRange (const StepShape_ToleranceMethodDefinition& range) ;
  
  Standard_EXPORT   StepShape_DimensionalCharacteristic TolerancedDimension()  const;
  
  Standard_EXPORT   void SetTolerancedDimension (const StepShape_DimensionalCharacteristic& toleranced_dimension) ;




  DEFINE_STANDARD_RTTI(StepShape_PlusMinusTolerance)

protected:




private: 


  StepShape_ToleranceMethodDefinition theRange;
  StepShape_DimensionalCharacteristic theTolerancedDimension;


};







#endif // _StepShape_PlusMinusTolerance_HeaderFile
