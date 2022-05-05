#include "Fixed.hpp"

Fixed::Fixed()//default constructor
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int num)//int
{
	std::cout << "INT constructor called" << std::endl;
	this->value = num << this->fractional_bits;
}

Fixed::Fixed(const float num)//float
{
	std::cout << "FLOAT constructor called" << std::endl;
	this->value = (int)(roundf(num * (1 << this->fractional_bits)));
}

Fixed::Fixed(const Fixed& elem)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = elem;
}

Fixed::~Fixed()//dectructor
{
	std::cout << "Destructor called" << std::endl;
}

//get set
int	Fixed::getRawBits(void) const//getter
{
	return (this->value);
}

void Fixed::setRawBits(int const new_value)//setter
{
	this->value = new_value;
}

//move to type
float	Fixed::toFloat(void) const//move to float
{
	return ((float)(this->value) / (float)(1 << this->fractional_bits));
}

int		Fixed::toInt(void) const//move to int
{
	return ((int)((this->value) >> this->fractional_bits));
}

//operators
Fixed	&Fixed::operator=(const Fixed& elem)//assignation
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &elem)
		return (*this);
	this->value = elem.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed& elem)//out
{
	out << elem.toFloat();
	return (out);
}
