
//
// File auto-generated by ctkWrapPythonQt.py
//

#ifndef __osm_qSlicerTransformsModuleWidgets_h
#define __osm_qSlicerTransformsModuleWidgets_h

#include <QObject>
#include "qMRMLTransformDisplayNodeWidget.h"
#include "qMRMLTransformInfoWidget.h"

//-----------------------------------------------------------------------------
class PythonQtWrapper_qMRMLTransformDisplayNodeWidget : public QObject
{
Q_OBJECT
public:
public Q_SLOTS:
  qMRMLTransformDisplayNodeWidget* new_qMRMLTransformDisplayNodeWidget(QWidget*  parent = 0)
    {
    return new qMRMLTransformDisplayNodeWidget(parent);
    }
  void delete_qMRMLTransformDisplayNodeWidget(qMRMLTransformDisplayNodeWidget* obj) { delete obj; }
};


//-----------------------------------------------------------------------------
class PythonQtWrapper_qMRMLTransformInfoWidget : public QObject
{
Q_OBJECT
public:
public Q_SLOTS:
  qMRMLTransformInfoWidget* new_qMRMLTransformInfoWidget(QWidget*  parent = 0)
    {
    return new qMRMLTransformInfoWidget(parent);
    }
  void delete_qMRMLTransformInfoWidget(qMRMLTransformInfoWidget* obj) { delete obj; }
};

#endif
