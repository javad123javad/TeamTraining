#pragma once
#include "Staff.h"
#include <vector>
#include <string>
class Personnel{
public:
	Personnel(const std::vector<Staff*>& i_staff);
	Personnel() = default;
	~Personnel();
	/* Copy constructor*/
	Personnel(const Personnel&);
	/* Copy Assignment Constructor*/
	Personnel& operator=(const Personnel& lhs);
	/* Move Contructor*/
	Personnel(Personnel&&) noexcept;
	void addStaff(Staff* const i_staff);
private:
	std::vector<Staff*> _staffList;



};

