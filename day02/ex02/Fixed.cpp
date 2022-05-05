#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int num){
	std::cout << "INT constructor called" << std::endl;
	this->value = num << this->fractional_bits;
}

Fixed::Fixed(const float num){
	std::cout << "FLOAT constructor called" << std::endl;
	this->value = (int)(roundf(num * (1 << this->fractional_bits)));
}

Fixed::Fixed(const Fixed& elem){
	std::cout << "Copy constructor called" << std::endl;
	*this = elem;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const{
	return (this->value);
}

void Fixed::setRawBits(int const new_value){
	this->value = new_value;
}

float	Fixed::toFloat(void) const{
	return ((float)(this->value) / (float)(1 << this->fractional_bits));
}

int		Fixed::toInt(void) const{
	return ((int)((this->value) >> this->fractional_bits));
}



Fixed	&Fixed::operator=(const Fixed& elem){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &elem)
		return (*this);
	this->value = elem.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& elem){
	return(this->value > elem.getRawBits());
}

bool	Fixed::operator<(const Fixed& elem){
	return(this->value < elem.getRawBits());
}

bool	Fixed::operator<=(const Fixed& elem){
	return(this->value <= elem.getRawBits());
}

bool	Fixed::operator>=(const Fixed& elem){
	return(this->value >= elem.getRawBits());
}

bool	Fixed::operator==(const Fixed& elem){
	return(this->value == elem.getRawBits());
}

bool	Fixed::operator!=(const Fixed& elem){
	return(this->value != elem.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& elem){
	Fixed res;

	res.setRawBits(this->value + elem.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(const Fixed& elem){
	Fixed res;

	res.setRawBits(this->value - elem.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(const Fixed& elem){
	Fixed res;

	res.setRawBits((this->value * elem.getRawBits() / (1 << this->fractional_bits)));
	return (res);
}

Fixed	Fixed::operator/(const Fixed& elem){
	Fixed res;

	res.setRawBits(((float)((float)this->value / (float)elem.getRawBits()) * (1 << this->fractional_bits)));
	return (res);
}

Fixed	Fixed::operator++(int){
	Fixed	tmp(*this);

	this->value++;
	return (tmp);
}

Fixed	Fixed::operator--(int){
	Fixed	tmp(*this);

	this->value--;
	return (tmp);
}

Fixed	&Fixed::operator++(){
	this->value++;
	return (*this);
}

Fixed	&Fixed::operator--(){
	this->value--;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed& elem){
	out << elem.toFloat();
	return (out);
}

Fixed &Fixed::min(Fixed &num1, Fixed &num2){
	Fixed &minfix = (num1.getRawBits() < num2.getRawBits()) ? num1 : num2;
	return (minfix);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2){
	Fixed &maxfix = (num1.getRawBits() > num2.getRawBits()) ? num1 : num2;
	return (maxfix);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2){
	const Fixed &minfix = (num1.getRawBits() < num2.getRawBits()) ? num1 : num2;
	return (minfix);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2){
	const Fixed &maxfix = (num1.getRawBits() > num2.getRawBits()) ? num1 : num2;
	return (maxfix);
}


