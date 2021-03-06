// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_NodeRepresentation_HeaderFile
#define _StepFEA_NodeRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_NodeRepresentation.hxx>

#include <Handle_StepFEA_FeaModel.hxx>
#include <StepRepr_Representation.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepRepr_HArray1OfRepresentationItem.hxx>
#include <Handle_StepRepr_RepresentationContext.hxx>
class StepFEA_FeaModel;
class TCollection_HAsciiString;
class StepRepr_HArray1OfRepresentationItem;
class StepRepr_RepresentationContext;


//! Representation of STEP entity NodeRepresentation
class StepFEA_NodeRepresentation : public StepRepr_Representation
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_NodeRepresentation();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentation_Name, const Handle(StepRepr_HArray1OfRepresentationItem)& aRepresentation_Items, const Handle(StepRepr_RepresentationContext)& aRepresentation_ContextOfItems, const Handle(StepFEA_FeaModel)& aModelRef) ;
  
  //! Returns field ModelRef
  Standard_EXPORT   Handle(StepFEA_FeaModel) ModelRef()  const;
  
  //! Set field ModelRef
  Standard_EXPORT   void SetModelRef (const Handle(StepFEA_FeaModel)& ModelRef) ;




  DEFINE_STANDARD_RTTI(StepFEA_NodeRepresentation)

protected:




private: 


  Handle(StepFEA_FeaModel) theModelRef;


};







#endif // _StepFEA_NodeRepresentation_HeaderFile
