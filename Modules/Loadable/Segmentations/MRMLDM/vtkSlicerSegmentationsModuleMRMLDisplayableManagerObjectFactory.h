/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_h
#define __vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory_h

#include "vtkSlicerSegmentationsModuleMRMLDisplayableManagerModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory : public vtkObjectFactory
{
public:
  static vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory * New();
  vtkTypeMacro(vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkSlicerSegmentationsModuleMRMLDisplayableManager factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory();

private:
  vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory(const vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory&) = delete;
  void operator=(const vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory&) = delete;
};

#endif
