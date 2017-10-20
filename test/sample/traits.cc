//
// Created by czfshine on 2017/10/20.
//

#include "gtest/gtest.h"
#include <vector>
#include "nstl_type_traits.h"
namespace {

    /**
     * 编写一个函数，接受一个vector对象，返回一个指针，指向vector的第三个元素，没有就为NULL
     * @return
     */
    template <class T >
     typename  NSTLSPACE::iterator_traits<typename T::iterator>::value_type * a(T& xs){
        if(xs.size()>=3){
            return &(xs[2]);
        }else{
            return nullptr;
        }
    }

    TEST(SAMPLE,TRAITS){
        std::vector<int> xs={1,2,3,5,6};
        auto b=a(xs);
        EXPECT_EQ(* b,3);
    }
}