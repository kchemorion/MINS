#include <ctype.h>  /* NOLINT */
#include <stdio.h>  /* NOLINT */
#include <stdlib.h> /* NOLINT */
#include <string.h> /* NOLINT */
#include <time.h>   /* NOLINT */

#if defined(_MSC_VER)
#pragma warning(disable : 4996) /* deprecation */
#endif

#include "qMRMLWidgetCxxTests.h"


/* Forward declare test functions. */
int qMRMLCheckableNodeComboBoxTest(int, char*[]);
int qMRMLCheckableNodeComboBoxTest1(int, char*[]);
int qMRMLClipNodeWidgetTest1(int, char*[]);
int qMRMLCollapsibleButtonTest(int, char*[]);
int qMRMLColorListViewTest1(int, char*[]);
int qMRMLColorModelTest(int, char*[]);
int qMRMLColorModelTest1(int, char*[]);
int qMRMLColorPickerWidgetTest1(int, char*[]);
int qMRMLColorPickerWidgetTest2(int, char*[]);
int qMRMLColorPickerWidgetTest3(int, char*[]);
int qMRMLColorTableComboBoxTest1(int, char*[]);
int qMRMLColorTableViewTest1(int, char*[]);
int qMRMLDisplayNodeViewComboBoxTest(int, char*[]);
int qMRMLDisplayNodeWidgetTest1(int, char*[]);
int qMRMLLayoutManagerTest1(int, char*[]);
int qMRMLLayoutManagerTest2(int, char*[]);
int qMRMLLayoutManagerTest3(int, char*[]);
int qMRMLLayoutManagerTest4(int, char*[]);
int qMRMLLayoutManagerVisibilityTest(int, char*[]);
int qMRMLLayoutManagerWithCustomFactoryTest(int, char*[]);
int qMRMLLinearTransformSliderTest1(int, char*[]);
int qMRMLListWidgetTest1(int, char*[]);
int qMRMLMatrixWidgetTest1(int, char*[]);
int qMRMLModelInfoWidgetTest1(int, char*[]);
int qMRMLModelTest1(int, char*[]);
int qMRMLModelTreeViewTest1(int, char*[]);
int qMRMLLabelComboBoxTest(int, char*[]);
int qMRMLNavigationViewTest1(int, char*[]);
int qMRMLNodeAttributeTableViewTest(int, char*[]);
int qMRMLNodeAttributeTableWidgetTest(int, char*[]);
int qMRMLNodeComboBoxTest1(int, char*[]);
int qMRMLNodeComboBoxTest2(int, char*[]);
int qMRMLNodeComboBoxTest3(int, char*[]);
int qMRMLNodeComboBoxTest4(int, char*[]);
int qMRMLNodeComboBoxTest5(int, char*[]);
int qMRMLNodeComboBoxTest6(int, char*[]);
int qMRMLNodeComboBoxTest7(int, char*[]);
int qMRMLNodeComboBoxTest8(int, char*[]);
int qMRMLNodeComboBoxTest9(int, char*[]);
int qMRMLNodeComboBoxLazyUpdateTest1(int, char*[]);
int qMRMLNodeFactoryTest1(int, char*[]);
int qMRMLPlotViewTest1(int, char*[]);
int qMRMLScalarInvariantComboBoxTest1(int, char*[]);
int qMRMLSceneCategoryModelTest1(int, char*[]);
int qMRMLSceneColorTableModelTest1(int, char*[]);
int qMRMLSceneFactoryWidgetTest1(int, char*[]);
int qMRMLSceneHierarchyModelTest1(int, char*[]);
int qMRMLSceneModelTest(int, char*[]);
int qMRMLSceneModelTest1(int, char*[]);
int qMRMLSceneTransformModelTest1(int, char*[]);
int qMRMLSceneTransformModelTest2(int, char*[]);
int qMRMLSceneDisplayableModelTest1(int, char*[]);
int qMRMLSceneDisplayableModelTest2(int, char*[]);
int qMRMLSegmentSelectorWidgetTest1(int, char*[]);
int qMRMLSliceControllerWidgetTest(int, char*[]);
int qMRMLSliceWidgetTest1(int, char*[]);
int qMRMLSliceWidgetTest2(int, char*[]);
int qMRMLTableViewTest1(int, char*[]);
int qMRMLTransformSlidersTest1(int, char*[]);
int qMRMLThreeDViewTest1(int, char*[]);
int qMRMLThreeDWidgetTest1(int, char*[]);
int qMRMLTreeViewTest1(int, char*[]);
int qMRMLUtf8Test1(int, char*[]);
int qMRMLUtilsTest1(int, char*[]);
int qMRMLVolumeInfoWidgetTest1(int, char*[]);
int qMRMLVolumeThresholdWidgetTest1(int, char*[]);
int qMRMLVolumeThresholdWidgetTest2(int, char*[]);
int qMRMLWidgetsExportTest1(int, char*[]);
int qMRMLWindowLevelWidgetTest1(int, char*[]);


