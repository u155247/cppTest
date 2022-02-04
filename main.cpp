#include<iostream>
#include<string>
using namespace std;
#include"GradeBook.h"

int main(int argc, char **argv)
{
	GradeBook gradeBook1("CS101 C");	
	GradeBook gradeBook2("CS102 C++");
	string newName;

	gradeBook1.displayCourseName();
	gradeBook2.displayCourseName();

	cout<<"Please input new course name"<<endl;
	getline(cin,newName);
	gradeBook1.setCourseName(newName);
	cout<<"new course name :"<<gradeBook1.getCourseName()<<endl;
	
	gradeBook1.displayCourseName();	

	return 0;
}
