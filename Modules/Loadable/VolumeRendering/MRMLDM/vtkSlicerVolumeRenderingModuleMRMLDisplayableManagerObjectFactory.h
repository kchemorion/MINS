/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory_h
#define __vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory_h

#include "vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTK_SLICER_VOLUMERENDERING_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory : public vtkObjectFactory
{
public:
  static vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory * New();
  vtkTypeMacro(vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkSlicerVolumeRenderingModuleMRMLDisplayableManager factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory();

private:
  vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory(const vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory&) = delete;
  void operator=(const vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory&) = delete;
};

#endif
