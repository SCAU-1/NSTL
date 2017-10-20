//
// Created by czfshine on 2017/10/19.
//
#include <cstddef>
#include "nstl_vals.h"
#ifndef NSTL_NSTL_TYPE_TRAITS_H_H
#define NSTL_NSTL_TYPE_TRAITS_H_H

IN_NSTL
    /**
     * 类型提取器，提取迭代器的变量类型
     * @tparam I iterator 类型
     */
    /*基础通用模板*/
    template <class I>
    struct iterator_traits{
        typedef typename I::iterator_category iterator_category; //迭代器类型
        typedef typename I::value_type        value_type;        //所指向的变量类型
        typedef typename I::difference_type   difference_type;   //迭代器距离类型，指两个迭代器之间的距离
        typedef typename I::pointer           pointer;           //所指向的变量的指针
        typedef typename I::reference         reference;         //所指向的变量的引用类型
    };

    /*针对原生指针进行偏特化*/
    template <class T>
    struct iterator_traits<T* >{
        typedef int        iterator_category;//todo
        typedef  T        value_type;
        typedef  ptrdiff_t   difference_type;
        typedef  T*           pointer;
        typedef  T&        reference;
    };
    /*针对原生常量指针进行偏特化*/
    template <class T>
    struct iterator_traits<const T* >{
        typedef int        iterator_category;//todo
        typedef const T        value_type;
        typedef  ptrdiff_t   difference_type;
        typedef const T*           pointer;
        typedef  const T&        reference;
    };
OUT_NSTL
#endif //NSTL_NSTL_TYPE_TRAITS_H_H
