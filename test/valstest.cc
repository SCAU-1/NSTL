/*********************************************
* NSTL - Non-Standard Template Library.      *
      Common Values
* @Author: czfshine
* @Date: 2017-08-09 08:35:32
*/
#include "gtest/gtest.h"
#include "nstl_vals.h"

/*命名空间*/
namespace {

    int in=2;

    IN_NSTL
        int in=1;
    OUT_NSTL

    TEST(VALS,SPACE) {
        EXPECT_EQ(in,2);
        EXPECT_EQ(NSTLSPACE::in,1);
    }

}
