/**
 * Test the type traits.
 *
 * Created by czfshine on 2017/10/19.
*/

#include "gtest/gtest.h"
#include "nstl_vals.h"
#include "nstl_type_traits.h"

#include <vector>
#include <string>


namespace {
    typedef std::string string;

    /*Testing in  compile*/
    void test_type_int(int i){
        i++;
    }
    void test_type_refint(int& i){
        i++;
    }
    void test_type_ptrint(int* i){
        i++;
    }

    void test_type_string(string i){
        i.begin();
    }
    void test_type_refstring(string& i){
        i.begin();
    }
    void test_type_ptrstring(string* i){
        i->begin();
    }

    template <class T>
    void test_int(T val){
        typename NSTLSPACE::iterator_traits<typename T::iterator>::value_type i;
        test_type_int(i);

        /*
         * TODO:unknown how to test
         *
        typename NSTLSPACE::iterator_traits<typename T::iterator>::reference(1);
        test_type_refint(j);*/

        typename NSTLSPACE::iterator_traits< typename T::iterator>::pointer j;
        test_type_ptrint(j);
    }

    template <class T>
    void test_string(T val){
        typename NSTLSPACE::iterator_traits<typename T::iterator>::value_type i;
        test_type_string(i);

        /*
         * TODO:unknown how to test
         *
        typename NSTLSPACE::iterator_traits<typename T::iterator>::reference(1);
        test_type_refstring(j);*/
        string str;
        typename NSTLSPACE::iterator_traits< typename T::iterator>::pointer j=&str;
        test_type_ptrstring(j);
    }


    template <class T>
    void test_ptr(T val){
        typename NSTLSPACE::iterator_traits<T>::value_type i;
        test_type_int(i);

        /*
         * TODO:unknown how to test
         *
        NSTLSPACE::iterator_traits<typename T::iterator>::reference(1);
        test_type_refint(j);*/

        typename  NSTLSPACE::iterator_traits<T>::pointer j;
        test_type_ptrint(j);
    }
    TEST(TRAITE,NORMAL){
        std::vector<int> xs;
        test_int(xs);
        std::vector<string> xss;
        test_string(xss);
    }

    TEST(TRAITE,POINTER){
        int * a;
        test_ptr(a);
    }

    TEST(TRAITE,POINTER2CONST){
        const int b=1;
        const int * a=&b;
        test_ptr(a);
    }
}