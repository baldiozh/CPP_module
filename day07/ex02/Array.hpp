#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<class T>

class Array{
public:
	Array<T>() : _arr(NULL), _size(0) {
		std::cout << "Zero constructor" << std::endl;
	};
	Array<T>(unsigned int size) {
		std::cout << "Size constructor" << std::endl;
		if (size == 0)
			_arr = NULL;
		else
			this->_arr = new T[this->_size]();
		_size = size;
	};
	Array<T>(const Array<T> &obj) {
		std::cout << "Copy constructor called" << std::endl;
		*this = obj;
	};
	~Array<T>() {
		if (this->_arr)
			delete []this->_arr;
	};

	Array<T> &operator=(const Array<T> &obj) {
		std::cout << "Assignation overload called" << std::endl;
		if (this == &obj)
			return (*this);
		if (this->_arr)
			delete [] this->_arr;
		this->_size = obj.size();
		this->_arr = new T[this->_size]();
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_arr[i] = obj[i];
		}
		return *this;
	};

	T &operator[](const unsigned int index) const {
		if (index < 0 || index >= _size)
			throw std::range_error("Index out of bounds");
		return this->_arr[index];
	}

	int	size() const {
		return this->_size;
	};
private:
	T				*_arr;
	unsigned int	_size;
};



#endif
