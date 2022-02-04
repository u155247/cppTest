#include<string>
#ifndef _GRADEBOOK_
#define _GRADEBOOK_
class GradeBook
{
public:
	GradeBook(std::string name);
	void setCourseName(std::string name);
	std::string getCourseName();
	void displayCourseName();
private:
	std::string courseName;
};
#endif
