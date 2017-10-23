/*********************************************
* NSTL - Non-Standard Template Library.      *
      Allocator
* @Author: czfshine                           
* @Date: 2017-08-11 20:15:18 
*/

/**
http://en.cppreference.com/w/cpp/concept/Allocator
*/


#include "nstl_vals.h"
#include <cstdlib>

IN_NSTL
template <class T> 
class allocator{

public:
    typedef T value_type;

    typedef size_t size_type;

    T* allocate(size_type n){
        T* ptr =0;
        if(n>0)
            ptr=static_cast<T*>(::operator new(sizeof(T)*n));
        return ptr;
    }

    void deallocate(T* ptr,size_type n){
        ::operator delete(ptr);
    }

    /*  
    TODO:C++11
    template<class... argT>
    void construct(T * ptr,argT&&... args){
         new ((void *)ptr) T(std::forward<argT>(args)...);
    }
    */
    void construct(T * ptr,T args){
         new ((void *)ptr) T(args);
    }
    
};
template <class A, class U>
    bool operator==(const allocator<A>&, const allocator<U>&) { return true; }
    template <class A, class U>
    bool operator!=(const allocator<A>&, const allocator<U>&) { return false; }

OUT_NSTL