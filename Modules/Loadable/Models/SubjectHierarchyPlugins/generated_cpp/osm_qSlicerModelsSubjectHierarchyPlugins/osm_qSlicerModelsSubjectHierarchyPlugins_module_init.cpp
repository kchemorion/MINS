// Configured by cmake macro /home/blvksh33p/Documents/Slicer-SuperBuild-Debug/slicersources-src/Modules/Loadable/Models/SubjectHierarchyPlugins/CMakeLists.txt

#include <PythonQt.h>
#include <Python.h>

//-----------------------------------------------------------------------------
static PyMethodDef PyqSlicerModelsSubjectHierarchyPluginsPythonQt_ClassMethods[] = {
{NULL, NULL, 0, NULL}};

//-----------------------------------------------------------------------------
#if PY_MAJOR_VERSION >= 3
extern "C" { Q_DECL_EXPORT PyObject* PyInit_qSlicerModelsSubjectHierarchyPluginsPythonQt(); }
#else
extern "C" { Q_DECL_EXPORT void initqSlicerModelsSubjectHierarchyPluginsPythonQt(); }
#endif

#ifdef __GNUC__
// Disable warnings related to Py_DECREF() macro
// See http://gcc.gnu.org/onlinedocs/gcc/Diagnostic-Pragmas.html
// Note: Ideally the incriminated functions and macros should be fixed upstream ...
#pragma GCC diagnostic ignored "-Wold-style-cast"
#endif

/* #undef HAS_DECORATOR */

namespace {
//-----------------------------------------------------------------------------
void copyAttributes(PyObject* orig_module, PyObject* dest_module)
{
  PyObject* keys = PyObject_Dir(orig_module);
  if (keys)
    {
    PyObject* key;
    PyObject* value;
    int nKeys = PyList_Size(keys);
    for (int i = 0; i < nKeys; ++i)
      {
      key = PyList_GetItem(keys, i);
      value = PyObject_GetAttr(orig_module, key);
      if (!value)
        {
        continue;
        }
      //printf("%s\n", PyString_AsString(key));
      if (!PyObject_HasAttr(dest_module, key))
        {
        PyObject_SetAttr(dest_module, key, value);
        }
      Py_DECREF((void*)value);
      }
    Py_DECREF(keys);
    }
}
} // end of anonymous namespace
//-----------------------------------------------------------------------------
#if PY_MAJOR_VERSION >= 3

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "qSlicerModelsSubjectHierarchyPluginsPythonQt",                 /* m_name */
    "The qSlicerModelsSubjectHierarchyPluginsPythonQt module",      /* m_doc */
    -1,                                        /* m_size */
    PyqSlicerModelsSubjectHierarchyPluginsPythonQt_ClassMethods,    /* m_methods */
    NULL,                                      /* m_reload */
    NULL,                                      /* m_traverse */
    NULL,                                      /* m_clear */
    NULL,                                      /* m_free */
  };

#endif
//-----------------------------------------------------------------------------
#if PY_MAJOR_VERSION >= 3
PyObject* PyInit_qSlicerModelsSubjectHierarchyPluginsPythonQt()
#else
void initqSlicerModelsSubjectHierarchyPluginsPythonQt()
#endif
{
  #if PY_MAJOR_VERSION < 3
  static const char modulename[] = "qSlicerModelsSubjectHierarchyPluginsPythonQt";
  #endif

  PyObject *m;
  #if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
  #else
    m = Py_InitModule((char*)modulename, PyqSlicerModelsSubjectHierarchyPluginsPythonQt_ClassMethods);
  #endif
  extern void PythonQt_init_osm_qSlicerModelsSubjectHierarchyPlugins(PyObject*);
  PythonQt_init_osm_qSlicerModelsSubjectHierarchyPlugins(m);

#ifdef HAS_DECORATOR
  extern void initqSlicerModelsSubjectHierarchyPluginsPythonQtDecorators();
  initqSlicerModelsSubjectHierarchyPluginsPythonQtDecorators();
#endif

  // Since invoking 'PythonQt_init_osm_qSlicerModelsSubjectHierarchyPlugins', will create
  // the module "PythonQt.qSlicerModelsSubjectHierarchyPlugins". Let's copy its content into the current module.
  PythonQtObjectPtr currentModule = PyImport_ImportModule((char*)"PythonQt.qSlicerModelsSubjectHierarchyPlugins");
  if(currentModule.isNull())
    {
    PyErr_SetString(PyExc_ImportError, (char*)"Failed to import PythonQt.qSlicerModelsSubjectHierarchyPlugins");
#if PY_MAJOR_VERSION >= 3
    return NULL;
#else
    return;
#endif
    }
  copyAttributes(currentModule, m);
#if PY_MAJOR_VERSION >= 3
  return m;
#endif
}
