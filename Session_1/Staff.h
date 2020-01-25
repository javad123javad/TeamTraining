#pragma once
#include <string>
class Staff{
public:
	Staff();
	Staff(std::string i_name, std::string i_family);
	~Staff();
	/* Copy constructore*/
	Staff(const Staff&);
	/* Copy Assignment constructore*/
	Staff& operator=(const Staff&);
	/* Move Construtore*/
	Staff(Staff&&) noexcept;
	/**********/
	std::string returnInfo();
	void setInfo(const std::string&   i_name, const std::string&  i_family);
private:
	std::string _name;
	std::string _family;
};
