//
// Created by czfshine on 2017/10/23.
//

#ifndef NSTL_NSTL_VECTOR_H
#define NSTL_NSTL_VECTOR_H

#include "nstl_vals.h"
#include "nstl_allocator.h"
#include "nstl_type_traits.h"
#include <typeinfo>

IN_NSTL
template <class T,class alloc=allocator<T>>
class vector{

public:
    /*
     * 一些类型定义
     */
    typedef T value_type;
    typedef alloc allocator_type	;
    typedef size_t size_type;
    typedef std::ptrdiff_t difference_type;
    typedef value_type&	   reference;
    typedef const value_type&	   const_reference;
    /**TODO:
    typedef allocator_traits<alloc>::pointer	   pointer;
    typedef allocator_traits<alloc>::const_pointer  const_pointer;
     */

    typedef T* iterator	 ;//随机访问迭代器 (RandomAccessIterator)
    typedef const T*  const_iterator;//	常随机访问迭代器[编辑]
    /**TODO:
    typedef std::reverse_iterator<iterator> reverse_iterator;
    typedef   std::reverse_iterator<const_iterator> const_reverse_iterator;
     */


};
OUT_NSTL
#endif //NSTL_NSTL_VECTOR_H
