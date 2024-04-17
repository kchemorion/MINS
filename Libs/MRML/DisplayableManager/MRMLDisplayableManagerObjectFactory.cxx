/*=========================================================================

  Program:   Visualization Toolkit
  Module:    MRMLDisplayableManagerObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "MRMLDisplayableManagerObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkMRMLCameraDisplayableManager.h"
#include "vtkMRMLModelDisplayableManager.h"
#include "vtkMRMLViewDisplayableManager.h"
#include "vtkMRMLThreeDReformatDisplayableManager.h"
#include "vtkMRMLCrosshairDisplayableManager.h"
#include "vtkMRMLCrosshairDisplayableManager3D.h"
#include "vtkMRMLModelSliceDisplayableManager.h"
#include "vtkMRMLVolumeGlyphSliceDisplayableManager.h"
#include "vtkMRMLOrientationMarkerDisplayableManager.h"
#include "vtkMRMLRulerDisplayableManager.h"
#include "vtkMRMLScalarBarDisplayableManager.h"


vtkStandardNewMacro(MRMLDisplayableManagerObjectFactory)

// Now create the functions to create overrides with.

      VTK_CREATE_CREATE_FUNCTION(vtkMRMLCameraDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLModelDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLViewDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLThreeDReformatDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLCrosshairDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLCrosshairDisplayableManager3D)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLModelSliceDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLVolumeGlyphSliceDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLOrientationMarkerDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLRulerDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLScalarBarDisplayableManager)

MRMLDisplayableManagerObjectFactory::MRMLDisplayableManagerObjectFactory()
{

    this->RegisterOverride("vtkMRMLCameraDisplayableManager",
                           "vtkMRMLCameraDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLCameraDisplayableManager);
    this->RegisterOverride("vtkMRMLModelDisplayableManager",
                           "vtkMRMLModelDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLModelDisplayableManager);
    this->RegisterOverride("vtkMRMLViewDisplayableManager",
                           "vtkMRMLViewDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLViewDisplayableManager);
    this->RegisterOverride("vtkMRMLThreeDReformatDisplayableManager",
                           "vtkMRMLThreeDReformatDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLThreeDReformatDisplayableManager);
    this->RegisterOverride("vtkMRMLCrosshairDisplayableManager",
                           "vtkMRMLCrosshairDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLCrosshairDisplayableManager);
    this->RegisterOverride("vtkMRMLCrosshairDisplayableManager3D",
                           "vtkMRMLCrosshairDisplayableManager3D",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLCrosshairDisplayableManager3D);
    this->RegisterOverride("vtkMRMLModelSliceDisplayableManager",
                           "vtkMRMLModelSliceDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLModelSliceDisplayableManager);
    this->RegisterOverride("vtkMRMLVolumeGlyphSliceDisplayableManager",
                           "vtkMRMLVolumeGlyphSliceDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLVolumeGlyphSliceDisplayableManager);
    this->RegisterOverride("vtkMRMLOrientationMarkerDisplayableManager",
                           "vtkMRMLOrientationMarkerDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLOrientationMarkerDisplayableManager);
    this->RegisterOverride("vtkMRMLRulerDisplayableManager",
                           "vtkMRMLRulerDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLRulerDisplayableManager);
    this->RegisterOverride("vtkMRMLScalarBarDisplayableManager",
                           "vtkMRMLScalarBarDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLScalarBarDisplayableManager);
}

const char * MRMLDisplayableManagerObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void MRMLDisplayableManagerObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int MRMLDisplayableManagerCount;

#ifdef MRMLDisplayableManager_AUTOINIT
# define VTK_MRML_DISPLAYABLEMANAGER_MODULEINIT_EXPORT
#else
# define VTK_MRML_DISPLAYABLEMANAGER_MODULEINIT_EXPORT VTK_MRML_DISPLAYABLEMANAGER_EXPORT
#endif

VTK_MRML_DISPLAYABLEMANAGER_MODULEINIT_EXPORT void MRMLDisplayableManager_AutoInit_Construct()
{
  if(++MRMLDisplayableManagerCount == 1)
    {
    
    MRMLDisplayableManagerObjectFactory* factory = MRMLDisplayableManagerObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTK_MRML_DISPLAYABLEMANAGER_MODULEINIT_EXPORT void MRMLDisplayableManager_AutoInit_Destruct()
{
  if(--MRMLDisplayableManagerCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
