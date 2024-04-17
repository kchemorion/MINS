/*=========================================================================

  Program:   Visualization Toolkit
  Module:    MRMLDisplayableManagerCxxTestsObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef __MRMLDisplayableManagerCxxTestsObjectFactory_h
#define __MRMLDisplayableManagerCxxTestsObjectFactory_h

#include "MRMLDisplayableManagerCxxTestsModule.h" // For export macro
#include "vtkObjectFactory.h"

class MRMLDISPLAYABLEMANAGERCXXTESTS_EXPORT MRMLDisplayableManagerCxxTestsObjectFactory : public vtkObjectFactory
{
public:
  static MRMLDisplayableManagerCxxTestsObjectFactory * New();
  vtkTypeMacro(MRMLDisplayableManagerCxxTestsObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "MRMLDisplayableManagerCxxTests factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  MRMLDisplayableManagerCxxTestsObjectFactory();

private:
  MRMLDisplayableManagerCxxTestsObjectFactory(const MRMLDisplayableManagerCxxTestsObjectFactory&) = delete;
  void operator=(const MRMLDisplayableManagerCxxTestsObjectFactory&) = delete;
};

#endif
