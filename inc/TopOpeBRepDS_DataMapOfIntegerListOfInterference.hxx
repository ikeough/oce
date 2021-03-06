// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapOfIntegerListOfInterference_HeaderFile
#define _TopOpeBRepDS_DataMapOfIntegerListOfInterference_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopOpeBRepDS_ListOfInterference;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_DataMapNodeOfDataMapOfIntegerListOfInterference;
class TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference;



class TopOpeBRepDS_DataMapOfIntegerListOfInterference  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_DataMapOfIntegerListOfInterference(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepDS_DataMapOfIntegerListOfInterference& Assign (const TopOpeBRepDS_DataMapOfIntegerListOfInterference& Other) ;
  TopOpeBRepDS_DataMapOfIntegerListOfInterference& operator = (const TopOpeBRepDS_DataMapOfIntegerListOfInterference& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepDS_DataMapOfIntegerListOfInterference()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const TopOpeBRepDS_ListOfInterference& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  TopOpeBRepDS_ListOfInterference& Find (const Standard_Integer& K)  const;
 const  TopOpeBRepDS_ListOfInterference& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopOpeBRepDS_ListOfInterference& ChangeFind (const Standard_Integer& K) ;
  TopOpeBRepDS_ListOfInterference& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepDS_DataMapOfIntegerListOfInterference(const TopOpeBRepDS_DataMapOfIntegerListOfInterference& Other);




};







#endif // _TopOpeBRepDS_DataMapOfIntegerListOfInterference_HeaderFile
