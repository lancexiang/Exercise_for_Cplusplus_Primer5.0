#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class GradeBook
{
public:
	GradeBook(string coursename, string teachername)
	{
		setCourseName(coursename);
		setTeacherName(teachername);
	}
	void setCourseName(string name)
	{
		coursename = name;
	}
	void setTeacherName(string name)
	{
		teachername = name;
	}
	string getCourseName()
	{
		return coursename;
	}
	string getTeacherName()
	{
		return teachername;
	}
	void dispalyMessage()
	{
		cout << "Weclome to the grade book for " << getCourseName() << "!\n";
		cout << "This course is presented by:" << getTeacherName() << "!" << endl;
	}
private:
	string coursename, teachername;
};
int main1()				//仅作测试程序使用，无实际意义
{
	GradeBook gradebook("C++ Primer5", "LuoXiang");
	cout << "gradebook created for course:" << gradebook.getCourseName() << endl;
	gradebook.dispalyMessage();
	system("pause");
	return 0;
}