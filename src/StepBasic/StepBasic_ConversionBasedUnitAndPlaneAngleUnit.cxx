// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

#include <StepBasic_ConversionBasedUnitAndPlaneAngleUnit.ixx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>


StepBasic_ConversionBasedUnitAndPlaneAngleUnit::StepBasic_ConversionBasedUnitAndPlaneAngleUnit ()
{
}

void StepBasic_ConversionBasedUnitAndPlaneAngleUnit::Init(const Handle(StepBasic_DimensionalExponents)& aDimensions)
{
  StepBasic_NamedUnit::Init(aDimensions);
}


void StepBasic_ConversionBasedUnitAndPlaneAngleUnit::Init(const Handle(StepBasic_DimensionalExponents)& aDimensions,
							  const Handle(TCollection_HAsciiString)& aName,
							  const Handle(StepBasic_MeasureWithUnit)& aConversionFactor)
{
  // --- ANDOR componant fields ---
  StepBasic_ConversionBasedUnit::Init(aDimensions, aName, aConversionFactor);
	
  // --- ANDOR componant fields ---
  planeAngleUnit = new StepBasic_PlaneAngleUnit();
  planeAngleUnit->Init(aDimensions);
}


void StepBasic_ConversionBasedUnitAndPlaneAngleUnit::SetPlaneAngleUnit(const Handle(StepBasic_PlaneAngleUnit)& aPlaneAngleUnit)
{
  planeAngleUnit = aPlaneAngleUnit;
}

Handle(StepBasic_PlaneAngleUnit) StepBasic_ConversionBasedUnitAndPlaneAngleUnit::PlaneAngleUnit() const
{
  return planeAngleUnit;
}
