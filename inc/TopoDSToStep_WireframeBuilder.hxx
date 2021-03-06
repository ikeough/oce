// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_WireframeBuilder_HeaderFile
#define _TopoDSToStep_WireframeBuilder_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TColStd_HSequenceOfTransient.hxx>
#include <TopoDSToStep_BuilderError.hxx>
#include <TopoDSToStep_Root.hxx>
#include <Handle_Transfer_FinderProcess.hxx>
#include <Standard_Boolean.hxx>
class TColStd_HSequenceOfTransient;
class StdFail_NotDone;
class TopoDS_Shape;
class TopoDSToStep_Tool;
class Transfer_FinderProcess;
class TopoDS_Edge;
class TopoDS_Face;
class MoniTool_DataMapOfShapeTransient;


//! This builder Class provides services to build
//! a ProSTEP Wireframemodel from a Cas.Cad BRep.
class TopoDSToStep_WireframeBuilder  : public TopoDSToStep_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopoDSToStep_WireframeBuilder();
  
  Standard_EXPORT TopoDSToStep_WireframeBuilder(const TopoDS_Shape& S, TopoDSToStep_Tool& T, const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT   void Init (const TopoDS_Shape& S, TopoDSToStep_Tool& T, const Handle(Transfer_FinderProcess)& FP) ;
  
  Standard_EXPORT   TopoDSToStep_BuilderError Error()  const;
  
  Standard_EXPORT  const  Handle(TColStd_HSequenceOfTransient)& Value()  const;
  
  //! Extraction of Trimmed Curves from TopoDS_Edge for the
  //! Creation of a GeometricallyBoundedWireframeRepresentation
  Standard_EXPORT   Standard_Boolean GetTrimmedCurveFromEdge (const TopoDS_Edge& E, const TopoDS_Face& F, MoniTool_DataMapOfShapeTransient& M, Handle(TColStd_HSequenceOfTransient)& L)  const;
  
  //! Extraction of Trimmed Curves from TopoDS_Face for the
  //! Creation of a GeometricallyBoundedWireframeRepresentation
  Standard_EXPORT   Standard_Boolean GetTrimmedCurveFromFace (const TopoDS_Face& F, MoniTool_DataMapOfShapeTransient& M, Handle(TColStd_HSequenceOfTransient)& L)  const;
  
  //! Extraction of Trimmed Curves from any TopoDS_Shape for the
  //! Creation of a GeometricallyBoundedWireframeRepresentation
  Standard_EXPORT   Standard_Boolean GetTrimmedCurveFromShape (const TopoDS_Shape& S, MoniTool_DataMapOfShapeTransient& M, Handle(TColStd_HSequenceOfTransient)& L)  const;




protected:





private:



  Handle(TColStd_HSequenceOfTransient) myResult;
  TopoDSToStep_BuilderError myError;


};







#endif // _TopoDSToStep_WireframeBuilder_HeaderFile
