#include <assert_something.hpp>

inline void an_assert(){
  #if !defined (ONE_DEFINE_PASSED_DEFINE_HPP)
    #error "fail miss define" 
  #endif
};