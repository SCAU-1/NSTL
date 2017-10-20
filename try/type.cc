//
// Created by czfshine on 2017/10/19.
//

#include <type_traits>
#include <vector>
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    vector<int> xs;
    iterator_traits<vector<int>::iterator>::value_type i;
    iterator_traits<std::vector<int>::iterator>::reference(1);
    cout<<typeid(xs).name()<<endl;
    cout<<typeid(i).name();
}