#ifdef __cplusplus
#  define CM_CAST(TYPE, EXPR) static_cast<TYPE>(EXPR)
#  if __cplusplus >= 201103L
#    define CM_NULL nullptr
#  else
#    define CM_NULL NULL
#  endif
#  define CM_NAMESPACE_BEGIN namespace {
#  define CM_NAMESPACE_END }
#  define CM_LOCAL
#else
#  define CM_CAST(TYPE, EXPR) (TYPE)(EXPR)
#  define CM_NULL NULL
#  define CM_NAMESPACE_BEGIN
#  define CM_NAMESPACE_END
#  define CM_LOCAL static
#endif

CM_NAMESPACE_BEGIN

/* Create map.  */

typedef int (*MainFuncPointer)(int, char* []); /* NOLINT */
typedef struct /* NOLINT */
{
  const char* name;
  MainFuncPointer func;
} functionMapEntry;

CM_LOCAL const functionMapEntry cmakeGeneratedFunctionMapEntries[] = {
    {
    "qMRMLCheckableNodeComboBoxTest",
    qMRMLCheckableNodeComboBoxTest
  },
  {
    "qMRMLCheckableNodeComboBoxTest1",
    qMRMLCheckableNodeComboBoxTest1
  },
  {
    "qMRMLClipNodeWidgetTest1",
    qMRMLClipNodeWidgetTest1
  },
  {
    "qMRMLCollapsibleButtonTest",
    qMRMLCollapsibleButtonTest
  },
  {
    "qMRMLColorListViewTest1",
    qMRMLColorListViewTest1
  },
  {
    "qMRMLColorModelTest",
    qMRMLColorModelTest
  },
  {
    "qMRMLColorModelTest1",
    qMRMLColorModelTest1
  },
  {
    "qMRMLColorPickerWidgetTest1",
    qMRMLColorPickerWidgetTest1
  },
  {
    "qMRMLColorPickerWidgetTest2",
    qMRMLColorPickerWidgetTest2
  },
  {
    "qMRMLColorPickerWidgetTest3",
    qMRMLColorPickerWidgetTest3
  },
  {
    "qMRMLColorTableComboBoxTest1",
    qMRMLColorTableComboBoxTest1
  },
  {
    "qMRMLColorTableViewTest1",
    qMRMLColorTableViewTest1
  },
  {
    "qMRMLDisplayNodeViewComboBoxTest",
    qMRMLDisplayNodeViewComboBoxTest
  },
  {
    "qMRMLDisplayNodeWidgetTest1",
    qMRMLDisplayNodeWidgetTest1
  },
  {
    "qMRMLLayoutManagerTest1",
    qMRMLLayoutManagerTest1
  },
  {
    "qMRMLLayoutManagerTest2",
    qMRMLLayoutManagerTest2
  },
  {
    "qMRMLLayoutManagerTest3",
    qMRMLLayoutManagerTest3
  },
  {
    "qMRMLLayoutManagerTest4",
    qMRMLLayoutManagerTest4
  },
  {
    "qMRMLLayoutManagerVisibilityTest",
    qMRMLLayoutManagerVisibilityTest
  },
  {
    "qMRMLLayoutManagerWithCustomFactoryTest",
    qMRMLLayoutManagerWithCustomFactoryTest
  },
  {
    "qMRMLLinearTransformSliderTest1",
    qMRMLLinearTransformSliderTest1
  },
  {
    "qMRMLListWidgetTest1",
    qMRMLListWidgetTest1
  },
  {
    "qMRMLMatrixWidgetTest1",
    qMRMLMatrixWidgetTest1
  },
  {
    "qMRMLModelInfoWidgetTest1",
    qMRMLModelInfoWidgetTest1
  },
  {
    "qMRMLModelTest1",
    qMRMLModelTest1
  },
  {
    "qMRMLModelTreeViewTest1",
    qMRMLModelTreeViewTest1
  },
  {
    "qMRMLLabelComboBoxTest",
    qMRMLLabelComboBoxTest
  },
  {
    "qMRMLNavigationViewTest1",
    qMRMLNavigationViewTest1
  },
  {
    "qMRMLNodeAttributeTableViewTest",
    qMRMLNodeAttributeTableViewTest
  },
  {
    "qMRMLNodeAttributeTableWidgetTest",
    qMRMLNodeAttributeTableWidgetTest
  },
  {
    "qMRMLNodeComboBoxTest1",
    qMRMLNodeComboBoxTest1
  },
  {
    "qMRMLNodeComboBoxTest2",
    qMRMLNodeComboBoxTest2
  },
  {
    "qMRMLNodeComboBoxTest3",
    qMRMLNodeComboBoxTest3
  },
  {
    "qMRMLNodeComboBoxTest4",
    qMRMLNodeComboBoxTest4
  },
  {
    "qMRMLNodeComboBoxTest5",
    qMRMLNodeComboBoxTest5
  },
  {
    "qMRMLNodeComboBoxTest6",
    qMRMLNodeComboBoxTest6
  },
  {
    "qMRMLNodeComboBoxTest7",
    qMRMLNodeComboBoxTest7
  },
  {
    "qMRMLNodeComboBoxTest8",
    qMRMLNodeComboBoxTest8
  },
  {
    "qMRMLNodeComboBoxTest9",
    qMRMLNodeComboBoxTest9
  },
  {
    "qMRMLNodeComboBoxLazyUpdateTest1",
    qMRMLNodeComboBoxLazyUpdateTest1
  },
  {
    "qMRMLNodeFactoryTest1",
    qMRMLNodeFactoryTest1
  },
  {
    "qMRMLPlotViewTest1",
    qMRMLPlotViewTest1
  },
  {
    "qMRMLScalarInvariantComboBoxTest1",
    qMRMLScalarInvariantComboBoxTest1
  },
  {
    "qMRMLSceneCategoryModelTest1",
    qMRMLSceneCategoryModelTest1
  },
  {
    "qMRMLSceneColorTableModelTest1",
    qMRMLSceneColorTableModelTest1
  },
  {
    "qMRMLSceneFactoryWidgetTest1",
    qMRMLSceneFactoryWidgetTest1
  },
  {
    "qMRMLSceneHierarchyModelTest1",
    qMRMLSceneHierarchyModelTest1
  },
  {
    "qMRMLSceneModelTest",
    qMRMLSceneModelTest
  },
  {
    "qMRMLSceneModelTest1",
    qMRMLSceneModelTest1
  },
  {
    "qMRMLSceneTransformModelTest1",
    qMRMLSceneTransformModelTest1
  },
  {
    "qMRMLSceneTransformModelTest2",
    qMRMLSceneTransformModelTest2
  },
  {
    "qMRMLSceneDisplayableModelTest1",
    qMRMLSceneDisplayableModelTest1
  },
  {
    "qMRMLSceneDisplayableModelTest2",
    qMRMLSceneDisplayableModelTest2
  },
  {
    "qMRMLSegmentSelectorWidgetTest1",
    qMRMLSegmentSelectorWidgetTest1
  },
  {
    "qMRMLSliceControllerWidgetTest",
    qMRMLSliceControllerWidgetTest
  },
  {
    "qMRMLSliceWidgetTest1",
    qMRMLSliceWidgetTest1
  },
  {
    "qMRMLSliceWidgetTest2",
    qMRMLSliceWidgetTest2
  },
  {
    "qMRMLTableViewTest1",
    qMRMLTableViewTest1
  },
  {
    "qMRMLTransformSlidersTest1",
    qMRMLTransformSlidersTest1
  },
  {
    "qMRMLThreeDViewTest1",
    qMRMLThreeDViewTest1
  },
  {
    "qMRMLThreeDWidgetTest1",
    qMRMLThreeDWidgetTest1
  },
  {
    "qMRMLTreeViewTest1",
    qMRMLTreeViewTest1
  },
  {
    "qMRMLUtf8Test1",
    qMRMLUtf8Test1
  },
  {
    "qMRMLUtilsTest1",
    qMRMLUtilsTest1
  },
  {
    "qMRMLVolumeInfoWidgetTest1",
    qMRMLVolumeInfoWidgetTest1
  },
  {
    "qMRMLVolumeThresholdWidgetTest1",
    qMRMLVolumeThresholdWidgetTest1
  },
  {
    "qMRMLVolumeThresholdWidgetTest2",
    qMRMLVolumeThresholdWidgetTest2
  },
  {
    "qMRMLWidgetsExportTest1",
    qMRMLWidgetsExportTest1
  },
  {
    "qMRMLWindowLevelWidgetTest1",
    qMRMLWindowLevelWidgetTest1
  },

  { CM_NULL, CM_NULL } /* NOLINT */
};

