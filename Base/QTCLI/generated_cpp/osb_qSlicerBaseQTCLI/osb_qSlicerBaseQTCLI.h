
//
// File auto-generated by ctkWrapPythonQt.py
//

#ifndef __osb_qSlicerBaseQTCLI_h
#define __osb_qSlicerBaseQTCLI_h

#include <QObject>
#include "qSlicerCLIModule.h"
#include "qSlicerCLIModuleWidget.h"
#include "qSlicerCLIProgressBar.h"

//-----------------------------------------------------------------------------
class PythonQtWrapper_qSlicerCLIModule : public QObject
{
Q_OBJECT
public:
public Q_SLOTS:
  qSlicerCLIModule* new_qSlicerCLIModule(QWidget*  parent = 0)
    {
    return new qSlicerCLIModule(parent);
    }
  void delete_qSlicerCLIModule(qSlicerCLIModule* obj) { delete obj; }
};


//-----------------------------------------------------------------------------
class PythonQtWrapper_qSlicerCLIModuleWidget : public QObject
{
Q_OBJECT
public:
public Q_SLOTS:
  qSlicerCLIModuleWidget* new_qSlicerCLIModuleWidget(QWidget*  parent = 0)
    {
    return new qSlicerCLIModuleWidget(parent);
    }
  void delete_qSlicerCLIModuleWidget(qSlicerCLIModuleWidget* obj) { delete obj; }
};


//-----------------------------------------------------------------------------
class PythonQtWrapper_qSlicerCLIProgressBar : public QObject
{
Q_OBJECT
public:
public Q_SLOTS:
  qSlicerCLIProgressBar* new_qSlicerCLIProgressBar(QWidget*  parent = 0)
    {
    return new qSlicerCLIProgressBar(parent);
    }
  void delete_qSlicerCLIProgressBar(qSlicerCLIProgressBar* obj) { delete obj; }
};

#endif