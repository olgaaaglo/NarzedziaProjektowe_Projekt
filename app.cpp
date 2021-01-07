#include <iostream>
#include <string>
#include "app.h"

int main()
{
	int a = 1;
	int b = 3;
	std::cout << a << " + " << b << " = " << add<int>(a, b) << std::endl;

	double c = 2.6;
	double d = 8.9;
	std::cout << c << " + " << d << " = " << add<double>(c, d) << std::endl;

	std::string e = "eee";
	std::string f = "fff";
	std::cout << e << " + " << f << " = " << add<std::string>(e, f) << std::endl;
}
