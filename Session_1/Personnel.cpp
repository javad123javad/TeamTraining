#include "Personnel.h"


Personnel::Personnel(const Personnel& lhs):
_staffList(lhs._staffList)
{

}

Personnel & Personnel::operator=(const Personnel& lhs){

	if (this == &lhs)
		return *this;
	_staffList = lhs._staffList;
	return *this;
}

Personnel::Personnel(Personnel&& lhs)noexcept{
	_staffList = std::move(lhs._staffList);
	lhs._staffList.clear();
}

void Personnel::addStaff(Staff* const  i_staff)
{
	_staffList.push_back(const_cast<Staff*>(i_staff));
}


Personnel::Personnel(const std::vector<Staff*>& i_staff):
	_staffList(i_staff)
{
}

Personnel::~Personnel() {

}