#include <iostream>
#include <string>

void	func_ptr(std::string *var_ptr)
{
	std::cout << "var_ptr = " << var_ptr << std::endl;
	std::cout << "*var_ptr = " << *var_ptr << std::endl;
}

void	func_ref(std::string& var_ref)
{
	std::cout << "var_ref = " << var_ref << std::endl;
}

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "-- subject tests --" << std::endl;
	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The value of the string variable:  " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "-- my tests --" << std::endl;
	func_ptr(&str);
	func_ref(str);
	return 0;
}
