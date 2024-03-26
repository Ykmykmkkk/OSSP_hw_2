#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string name = "";
	int student_num = 0;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> student_num;

	cout << "<출력> " << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << student_num << endl;
}
