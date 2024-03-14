/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "ReviewList.h"
#include "Review.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testFileNotFoundException() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        string fileNot = "nofile.txt";
        ReviewList list1;
        TS_ASSERT_THROWS_ANYTHING(list1.readReview(fileNot));
    }

    void testStoiException() {
        string line = "a, b, c";
        if (!line.empty()) {
            istringstream iss(line);
            Review r;

            TS_ASSERT_THROWS_ANYTHING(iss >> r);

        }
    }

    void testMissingValue() {
        string line = "a, c";
        if (!line.empty()) {
            istringstream iss(line);
            Review r;

            TS_ASSERT_THROWS_ANYTHING(iss >> r);

        }
    }

    void testReadReview() {
        ReviewList list1;
        TS_ASSERT_THROWS_ANYTHING(list1.readReview("badreview.txt"));
    }

    void testDeleteReview() {
        ReviewList list1;
        list1.readReview("review.txt");
        Review r("a", 4, "good");
        TS_ASSERT_THROWS_ANYTHING(list1.delReview(r));
    }

    void testCatchDel() {
        ReviewList list1;
        list1.readReview("review.txt");
        Review r("a", 4, "good");
        try {
            list1.delReview(r);
            TS_FAIL("No exception.");
        }
        catch (char const* e) {
            TS_ASSERT(true);
        }

    }

    void testCatchDel2() {
        ReviewList list1;
        list1.readReview("review.txt");
        Review r("Mogoodid24", 5, " very good");
        try {
            list1.delReview(r);
            TS_FAIL("No exception.");
        }
        catch (char const* e) {
            TS_ASSERT(true);
        }

    }

};
#endif /* NEWCXXTEST_H */
