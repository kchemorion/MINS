/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory_h
#define __vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory_h

#include "vtkSlicerTransformsModuleMRMLDisplayableManagerModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTK_SLICER_TRANSFORMS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory : public vtkObjectFactory
{
public:
  static vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory * New();
  vtkTypeMacro(vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkSlicerTransformsModuleMRMLDisplayableManager factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory();

private:
  vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory(const vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory&) = delete;
  void operator=(const vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory&) = delete;
};

#endif
