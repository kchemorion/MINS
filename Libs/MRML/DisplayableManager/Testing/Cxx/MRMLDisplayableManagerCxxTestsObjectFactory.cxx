/*=========================================================================

  Program:   Visualization Toolkit
  Module:    MRMLDisplayableManagerCxxTestsObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "MRMLDisplayableManagerCxxTestsObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkMRMLTestThreeDViewDisplayableManager.h"
#include "vtkMRMLTestSliceViewDisplayableManager.h"
#include "vtkMRMLTestCustomDisplayableManager.h"


vtkStandardNewMacro(MRMLDisplayableManagerCxxTestsObjectFactory)

// Now create the functions to create overrides with.

      VTK_CREATE_CREATE_FUNCTION(vtkMRMLTestThreeDViewDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLTestSliceViewDisplayableManager)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLTestCustomDisplayableManager)

MRMLDisplayableManagerCxxTestsObjectFactory::MRMLDisplayableManagerCxxTestsObjectFactory()
{

    this->RegisterOverride("vtkMRMLTestThreeDViewDisplayableManager",
                           "vtkMRMLTestThreeDViewDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLTestThreeDViewDisplayableManager);
    this->RegisterOverride("vtkMRMLTestSliceViewDisplayableManager",
                           "vtkMRMLTestSliceViewDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLTestSliceViewDisplayableManager);
    this->RegisterOverride("vtkMRMLTestCustomDisplayableManager",
                           "vtkMRMLTestCustomDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLTestCustomDisplayableManager);
}

const char * MRMLDisplayableManagerCxxTestsObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void MRMLDisplayableManagerCxxTestsObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int MRMLDisplayableManagerCxxTestsCount;

#ifdef MRMLDisplayableManagerCxxTests_AUTOINIT
# define MRMLDISPLAYABLEMANAGERCXXTESTS_MODULEINIT_EXPORT
#else
# define MRMLDISPLAYABLEMANAGERCXXTESTS_MODULEINIT_EXPORT MRMLDISPLAYABLEMANAGERCXXTESTS_EXPORT
#endif

MRMLDISPLAYABLEMANAGERCXXTESTS_MODULEINIT_EXPORT void MRMLDisplayableManagerCxxTests_AutoInit_Construct()
{
  if(++MRMLDisplayableManagerCxxTestsCount == 1)
    {
    
    MRMLDisplayableManagerCxxTestsObjectFactory* factory = MRMLDisplayableManagerCxxTestsObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

MRMLDISPLAYABLEMANAGERCXXTESTS_MODULEINIT_EXPORT void MRMLDisplayableManagerCxxTests_AutoInit_Destruct()
{
  if(--MRMLDisplayableManagerCxxTestsCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
