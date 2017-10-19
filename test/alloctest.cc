/*********************************************
* NSTL - Non-Standard Template Library.      *
        Test Allocator.      
* @Author: czfshine                           
* @Date: 2017-08-11 22:31:23 
*/

#include "gtest/gtest.h"
#include "nstl_allocator.h"

TEST(ALLOC, BASICUSE) {

  NSTLSPACE::allocator<int> aint;
  int * base=aint.allocate(2);

  aint.construct(base,123);
  aint.construct(base+1,22);

  EXPECT_EQ(*base,123);
  EXPECT_EQ(*(base+1),22);

  aint.deallocate(base,2);

  NSTLSPACE::allocator<int> bint;
  NSTLSPACE::allocator<char> achar;

  EXPECT_TRUE(aint==bint);
  EXPECT_FALSE(aint!=achar);
}
