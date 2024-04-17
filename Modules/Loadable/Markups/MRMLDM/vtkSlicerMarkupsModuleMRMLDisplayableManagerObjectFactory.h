/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory_h
#define __vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory_h

#include "vtkSlicerMarkupsModuleMRMLDisplayableManagerModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTK_SLICER_MARKUPS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory : public vtkObjectFactory
{
public:
  static vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory * New();
  vtkTypeMacro(vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkSlicerMarkupsModuleMRMLDisplayableManager factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory();

private:
  vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory(const vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory&) = delete;
  void operator=(const vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory&) = delete;
};

#endif
