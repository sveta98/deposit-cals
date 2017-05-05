#include "../thirdparty/ctest.h"


CTEST(percent, percent_days)
{
    const int days = 320;
   
    ASSERT_INTERVAL(1,365,days);
}


CTEST(percent, percent_moneys)
{
    const int money = 11000;
    ASSERT_INTERVAL(10000, 999999, money);
}