# NSTL
构建状态：[![Build Status](https://travis-ci.org/czfshine/NSTL.svg?branch=develop)](https://travis-ci.org/czfshine/NSTL) 
代码覆盖率：
[![Coverage Status](https://coveralls.io/repos/github/czfshine/NSTL/badge.svg?branch=develop)](https://coveralls.io/github/czfshine/NSTL?branch=develop)

Non-Standard Template Library.非标准模板库(C++)

重写C++里面的标准模板库，包括各种容器，迭代器，配接器，配置器等，不包括STL里面的各种算法(~~因为懒~~)

> 大二上数据结构课设
# 文档&说明
接口要求参照[C++17](http://en.cppreference.com/w/cpp)标准。标注为`deprecated in C++17`或者`optional`的可能不会被实现。

# 编译器支持 
基本上支持现在主流编译器，测试列表如下

编译器版本|window|osx|linux
:-----:|:--------:|:------:|:----:
gcc4.9|Y|Y|Y
gcc5|Y|Y|Y
gcc6|Y|Y|Y
clang3.6|?|Y|Y
clang3.7|?|Y|Y
clang3.8|?|Y|Y
clang4.0|?|Y|Y
 Visual C++14|Y|-|-
# 致谢

* [Google Test](https://github.com/google/googletest) :单元测试框架
* [《STL 源码剖析》侯捷](http://jjhou.boolan.com/jjwbooks-tass.htm)