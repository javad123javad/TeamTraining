#include "Staff.h"

Staff::Staff() {
}

Staff::Staff(std::string i_name, std::string i_family) :
	_name(i_name)
	, _family(i_family) {}

Staff::Staff(const Staff& lhs) :
	_name(lhs._name)
	, _family(lhs._family)
{
}

Staff& Staff::operator=(const Staff& lhs)
{
	if (this == &lhs)
		return *this;

	this->_name = lhs._name;
	this->_family = lhs._family;

	return *(this);
}
Staff::Staff(Staff&& lhs) noexcept :
	_family(std::move(lhs._family))
	,_name(std::move(lhs._name))
{
}

std::string Staff::returnInfo()
{
	return std::string(_name + " " + _family);
}
void Staff::setInfo(const std::string&  i_name, const std::string&  i_family)
{
	_name = (i_name);
	_family = i_family;
}
Staff::~Staff() {
}