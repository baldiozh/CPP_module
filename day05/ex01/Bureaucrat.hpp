//

//

#ifndef CPPMODULES_BUREAUCRAT_HPP
#define CPPMODULES_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &obj);

	void	incrementGrade();
	void	decrementGrade();

	std::string	getName() const;
	int			getGrade() const;

	void	displayInfo() const;

	void	signForm(Form &obj);
private:
	Bureaucrat();
	void	checkGrade();
	class	GradeTooHighException: public std::exception {
	public:
		virtual const char * what() const throw();
		};
	class	GradeTooLowException: public std::exception {
	public:
		virtual const char * what() const throw();
	};
	std::string const	_name;
	int					_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &obj);

#endif //CPPMODULES_BUREAUCRAT_HPP
