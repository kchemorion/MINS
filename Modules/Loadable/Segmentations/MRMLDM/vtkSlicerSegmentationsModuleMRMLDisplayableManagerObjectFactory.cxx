/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkMRMLSegmentationsDisplayableManager3D.h"
#include "vtkMRMLSegmentationsDisplayableManager2D.h"


vtkStandardNewMacro(vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory)

// Now create the functions to create overrides with.

      VTK_CREATE_CREATE_FUNCTION(vtkMRMLSegmentationsDisplayableManager3D)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLSegmentationsDisplayableManager2D)

vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory()
{

    this->RegisterOverride("vtkMRMLSegmentationsDisplayableManager3D",
                           "vtkMRMLSegmentationsDisplayableManager3D",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLSegmentationsDisplayableManager3D);
    this->RegisterOverride("vtkMRMLSegmentationsDisplayableManager2D",
                           "vtkMRMLSegmentationsDisplayableManager2D",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLSegmentationsDisplayableManager2D);
}

const char * vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkSlicerSegmentationsModuleMRMLDisplayableManagerCount;

#ifdef vtkSlicerSegmentationsModuleMRMLDisplayableManager_AUTOINIT
# define VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT
#else
# define VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT
#endif

VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerSegmentationsModuleMRMLDisplayableManager_AutoInit_Construct()
{
  if(++vtkSlicerSegmentationsModuleMRMLDisplayableManagerCount == 1)
    {
    
    vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory* factory = vtkSlicerSegmentationsModuleMRMLDisplayableManagerObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTK_SLICER_SEGMENTATIONS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerSegmentationsModuleMRMLDisplayableManager_AutoInit_Destruct()
{
  if(--vtkSlicerSegmentationsModuleMRMLDisplayableManagerCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
