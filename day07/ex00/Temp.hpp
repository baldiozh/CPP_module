#ifndef TEMP_HPP
#define TEMP_HPP

#include <iostream>

template <typename S>
const S &min(const S &a, const S &b) {return (a < b) ? a : b;}

template <typename S>
const S &max(const S &a, const S &b) {return (a > b) ? a : b;}

template <typename S>
void swap(S &a, S &b) {S s = a; a = b; b = s;}

#endif 
