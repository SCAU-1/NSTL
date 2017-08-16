/*********************************************
* NSTL - Non-Standard Template Library.      *
      LinkList
* @Author: czfshine                           
* @Date: 2017-08-12 16:47:58 
*/

/*大坑....*/
#include "nstl_allocator.h"

IN_NSTL

/*节点*/
template <class T>
struct linknode{
    linknode<T> * prev;
    linknode<T> * next;
    T data;
};

/*双向迭代器*/
template <class T>
class linkiterator{

}


template <class T,class Allocator =allocator<T>>
class list{
public:
    /*标准所规定的类型*/
    typedef T value_type;
    typedef Allocator allocator_type;
    typedef size_t size_type ;
    typedef ptrdiff_t difference_type; 
    typedef T& reference;
    typedef const T& const_reference;
    /*
    typedef allocator_traits<Allocator>::pointer pointer;
    typedef allocator_traits<Allocator>::const_pointer pointer;
    *//*TODO*/
    typedef linkiterator<T> iterator;
    /*
    typedef linkiterator<T> const_iterator;
    *//*TODO*/
    /*
    typedef std::reverse_iterator<iterator> reverse_iterator;
    typedef std::reverse_iterator<const_iterator> reverse_iterator;
    */

    /*操作符*/
    list& operator=( const list& other ){
        
    }
    /*
    list& operator=( list&& other ) noexcept(){
    }
    list& operator=( std::initializer_list<T> ilist ){

    }
    */
    void assign( size_type count, const T& value ){}
    /*
    template< class InputIt >
    void assign( InputIt first, InputIt last ){}
    void assign( std::initializer_list<T> ilist ){}
    */
    /**/
    allocator_type get_allocator() const{}
    /*
    reference front(){}
    const_reference front() const{}
    reference back();
    const_reference back() const;*/
    iterator begin() noexcept{}
    /*
    const_iterator begin() const noexcept;
    const_iterator cbegin() const noexcept;
    */

    iterator end() noexcept{}

    /*
    const_iterator end() const noexcept;
    const_iterator cend() const noexcept;
    */
    reverse_iterator rbegin() noexcept{}

    /*
    const_reverse_iterator rbegin() const noexcept;
    const_reverse_iterator crbegin() const noexcept;*/

    reverse_iterator rend() noexcept{}

    /*
    const_reverse_iterator rend() const noexcept{}
    const_reverse_iterator crend() const;
    */

    bool empty() const noexcept{}
    size_type size() const noexcept{}
    size_type max_size() const noexcept{}
    void clear() noexcept{}
    iterator insert( const_iterator pos, const T& value );
    /*
    iterator insert( const_iterator pos, T&& value );
    iterator insert( const_iterator pos, size_type count, const T& value );
    template< class InputIt >
    iterator insert( const_iterator pos, InputIt first, InputIt last );
    iterator insert( const_iterator pos, std::initializer_list<T> ilist );
    */
    /*TODO:C++11
    template< class... Args > 
    iterator emplace( const_iterator pos, Args&&... args );
    */
    iterator erase( const_iterator pos ){}
    /*
    iterator erase( const_iterator first, const_iterator last );
    */
    void push_back( T&& value ){}
    /*
    void push_back( const T& value ){}*/


    /*
    template< class... Args >
    void emplace_back( Args&&... args );
    template< class... Args >
    reference emplace_back( Args&&... args );*/
    void pop_back(){}
    void pop_front(){}
    /*
    void push_front( const T& value );
    void push_front( T&& value );
    */

    /*template< class... Args >
    void emplace_front( Args&&... args );
    template< class... Args >
    reference emplace_front( Args&&... args );
    */
    /*
    void resize( size_type count ){}
    void resize( size_type count, const value_type& value ){}

    void swap( list& other ) noexcept();

    void merge( list&& other );
    template <class Compare> 
    void merge( list&& other, Compare comp );  
    void splice( const_iterator pos, list& other );
    void splice( const_iterator pos, list&& other );
    void splice( const_iterator pos, list& other, const_iterator it );
    void splice( const_iterator pos, list&& other, const_iterator it );
    void splice( const_iterator pos, list& other, 
             const_iterator first, const_iterator last);
    void splice( const_iterator pos, list&& other, 
             const_iterator first, const_iterator last ); 
    void remove( const T& value ); 
    template< class UnaryPredicate >
    void remove_if( UnaryPredicate p );   
    void reverse() noexcept;  
    void unique();  
    template< class BinaryPredicate >
    void unique( BinaryPredicate p ); 
    void sort();
    template< class Compare > 
    void sort( Compare comp );

    template< class T, class Alloc >
    bool operator==( const list<T,Alloc>& lhs,
                    const list<T,Alloc>& rhs );
    template< class T, class Alloc >
    bool operator!=( const list<T,Alloc>& lhs,
                    const list<T,Alloc>& rhs );
    template< class T, class Alloc >
    bool operator<( const list<T,Alloc>& lhs,
                    const list<T,Alloc>& rhs );
    template< class T, class Alloc >
    bool operator<=( const list<T,Alloc>& lhs,
                    const list<T,Alloc>& rhs );
    template< class T, class Alloc >
    bool operator>( const list<T,Alloc>& lhs,
                    const list<T,Alloc>& rhs );
    template< class T, class Alloc >
    bool operator>=( const list<T,Alloc>& lhs,
                    const list<T,Alloc>& rhs );
    */
}

OUT_NSTL