/*=========================================================================

  Program:   Visualization Toolkit
  Module:    MRMLDisplayableManagerObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __MRMLDisplayableManagerObjectFactory_h
#define __MRMLDisplayableManagerObjectFactory_h

#include "MRMLDisplayableManagerModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTK_MRML_DISPLAYABLEMANAGER_EXPORT MRMLDisplayableManagerObjectFactory : public vtkObjectFactory
{
public:
  static MRMLDisplayableManagerObjectFactory * New();
  vtkTypeMacro(MRMLDisplayableManagerObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "MRMLDisplayableManager factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  MRMLDisplayableManagerObjectFactory();

private:
  MRMLDisplayableManagerObjectFactory(const MRMLDisplayableManagerObjectFactory&) = delete;
  void operator=(const MRMLDisplayableManagerObjectFactory&) = delete;
};

#endif
