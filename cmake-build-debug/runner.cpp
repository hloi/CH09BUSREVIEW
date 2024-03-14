/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/hloi/CLionProjects/CSC109/SP24/CH09BUSREVIEW/newCxxTest.h", 23, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testFileNotFoundException : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testFileNotFoundException() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 29, "testFileNotFoundException" ) {}
 void runTest() { suite_newCxxTest.testFileNotFoundException(); }
} testDescription_suite_newCxxTest_testFileNotFoundException;

static class TestDescription_suite_newCxxTest_testStoiException : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testStoiException() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 36, "testStoiException" ) {}
 void runTest() { suite_newCxxTest.testStoiException(); }
} testDescription_suite_newCxxTest_testStoiException;

static class TestDescription_suite_newCxxTest_testMissingValue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMissingValue() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 47, "testMissingValue" ) {}
 void runTest() { suite_newCxxTest.testMissingValue(); }
} testDescription_suite_newCxxTest_testMissingValue;

static class TestDescription_suite_newCxxTest_testReadReview : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testReadReview() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 58, "testReadReview" ) {}
 void runTest() { suite_newCxxTest.testReadReview(); }
} testDescription_suite_newCxxTest_testReadReview;

static class TestDescription_suite_newCxxTest_testDeleteReview : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testDeleteReview() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 63, "testDeleteReview" ) {}
 void runTest() { suite_newCxxTest.testDeleteReview(); }
} testDescription_suite_newCxxTest_testDeleteReview;

static class TestDescription_suite_newCxxTest_testCatchDel : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testCatchDel() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 70, "testCatchDel" ) {}
 void runTest() { suite_newCxxTest.testCatchDel(); }
} testDescription_suite_newCxxTest_testCatchDel;

static class TestDescription_suite_newCxxTest_testCatchDel2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testCatchDel2() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 84, "testCatchDel2" ) {}
 void runTest() { suite_newCxxTest.testCatchDel2(); }
} testDescription_suite_newCxxTest_testCatchDel2;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
