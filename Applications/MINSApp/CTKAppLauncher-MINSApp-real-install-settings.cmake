# Common settings
set(CTKAPPLAUNCHER_SETTINGS_TEMPLATE "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTKAPPLAUNCHER/bin/CTKAppLauncherSettings.ini.in")
set(CTKAPPLAUNCHER_APPLICATION_EXECUTABLE_NAME "MINSApp-real")
set(CTKAPPLAUNCHER_APPLICATION_NAME "MINS")
set(CTKAPPLAUNCHER_APPLICATION_REVISION "32448")
set(CTKAPPLAUNCHER_ORGANIZATION_DOMAIN "disc4all.eu")
set(CTKAPPLAUNCHER_ORGANIZATION_NAME "DISC4ALL")
set(CTKAPPLAUNCHER_DESTINATION_DIR "/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build")
set(CTKAPPLAUNCHER_SPLASHSCREEN_DISABLED "false")
set(CTKAPPLAUNCHER_SPLASHSCREEN_HIDE_DELAY_MS "3000")
set(CTKAPPLAUNCHER_HELP_SHORT_ARG "-h")
set(CTKAPPLAUNCHER_HELP_LONG_ARG "--help")
set(CTKAPPLAUNCHER_NOSPLASH_ARGS "--no-splash,--help,--version,--home,--program-path,--no-main-window,--settings-path,--temporary-path")
set(CTKAPPLAUNCHER_APPLICATION_DEFAULT_ARGUMENTS "")
set(CTKAPPLAUNCHER_SPLASH_IMAGE_NAME "SplashScreen.png")
set(CTKAPPLAUNCHER_USER_ADDITIONAL_SETTINGS_FILEBASENAME_SET "")
set(CTKAPPLAUNCHER_LAUNCHER_LOAD_ENVIRONMENT_SET "")
set(CTKAPPLAUNCHER_ADDITIONAL_SETTINGS_EXCLUDE_GROUPS_SET "")
# Specific settings
set(CTKAPPLAUNCHER_APPLICATION_SUBDIR "<APPLAUNCHER_DIR>/bin/")
set(CTKAPPLAUNCHER_SPLASH_IMAGE_SUBDIR "<APPLAUNCHER_DIR>/bin/")
set(CTKAPPLAUNCHER_ADDITIONAL_SETTINGS_FILEPATH_SET "")
set(CTKAPPLAUNCHER_EXTRA_APPLICATION_TO_LAUNCH "")
set(CTKAPPLAUNCHER_LIBRARY_PATHS "1\\path=<APPLAUNCHER_SETTINGS_DIR>/../bin
2\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6
3\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/cli-modules
4\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/qt-loadable-modules
5\\path=../lib/MINS-5.6/qt-loadable-modules
6\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/Python/lib
7\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib
8\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/Teem-1.12.0
9\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/PythonQt
10\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/Python/lib/python3.9/site-packages/numpy/core
11\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/Python/lib/python3.9/site-packages/numpy/lib
size=11")
set(CTKAPPLAUNCHER_PATHS "1\\path=<APPLAUNCHER_SETTINGS_DIR>/../bin
2\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/cli-modules
3\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/qt-loadable-modules
size=3")
set(CTKAPPLAUNCHER_ENVVARS "SLICER_HOME=<APPLAUNCHER_SETTINGS_DIR>/..
ITK_AUTOLOAD_PATH=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/ITKFactories
PIP_REQUIRE_VIRTUALENV=0
SSL_CERT_FILE=<APPLAUNCHER_SETTINGS_DIR>/../share/MINS-5.6/Slicer.crt
QTWEBENGINE_DISABLE_SANDBOX=1
PYTHONHOME=<APPLAUNCHER_SETTINGS_DIR>/../lib/Python
PYTHONNOUSERSITE=1
PIP_DISABLE_PIP_VERSION_CHECK=1
")
set(CTKAPPLAUNCHER_ADDITIONAL_PATH_ENVVARS "QT_PLUGIN_PATH,PYTHONPATH,LibraryPaths")
set(CTKAPPLAUNCHER_ADDITIONAL_PATHS "

[QT_PLUGIN_PATH]
1\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/QtPlugins
size=1

[PYTHONPATH]
1\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6
2\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/qt-scripted-modules
3\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/qt-loadable-modules
4\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/vtkTeem
5\\path=<APPLAUNCHER_SETTINGS_DIR>/../bin/Python
6\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/MINS-5.6/qt-loadable-modules/Python
7\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/Python/lib/python3.9
8\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/Python/lib/python3.9/lib-dynload
9\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/Python/lib/python3.9/site-packages
10\\path=<APPLAUNCHER_SETTINGS_DIR>/../lib/python3.9/site-packages
size=10")