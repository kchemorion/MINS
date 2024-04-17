/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory_h
#define __vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory_h

#include "vtkSlicerColorsModuleMRMLDisplayableManagerModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTK_SLICER_COLORS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory : public vtkObjectFactory
{
public:
  static vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory * New();
  vtkTypeMacro(vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkSlicerColorsModuleMRMLDisplayableManager factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory();

private:
  vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory(const vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory&) = delete;
  void operator=(const vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory&) = delete;
};

#endif