CM_LOCAL const int NumTests = CM_CAST(int,
  sizeof(cmakeGeneratedFunctionMapEntries) / sizeof(functionMapEntry)) - 1;

/* Allocate and create a lowercased copy of string
   (note that it has to be free'd manually) */
CM_LOCAL char* lowercase(const char* string)
{
  char *new_string;
  char *p;
  size_t stringSize;

  stringSize = CM_CAST(size_t, strlen(string) + 1);
  new_string = CM_CAST(char*, malloc(sizeof(char) * stringSize));

  if (new_string == CM_NULL) { /* NOLINT */
    return CM_NULL;            /* NOLINT */
  }
  strcpy(new_string, string);  /* NOLINT */
  for (p = new_string; *p != 0; ++p) {
    *p = CM_CAST(char, tolower(*p));
  }
  return new_string;
}

CM_LOCAL int isTestSkipped(const char *name, int n_skipped_tests, char *skipped_tests[]) {
  int i;
  for (i = 0; i < n_skipped_tests; i++) {
    if (strcmp(name, skipped_tests[i]) == 0) {
      return 1;
    }
  }

  return 0;
}

CM_NAMESPACE_END

int main(int ac, char* av[])
{
  int i;
  int testNum = 0;
  int partial_match;
  int run_all;
  char *arg;
  int testToRun = -1;

  

  /* If no test name was given */
  /* process command line with user function.  */
  if (ac < 2) {
    /* Ask for a test.  */
    printf("Available tests:\n");
    for (i = 0; i < NumTests; ++i) {
      printf("%3d. %s\n", i, cmakeGeneratedFunctionMapEntries[i].name);
    }
    printf("To run a test, enter the test number: ");
    fflush(stdout);
    if (scanf("%d", &testNum) != 1) {
      printf("Couldn't parse that input as a number\n");
      return -1;
    }
    if (testNum >= NumTests) {
      printf("%3d is an invalid test number.\n", testNum);
      return -1;
    }
    testToRun = testNum;
    ac--;
    av++;
  }
  partial_match = 0;
  run_all = 0;
  arg = CM_NULL; /* NOLINT */
  /* If partial match or running all tests are requested.  */
  if (testToRun == -1 && ac > 1) {
    partial_match = (strcmp(av[1], "-R") == 0) ? 1 : 0;
    run_all = (strcmp(av[1], "-A") == 0) ? 1 : 0;
  }
  if (partial_match != 0 && ac < 3) {
    printf("-R needs an additional parameter.\n");
    return -1;
  }
  if (run_all == 1) {
    clock_t t;
    int status = 0;
    const char* status_message = CM_NULL;
    printf("TAP version 13\n");
    printf("1..%d\n", NumTests);
    for (i = 0; i < NumTests; ++i) {
      const char *name = cmakeGeneratedFunctionMapEntries[i].name;
      if (ac > 2) {
        if (isTestSkipped(name, ac - 2, av + 2) == 1) {
          printf("ok %d %s # SKIP\n", i + 1, name);
          continue;
        }
      }
      t = clock();
      status = (*cmakeGeneratedFunctionMapEntries[i].func)(ac, av);
      t = clock() - t;
      status_message = (status == -1) ? "not ok" : "ok";
      {
        double time_taken = CM_CAST(double, t) / CLOCKS_PER_SEC;
        printf("%s %d %s # %f\n", status_message, i + 1, name, time_taken);
      }
    }
    printf("All tests finished.\n");

    return 0;
  }

  if (testToRun == -1) {
    arg = lowercase(av[1 + partial_match]);
  }
  for (i = 0; i < NumTests && testToRun == -1; ++i) {
    char *test_name = lowercase(cmakeGeneratedFunctionMapEntries[i].name);
    if (partial_match != 0 && strstr(test_name, arg) != CM_NULL) { /* NOLINT */
      testToRun = i;
      ac -= 2;
      av += 2;
    } else if (partial_match == 0 && strcmp(test_name, arg) == 0) {
      testToRun = i;
      ac--;
      av++;
    }
    free(test_name);
  }
  free(arg);
  if (testToRun != -1) {
    int result;

  TESTING_OUTPUT_INIT();
  itk::itkFactoryRegistration();
  
    if (testToRun < 0 || testToRun >= NumTests) {
      printf("testToRun was modified by TestDriver code to an invalid value: "
             "%3d.\n",
             testNum);
      return -1;
    }
    result = (*cmakeGeneratedFunctionMapEntries[testToRun].func)(ac, av);

  TESTING_OUTPUT_ASSERT_WARNINGS_ERRORS(0);
  DEBUG_LEAKS_ENABLE_EXIT_ERROR();
  
    return result;
  }

  /* Nothing was run, display the test names.  */
  printf("Available tests:\n");
  for (i = 0; i < NumTests; ++i) {
    printf("%3d. %s\n", i, cmakeGeneratedFunctionMapEntries[i].name);
  }
  printf("Failed: %s is an invalid test name.\n", av[1]);

  return -1;
}
