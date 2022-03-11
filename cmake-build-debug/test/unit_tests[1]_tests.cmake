add_test( calculateZylinderArea.calculate /Users/martinhummel/git/gtest-demo/cmake-build-debug/bin/unit_tests [==[--gtest_filter=calculateZylinderArea.calculate]==] --gtest_also_run_disabled_tests)
set_tests_properties( calculateZylinderArea.calculate PROPERTIES WORKING_DIRECTORY /Users/martinhummel/git/gtest-demo/cmake-build-debug/test SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==] LABELS unit)
set( unit_tests_TESTS calculateZylinderArea.calculate)
