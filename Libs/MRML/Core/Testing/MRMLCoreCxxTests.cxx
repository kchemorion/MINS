#include <ctype.h>  /* NOLINT */
#include <stdio.h>  /* NOLINT */
#include <stdlib.h> /* NOLINT */
#include <string.h> /* NOLINT */
#include <time.h>   /* NOLINT */

#if defined(_MSC_VER)
#pragma warning(disable : 4996) /* deprecation */
#endif

#include "vtkMRMLDebugLeaksMacro.h"
#include "vtkTestingOutputWindow.h"


/* Forward declare test functions. */
int vtkMRMLBSplineTransformNodeTest1(int, char*[]);
int vtkMRMLCameraNodeTest1(int, char*[]);
int vtkMRMLClipModelsNodeTest1(int, char*[]);
int vtkMRMLColorNodeTest1(int, char*[]);
int vtkMRMLColorTableNodeTest1(int, char*[]);
int vtkMRMLColorTableStorageNodeTest1(int, char*[]);
int vtkMRMLCoreTestingUtilitiesTest(int, char*[]);
int vtkMRMLCrosshairNodeTest1(int, char*[]);
int vtkMRMLDiffusionImageVolumeNodeTest1(int, char*[]);
int vtkMRMLDiffusionTensorDisplayPropertiesNodeTest1(int, char*[]);
int vtkMRMLDiffusionTensorVolumeDisplayNodeTest1(int, char*[]);
int vtkMRMLDiffusionTensorVolumeNodeTest1(int, char*[]);
int vtkMRMLDiffusionTensorVolumeSliceDisplayNodeTest1(int, char*[]);
int vtkMRMLDiffusionWeightedVolumeDisplayNodeTest1(int, char*[]);
int vtkMRMLDiffusionWeightedVolumeNodeTest1(int, char*[]);
int vtkMRMLDisplayNodeTest1(int, char*[]);
int vtkMRMLDisplayableHierarchyNodeDisplayPropertiesTest(int, char*[]);
int vtkMRMLDisplayableHierarchyNodeTest1(int, char*[]);
int vtkMRMLDisplayableHierarchyNodeTest2(int, char*[]);
int vtkMRMLDisplayableHierarchyNodeTest3(int, char*[]);
int vtkMRMLDisplayableNodeTest1(int, char*[]);
int vtkMRMLGlyphableVolumeDisplayNodeTest1(int, char*[]);
int vtkMRMLGlyphableVolumeSliceDisplayNodeTest1(int, char*[]);
int vtkMRMLGridTransformNodeTest1(int, char*[]);
int vtkMRMLHierarchyNodeTest1(int, char*[]);
int vtkMRMLHierarchyNodeTest3(int, char*[]);
int vtkMRMLI18NTest1(int, char*[]);
int vtkMRMLInteractionNodeTest1(int, char*[]);
int vtkMRMLLabelMapVolumeDisplayNodeTest1(int, char*[]);
int vtkMRMLLayoutNodeTest1(int, char*[]);
int vtkMRMLLinearTransformNodeEventsTest(int, char*[]);
int vtkMRMLLinearTransformNodeTest1(int, char*[]);
int vtkMRMLModelDisplayNodeTest1(int, char*[]);
int vtkMRMLModelHierarchyNodeTest1(int, char*[]);
int vtkMRMLModelNodeTest1(int, char*[]);
int vtkMRMLModelStorageNodeTest1(int, char*[]);
int vtkMRMLNRRDStorageNodeTest1(int, char*[]);
int vtkMRMLNodeTest1(int, char*[]);
int vtkMRMLNonlinearTransformNodeTest1(int, char*[]);
int vtkMRMLPETProceduralColorNodeTest1(int, char*[]);
int vtkMRMLPlotChartNodeTest1(int, char*[]);
int vtkMRMLPlotSeriesNodeTest1(int, char*[]);
int vtkMRMLPlotViewNodeTest1(int, char*[]);
int vtkMRMLProceduralColorNodeTest1(int, char*[]);
int vtkMRMLProceduralColorStorageNodeTest1(int, char*[]);
int vtkMRMLROIListNodeTest1(int, char*[]);
int vtkMRMLROINodeTest1(int, char*[]);
int vtkMRMLScalarVolumeDisplayNodeTest1(int, char*[]);
int vtkMRMLScalarVolumeNodeTest1(int, char*[]);
int vtkMRMLScalarVolumeNodeTest2(int, char*[]);
int vtkMRMLSceneAddSingletonTest(int, char*[]);
int vtkMRMLSceneBatchProcessTest(int, char*[]);
int vtkMRMLSceneIDTest(int, char*[]);
int vtkMRMLSceneImportIDConflictTest(int, char*[]);
int vtkMRMLSceneImportIDModelHierarchyConflictTest(int, char*[]);
int vtkMRMLSceneImportIDModelHierarchyParentIDConflictTest(int, char*[]);
int vtkMRMLSceneImportTest(int, char*[]);
int vtkMRMLSceneTest1(int, char*[]);
int vtkMRMLSceneTest2(int, char*[]);
int vtkMRMLSceneDefaultNodeTest(int, char*[]);
int vtkMRMLSceneViewNodeTest1(int, char*[]);
int vtkMRMLSceneViewStorageNodeTest1(int, char*[]);
int vtkMRMLScriptedModuleNodeTest1(int, char*[]);
int vtkMRMLSegmentationStorageNodeTest1(int, char*[]);
int vtkMRMLSelectionNodeTest1(int, char*[]);
int vtkMRMLSliceCompositeNodeTest1(int, char*[]);
int vtkMRMLSliceNodeTest1(int, char*[]);
int vtkMRMLSnapshotClipNodeTest1(int, char*[]);
int vtkMRMLStorableNodeTest1(int, char*[]);
int vtkMRMLStorageNodeTest1(int, char*[]);
int vtkMRMLStreamingVolumeNodeTest1(int, char*[]);
int vtkMRMLTableNodeTest1(int, char*[]);
int vtkMRMLTableStorageNodeTest1(int, char*[]);
int vtkMRMLTableSQLiteStorageNodeTest(int, char*[]);
int vtkMRMLTableViewNodeTest1(int, char*[]);
int vtkMRMLTensorVolumeNodeTest1(int, char*[]);
int vtkMRMLTextNodeTest1(int, char*[]);
int vtkMRMLTextStorageNodeTest1(int, char*[]);
int vtkMRMLTransformableNodeReferenceSaveImportTest(int, char*[]);
int vtkMRMLTransformableNodeOnNodeReferenceAddTest(int, char*[]);
int vtkMRMLTransformDisplayNodeTest1(int, char*[]);
int vtkMRMLTransformNodeTest1(int, char*[]);
int vtkMRMLTransformStorageNodeTest1(int, char*[]);
int vtkMRMLTransformableNodeTest1(int, char*[]);
int vtkMRMLUnitNodeTest1(int, char*[]);
int vtkMRMLVectorVolumeDisplayNodeTest1(int, char*[]);
int vtkMRMLVectorVolumeNodeTest1(int, char*[]);
int vtkMRMLViewNodeTest1(int, char*[]);
int vtkMRMLVolumeArchetypeStorageNodeTest1(int, char*[]);
int vtkMRMLVolumeDisplayNodeTest1(int, char*[]);
int vtkMRMLVolumeHeaderlessStorageNodeTest1(int, char*[]);
int vtkMRMLVolumeNodeEventsTest(int, char*[]);
int vtkMRMLVolumeNodeTest1(int, char*[]);
int vtkMRMLdGEMRICProceduralColorNodeTest1(int, char*[]);
int vtkArchiveTest1(int, char*[]);
int vtkCodedEntryTest1(int, char*[]);
int vtkObserverManagerTest1(int, char*[]);
int vtkOrientedBSplineTransformTest1(int, char*[]);
int vtkOrientedGridTransformTest1(int, char*[]);
int vtkThinPlateSplineTransformTest1(int, char*[]);


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
    "vtkMRMLBSplineTransformNodeTest1",
    vtkMRMLBSplineTransformNodeTest1
  },
  {
    "vtkMRMLCameraNodeTest1",
    vtkMRMLCameraNodeTest1
  },
  {
    "vtkMRMLClipModelsNodeTest1",
    vtkMRMLClipModelsNodeTest1
  },
  {
    "vtkMRMLColorNodeTest1",
    vtkMRMLColorNodeTest1
  },
  {
    "vtkMRMLColorTableNodeTest1",
    vtkMRMLColorTableNodeTest1
  },
  {
    "vtkMRMLColorTableStorageNodeTest1",
    vtkMRMLColorTableStorageNodeTest1
  },
  {
    "vtkMRMLCoreTestingUtilitiesTest",
    vtkMRMLCoreTestingUtilitiesTest
  },
  {
    "vtkMRMLCrosshairNodeTest1",
    vtkMRMLCrosshairNodeTest1
  },
  {
    "vtkMRMLDiffusionImageVolumeNodeTest1",
    vtkMRMLDiffusionImageVolumeNodeTest1
  },
  {
    "vtkMRMLDiffusionTensorDisplayPropertiesNodeTest1",
    vtkMRMLDiffusionTensorDisplayPropertiesNodeTest1
  },
  {
    "vtkMRMLDiffusionTensorVolumeDisplayNodeTest1",
    vtkMRMLDiffusionTensorVolumeDisplayNodeTest1
  },
  {
    "vtkMRMLDiffusionTensorVolumeNodeTest1",
    vtkMRMLDiffusionTensorVolumeNodeTest1
  },
  {
    "vtkMRMLDiffusionTensorVolumeSliceDisplayNodeTest1",
    vtkMRMLDiffusionTensorVolumeSliceDisplayNodeTest1
  },
  {
    "vtkMRMLDiffusionWeightedVolumeDisplayNodeTest1",
    vtkMRMLDiffusionWeightedVolumeDisplayNodeTest1
  },
  {
    "vtkMRMLDiffusionWeightedVolumeNodeTest1",
    vtkMRMLDiffusionWeightedVolumeNodeTest1
  },
  {
    "vtkMRMLDisplayNodeTest1",
    vtkMRMLDisplayNodeTest1
  },
  {
    "vtkMRMLDisplayableHierarchyNodeDisplayPropertiesTest",
    vtkMRMLDisplayableHierarchyNodeDisplayPropertiesTest
  },
  {
    "vtkMRMLDisplayableHierarchyNodeTest1",
    vtkMRMLDisplayableHierarchyNodeTest1
  },
  {
    "vtkMRMLDisplayableHierarchyNodeTest2",
    vtkMRMLDisplayableHierarchyNodeTest2
  },
  {
    "vtkMRMLDisplayableHierarchyNodeTest3",
    vtkMRMLDisplayableHierarchyNodeTest3
  },
  {
    "vtkMRMLDisplayableNodeTest1",
    vtkMRMLDisplayableNodeTest1
  },
  {
    "vtkMRMLGlyphableVolumeDisplayNodeTest1",
    vtkMRMLGlyphableVolumeDisplayNodeTest1
  },
  {
    "vtkMRMLGlyphableVolumeSliceDisplayNodeTest1",
    vtkMRMLGlyphableVolumeSliceDisplayNodeTest1
  },
  {
    "vtkMRMLGridTransformNodeTest1",
    vtkMRMLGridTransformNodeTest1
  },
  {
    "vtkMRMLHierarchyNodeTest1",
    vtkMRMLHierarchyNodeTest1
  },
  {
    "vtkMRMLHierarchyNodeTest3",
    vtkMRMLHierarchyNodeTest3
  },
  {
    "vtkMRMLI18NTest1",
    vtkMRMLI18NTest1
  },
  {
    "vtkMRMLInteractionNodeTest1",
    vtkMRMLInteractionNodeTest1
  },
  {
    "vtkMRMLLabelMapVolumeDisplayNodeTest1",
    vtkMRMLLabelMapVolumeDisplayNodeTest1
  },
  {
    "vtkMRMLLayoutNodeTest1",
    vtkMRMLLayoutNodeTest1
  },
  {
    "vtkMRMLLinearTransformNodeEventsTest",
    vtkMRMLLinearTransformNodeEventsTest
  },
  {
    "vtkMRMLLinearTransformNodeTest1",
    vtkMRMLLinearTransformNodeTest1
  },
  {
    "vtkMRMLModelDisplayNodeTest1",
    vtkMRMLModelDisplayNodeTest1
  },
  {
    "vtkMRMLModelHierarchyNodeTest1",
    vtkMRMLModelHierarchyNodeTest1
  },
  {
    "vtkMRMLModelNodeTest1",
    vtkMRMLModelNodeTest1
  },
  {
    "vtkMRMLModelStorageNodeTest1",
    vtkMRMLModelStorageNodeTest1
  },
  {
    "vtkMRMLNRRDStorageNodeTest1",
    vtkMRMLNRRDStorageNodeTest1
  },
  {
    "vtkMRMLNodeTest1",
    vtkMRMLNodeTest1
  },
  {
    "vtkMRMLNonlinearTransformNodeTest1",
    vtkMRMLNonlinearTransformNodeTest1
  },
  {
    "vtkMRMLPETProceduralColorNodeTest1",
    vtkMRMLPETProceduralColorNodeTest1
  },
  {
    "vtkMRMLPlotChartNodeTest1",
    vtkMRMLPlotChartNodeTest1
  },
  {
    "vtkMRMLPlotSeriesNodeTest1",
    vtkMRMLPlotSeriesNodeTest1
  },
  {
    "vtkMRMLPlotViewNodeTest1",
    vtkMRMLPlotViewNodeTest1
  },
  {
    "vtkMRMLProceduralColorNodeTest1",
    vtkMRMLProceduralColorNodeTest1
  },
  {
    "vtkMRMLProceduralColorStorageNodeTest1",
    vtkMRMLProceduralColorStorageNodeTest1
  },
  {
    "vtkMRMLROIListNodeTest1",
    vtkMRMLROIListNodeTest1
  },
  {
    "vtkMRMLROINodeTest1",
    vtkMRMLROINodeTest1
  },
  {
    "vtkMRMLScalarVolumeDisplayNodeTest1",
    vtkMRMLScalarVolumeDisplayNodeTest1
  },
  {
    "vtkMRMLScalarVolumeNodeTest1",
    vtkMRMLScalarVolumeNodeTest1
  },
  {
    "vtkMRMLScalarVolumeNodeTest2",
    vtkMRMLScalarVolumeNodeTest2
  },
  {
    "vtkMRMLSceneAddSingletonTest",
    vtkMRMLSceneAddSingletonTest
  },
  {
    "vtkMRMLSceneBatchProcessTest",
    vtkMRMLSceneBatchProcessTest
  },
  {
    "vtkMRMLSceneIDTest",
    vtkMRMLSceneIDTest
  },
  {
    "vtkMRMLSceneImportIDConflictTest",
    vtkMRMLSceneImportIDConflictTest
  },
  {
    "vtkMRMLSceneImportIDModelHierarchyConflictTest",
    vtkMRMLSceneImportIDModelHierarchyConflictTest
  },
  {
    "vtkMRMLSceneImportIDModelHierarchyParentIDConflictTest",
    vtkMRMLSceneImportIDModelHierarchyParentIDConflictTest
  },
  {
    "vtkMRMLSceneImportTest",
    vtkMRMLSceneImportTest
  },
  {
    "vtkMRMLSceneTest1",
    vtkMRMLSceneTest1
  },
  {
    "vtkMRMLSceneTest2",
    vtkMRMLSceneTest2
  },
  {
    "vtkMRMLSceneDefaultNodeTest",
    vtkMRMLSceneDefaultNodeTest
  },
  {
    "vtkMRMLSceneViewNodeTest1",
    vtkMRMLSceneViewNodeTest1
  },
  {
    "vtkMRMLSceneViewStorageNodeTest1",
    vtkMRMLSceneViewStorageNodeTest1
  },
  {
    "vtkMRMLScriptedModuleNodeTest1",
    vtkMRMLScriptedModuleNodeTest1
  },
  {
    "vtkMRMLSegmentationStorageNodeTest1",
    vtkMRMLSegmentationStorageNodeTest1
  },
  {
    "vtkMRMLSelectionNodeTest1",
    vtkMRMLSelectionNodeTest1
  },
  {
    "vtkMRMLSliceCompositeNodeTest1",
    vtkMRMLSliceCompositeNodeTest1
  },
  {
    "vtkMRMLSliceNodeTest1",
    vtkMRMLSliceNodeTest1
  },
  {
    "vtkMRMLSnapshotClipNodeTest1",
    vtkMRMLSnapshotClipNodeTest1
  },
  {
    "vtkMRMLStorableNodeTest1",
    vtkMRMLStorableNodeTest1
  },
  {
    "vtkMRMLStorageNodeTest1",
    vtkMRMLStorageNodeTest1
  },
  {
    "vtkMRMLStreamingVolumeNodeTest1",
    vtkMRMLStreamingVolumeNodeTest1
  },
  {
    "vtkMRMLTableNodeTest1",
    vtkMRMLTableNodeTest1
  },
  {
    "vtkMRMLTableStorageNodeTest1",
    vtkMRMLTableStorageNodeTest1
  },
  {
    "vtkMRMLTableSQLiteStorageNodeTest",
    vtkMRMLTableSQLiteStorageNodeTest
  },
  {
    "vtkMRMLTableViewNodeTest1",
    vtkMRMLTableViewNodeTest1
  },
  {
    "vtkMRMLTensorVolumeNodeTest1",
    vtkMRMLTensorVolumeNodeTest1
  },
  {
    "vtkMRMLTextNodeTest1",
    vtkMRMLTextNodeTest1
  },
  {
    "vtkMRMLTextStorageNodeTest1",
    vtkMRMLTextStorageNodeTest1
  },
  {
    "vtkMRMLTransformableNodeReferenceSaveImportTest",
    vtkMRMLTransformableNodeReferenceSaveImportTest
  },
  {
    "vtkMRMLTransformableNodeOnNodeReferenceAddTest",
    vtkMRMLTransformableNodeOnNodeReferenceAddTest
  },
  {
    "vtkMRMLTransformDisplayNodeTest1",
    vtkMRMLTransformDisplayNodeTest1
  },
  {
    "vtkMRMLTransformNodeTest1",
    vtkMRMLTransformNodeTest1
  },
  {
    "vtkMRMLTransformStorageNodeTest1",
    vtkMRMLTransformStorageNodeTest1
  },
  {
    "vtkMRMLTransformableNodeTest1",
    vtkMRMLTransformableNodeTest1
  },
  {
    "vtkMRMLUnitNodeTest1",
    vtkMRMLUnitNodeTest1
  },
  {
    "vtkMRMLVectorVolumeDisplayNodeTest1",
    vtkMRMLVectorVolumeDisplayNodeTest1
  },
  {
    "vtkMRMLVectorVolumeNodeTest1",
    vtkMRMLVectorVolumeNodeTest1
  },
  {
    "vtkMRMLViewNodeTest1",
    vtkMRMLViewNodeTest1
  },
  {
    "vtkMRMLVolumeArchetypeStorageNodeTest1",
    vtkMRMLVolumeArchetypeStorageNodeTest1
  },
  {
    "vtkMRMLVolumeDisplayNodeTest1",
    vtkMRMLVolumeDisplayNodeTest1
  },
  {
    "vtkMRMLVolumeHeaderlessStorageNodeTest1",
    vtkMRMLVolumeHeaderlessStorageNodeTest1
  },
  {
    "vtkMRMLVolumeNodeEventsTest",
    vtkMRMLVolumeNodeEventsTest
  },
  {
    "vtkMRMLVolumeNodeTest1",
    vtkMRMLVolumeNodeTest1
  },
  {
    "vtkMRMLdGEMRICProceduralColorNodeTest1",
    vtkMRMLdGEMRICProceduralColorNodeTest1
  },
  {
    "vtkArchiveTest1",
    vtkArchiveTest1
  },
  {
    "vtkCodedEntryTest1",
    vtkCodedEntryTest1
  },
  {
    "vtkObserverManagerTest1",
    vtkObserverManagerTest1
  },
  {
    "vtkOrientedBSplineTransformTest1",
    vtkOrientedBSplineTransformTest1
  },
  {
    "vtkOrientedGridTransformTest1",
    vtkOrientedGridTransformTest1
  },
  {
    "vtkThinPlateSplineTransformTest1",
    vtkThinPlateSplineTransformTest1
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
DEBUG_LEAKS_ENABLE_EXIT_ERROR();
TESTING_OUTPUT_ASSERT_WARNINGS_ERRORS(0);
    if (testToRun < 0 || testToRun >= NumTests) {
      printf("testToRun was modified by TestDriver code to an invalid value: "
             "%3d.\n",
             testNum);
      return -1;
    }
    result = (*cmakeGeneratedFunctionMapEntries[testToRun].func)(ac, av);
TESTING_OUTPUT_ASSERT_WARNINGS_ERRORS(0);
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
