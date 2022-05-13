#ifndef TEMP_HPP
#define TEMP_HPP

#include <iostream>
#include <algorithm>	// std::find

template<typename T>
typename T::const_iterator easyfind(const T &cont, int aim) {
	typename T::const_iterator it = std::find(cont.begin(), cont.end(), aim);
	if (it == cont.end())
		throw std::out_of_range("Couldn't find it!");
	return it;
};

#endif
