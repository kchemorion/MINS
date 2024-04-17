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
set(CTKAPPLAUNCHER_SPLASH_IMAGE_SUBDIR "/home/blvksh33p/Documents/MINS/Applications/MINSApp/Resources/Images/")
set(CTKAPPLAUNCHER_ADDITIONAL_SETTINGS_FILEPATH_SET "")
set(CTKAPPLAUNCHER_EXTRA_APPLICATION_TO_LAUNCH "
gnome-terminal/shortArgument=
gnome-terminal/help=Start gnome-terminal
gnome-terminal/path=/usr/bin/gnome-terminal
gnome-terminal/arguments=
")
set(CTKAPPLAUNCHER_LIBRARY_PATHS "1\\path=<APPLAUNCHER_SETTINGS_DIR>/bin/<CMAKE_CFG_INTDIR>
2\\path=../lib/MINS-5.6/qt-loadable-modules
3\\path=<APPLAUNCHER_SETTINGS_DIR>/lib/MINS-5.6/cli-modules/<CMAKE_CFG_INTDIR>
4\\path=<APPLAUNCHER_SETTINGS_DIR>/lib/MINS-5.6/qt-loadable-modules/<CMAKE_CFG_INTDIR>
5\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/OpenSSL
6\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib
7\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/tbb-install/lib/intel64/gcc4.8
8\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/lib/<CMAKE_CFG_INTDIR>
9\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build/bin/<CMAKE_CFG_INTDIR>
10\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/DCMTK-build/lib/<CMAKE_CFG_INTDIR>
11\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/ITK-build/lib/<CMAKE_CFG_INTDIR>
12\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build/bin/<CMAKE_CFG_INTDIR>
13\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/PythonQt-build/<CMAKE_CFG_INTDIR>
14\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/LibArchive-install/lib
15\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/SlicerExecutionModel-build/ModuleDescriptionParser/bin/<CMAKE_CFG_INTDIR>
16\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9/site-packages/numpy/core
17\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9/site-packages/numpy/lib
18\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/JsonCpp-build/src/lib_json/<CMAKE_CFG_INTDIR>
size=18")
set(CTKAPPLAUNCHER_PATHS "1\\path=<APPLAUNCHER_SETTINGS_DIR>/bin/<CMAKE_CFG_INTDIR>
2\\path=<APPLAUNCHER_SETTINGS_DIR>/lib/MINS-5.6/cli-modules/<CMAKE_CFG_INTDIR>
3\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/bin
4\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/teem-build/bin/<CMAKE_CFG_INTDIR>
size=4")
set(CTKAPPLAUNCHER_ENVVARS "SLICER_HOME=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/Slicer-build
ITK_AUTOLOAD_PATH=<APPLAUNCHER_SETTINGS_DIR>/lib/MINS-5.6/ITKFactories/<CMAKE_CFG_INTDIR>
PIP_REQUIRE_VIRTUALENV=0
SSL_CERT_FILE=<APPLAUNCHER_SETTINGS_DIR>/share/MINS-5.6/Slicer.crt
QTWEBENGINE_DISABLE_SANDBOX=1
PYTHONHOME=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install
PYTHONNOUSERSITE=1
PIP_DISABLE_PIP_VERSION_CHECK=1
")
set(CTKAPPLAUNCHER_ADDITIONAL_PATH_ENVVARS "QT_PLUGIN_PATH,PYTHONPATH,LibraryPaths")
set(CTKAPPLAUNCHER_ADDITIONAL_PATHS "

[QT_PLUGIN_PATH]
1\\path=<APPLAUNCHER_SETTINGS_DIR>/bin
2\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build/bin
3\\path=/usr/lib/plugins
size=3

[PYTHONPATH]
1\\path=<APPLAUNCHER_SETTINGS_DIR>/bin/<CMAKE_CFG_INTDIR>
2\\path=<APPLAUNCHER_SETTINGS_DIR>/bin/Python
3\\path=<APPLAUNCHER_SETTINGS_DIR>/lib/MINS-5.6/qt-loadable-modules/<CMAKE_CFG_INTDIR>
4\\path=<APPLAUNCHER_SETTINGS_DIR>/lib/MINS-5.6/qt-loadable-modules/Python
5\\path=<APPLAUNCHER_SETTINGS_DIR>/lib/MINS-5.6/qt-scripted-modules
6\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9
7\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9/lib-dynload
8\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/python-install/lib/python3.9/site-packages
9\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/VTK-build/lib/python3.9/site-packages
10\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build/bin/Python
11\\path=/home/blvksh33p/Documents/Slicer-SuperBuild-Debug/CTK-build/CTK-build/bin/<CMAKE_CFG_INTDIR>
size=11")
