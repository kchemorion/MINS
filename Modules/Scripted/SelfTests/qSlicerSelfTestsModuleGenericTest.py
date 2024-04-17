import unittest

class qSlicerSelfTestsModuleGenericTest(unittest.TestCase):

  def setUp(self):
    import slicer
    self.assertTrue(hasattr(slicer, 'modules'))
    self.assertTrue(hasattr(slicer.modules, 'selftests'))
    self.module = slicer.modules.selftests

  def test_file_attribute(self):
    self.assertRegexpMatches(__file__, r'qSlicerSelfTestsModuleGenericTest.py[c]?$')

  def test_name_attribute(self):
    self.assertEqual(__name__, 'qSlicerSelfTestsModuleGenericTest')

  def test_module_valid(self):
    self.assertNotEqual(self.module, None)
    self.assertEqual(self.module.name, 'SelfTests')

  def test_application(self):
    import slicer
    self.assertEqual(slicer.app.__class__.__name__, 'qSlicerApplication')

  def test_settings(self):
    import slicer
    import ctk
    self.assertIsInstance(slicer.app.settings(), ctk.ctkSettings)

  def test_categories(self):
    self.assertNotEqual(self.module.categories, "")

  def test_acknowledgementText(self):
    self.assertNotEqual(self.module.acknowledgementText, "")

  def test_contributors(self):
    self.assertNotEqual(self.module.contributors, "")

  def test_logic(self):
    self.assertEqual(self.module.logic(), self.module.logic())

  def test_widgetRepresentation(self):
    self.assertEqual(self.module.widgetRepresentation(), self.module.widgetRepresentation())

  def test_setMRMLScene(self):
    import slicer
    scene = slicer.vtkMRMLScene()
    self.module.setMRMLScene(scene)
    self.assertEqual(self.module.mrmlScene(), scene)
    self.module.setMRMLScene(slicer.mrmlScene)
    self.assertEqual(self.module.mrmlScene(), slicer.mrmlScene)

  def test_setCurrentModule(self):
    import slicer
    if not slicer.app.commandOptions().noMainWindow :
      mainWindow = slicer.util.mainWindow()
      mainWindow.moduleSelector().selectModule(self.module.name)

