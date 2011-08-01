// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_ReferenceList_HeaderFile
#define _TDataStd_ReferenceList_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_ReferenceList_HeaderFile
#include <Handle_TDataStd_ReferenceList.hxx>
#endif

#ifndef _TDF_LabelList_HeaderFile
#include <TDF_LabelList.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Handle_TDF_DataSet_HeaderFile
#include <Handle_TDF_DataSet.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class TDF_LabelList;
class TDF_Attribute;
class TDF_RelocationTable;
class TDF_DataSet;


//! Contains a list of references. <br>
class TDataStd_ReferenceList : public TDF_Attribute {

public:

  //! Static methods <br>
//!          ============== <br>//! Returns the ID of the list of references (labels) attribute. <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //! Finds or creates a list of reference values (labels) attribute. <br>
  Standard_EXPORT   static  Handle_TDataStd_ReferenceList Set(const TDF_Label& label) ;
  
  Standard_EXPORT   TDataStd_ReferenceList();
  
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Prepend(const TDF_Label& value) ;
  
  Standard_EXPORT     void Append(const TDF_Label& value) ;
  //! Inserts the <value> before the first meet of <before_value>. <br>
  Standard_EXPORT     Standard_Boolean InsertBefore(const TDF_Label& value,const TDF_Label& before_value) ;
  //! Inserts the <value> after the first meet of <after_value>. <br>
  Standard_EXPORT     Standard_Boolean InsertAfter(const TDF_Label& value,const TDF_Label& after_value) ;
  //! Removes the first meet of the <value>. <br>
  Standard_EXPORT     Standard_Boolean Remove(const TDF_Label& value) ;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT    const TDF_Label& First() const;
  
  Standard_EXPORT    const TDF_Label& Last() const;
  
  Standard_EXPORT    const TDF_LabelList& List() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  void References(const Handle(TDF_DataSet)& DS) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;




  DEFINE_STANDARD_RTTI(TDataStd_ReferenceList)

protected:




private: 


TDF_LabelList myList;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif