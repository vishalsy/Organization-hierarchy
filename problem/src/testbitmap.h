#include <bits/stdc++.h>
#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class SampleTestSuite : public CxxTest ::TestSuite
{
public:
    void testZero(void)
    {
        int ans = levels();
        TS_ASSERT(ans == 4);
        TS_TRACE("testZero");
    }

    void testOne(void)
    {
        int ans = levelsalary(3);
        TS_ASSERT(ans == 78000);
        TS_TRACE("testOne");
    }

    void testTwo(void)
    {
        int ans = Numofempunder(5);
        TS_ASSERT(ans == 3);
        TS_TRACE("testTwo");
    }
    void testThree(void)
    {
        int ans = justboss(2);
        TS_ASSERT(ans == -1)
        TS_TRACE("testThree");
    }

    void isAvailable(void)
    {
        int ans = Commonboss(1,6);
        TS_ASSERT(ans == 2);
        TS_TRACE("testFour");
    }

    void testFive(void)
    {
        int ans = levelsalary(0);
        TS_ASSERT(ans == 100000)
        TS_TRACE("testFive");
    }

    void testSix(void)
    {
        int ans = Commonboss(9,8);
        TS_ASSERT(ans == 2);
        TS_TRACE("testSix");
    }

    void testSeven(void)
    {
        int ans = Numofempunder(11);
        TS_ASSERT(ans == 0);
        TS_TRACE("testSeven");
    }

    void testEight(void)
    {
        int ans = justboss(10);
        TS_ASSERT(ans == 1)
        TS_TRACE("testEight");
    }

    void testNine(void)
    {
        int ans = Numofempunder(10);
        TS_ASSERT(ans == 1);
        TS_TRACE("testNine");
    }
};