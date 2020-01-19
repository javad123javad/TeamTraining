#pragma once
#include <string>
class Staff
{
	Staff();
	~Staff();
	/* Copy construture*/
	Staff(const Staff&);
	Staff& operator=(const Staff&);

private:
	std::string _name;
	std::string _family;

};

