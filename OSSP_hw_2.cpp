#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string name = "";
	int student_num = 0;
	string team = "";
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "학번을 입력하세요: ";
	cin >> student_num;
	cout << "팀 이름을 입력하세요: ";
	cin >> team;
	cout << "<출력> " << endl;
	cout << "이름: " << name << endl;
	cout << "학번: " << student_num << endl;
	cout << "팀 이름: " << team << endl;

}
