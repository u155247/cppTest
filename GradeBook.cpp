#include"GradeBook.h"
#include<iostream>
#include<string>
using namespace std;
GradeBook::GradeBook(string name)
{
	setCourseName(name);	
}

void GradeBook::setCourseName(string name)
{
	if(name.length()<=25){
		courseName = name;
	}
	else{
		courseName = name.substr(0,25);
	}
}

string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::displayCourseName()
{
	cout<<"Welcome to "<<getCourseName()<<endl;
}
