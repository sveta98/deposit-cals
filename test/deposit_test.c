#include "../thirdparty/ctest.h"
#include "../src/deposit.h"
#include <stdio.h>
#include <stdlib.h>

CTEST(percent, percent_test1)
{
    int days = 1;
    int money = 10000;
    int expected = 0.9*money ;
    int result = less_days(money,days);
    ASSERT_EQUAL(expected, result);
}


CTEST(percent, percent_test2)
{
    int days = 120;
    int money = 100000;
    int expected = 1.02*money ;
    int result = less_100000(money,days);
    ASSERT_EQUAL(expected, result);
}


CTEST(percent, percent_test3)
{
    int days = 121;
    int money  = 100001;
    int expected = 1.08*money;
    int result = more_100000(money,days);
    ASSERT_EQUAL(expected, result);
}

