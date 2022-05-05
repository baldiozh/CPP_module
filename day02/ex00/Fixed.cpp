#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& elem){
	std::cout << "Copy constructor called" << std::endl;
	*this = elem;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const new_value){
	this->value = new_value;
}

Fixed	&Fixed::operator=(const Fixed& elem){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &elem)
		return (*this);
	this->value = elem.getRawBits();
	return (*this);
}
