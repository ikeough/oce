// This file is generated by WOK (CSFDBSchema).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdLSchema_PDataStd_FieldOfHArray1OfHArray1OfReal_HeaderFile
#define _StdLSchema_PDataStd_FieldOfHArray1OfHArray1OfReal_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif

#ifndef _StdLSchema_PColStd_HArray1OfReal_HeaderFile
#include <StdLSchema_PColStd_HArray1OfReal.hxx>
#endif


class PDataStd_FieldOfHArray1OfHArray1OfReal;

class StdLSchema_PDataStd_FieldOfHArray1OfHArray1OfReal {
public:
  Standard_EXPORT static void SAdd(const PDataStd_FieldOfHArray1OfHArray1OfReal&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const PDataStd_FieldOfHArray1OfHArray1OfReal&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(PDataStd_FieldOfHArray1OfHArray1OfReal&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
