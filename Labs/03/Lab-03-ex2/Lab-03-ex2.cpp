#include <iostream>
#include <iomanip>
using namespace std;

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2);

struct Student {
	float mark1;
	float mark2;
	float CA_1;
	float CA_2;
};
int main()
{
	Student std1[5];

	for (int i = 0; i < 5; i++) {
		cout << "-----Please Enter Student " << i + 1 << " , " << endl;

		cout << "Assignment 1 Marks : ";
		cin >> std1[i].mark1;

		cout << "Assignment 2 Marks : ";
		cin >> std1[i].mark2;

		findMarks(std1[i].mark1, std1[i].mark2, std1[i].CA_1, std1[i].CA_2);
	}

	for (int i = 0; i < 5; i++) {
		if (i == 0) {
			cout << "Student" <<
				setw(10) << "Marks1" <<
				setw(10) << "Marks2" <<
				setw(10) << "CA_1" <<
				setw(10) << "CA_2" << endl;
		}
		cout << i+1 <<
			setw(12) << setiosflags(ios::fixed) << setprecision(0) << std1[i].mark1 <<
			setw(10) << setiosflags(ios::fixed) << setprecision(0) << std1[i].mark2 <<
			setw(14) << setiosflags(ios::fixed) << setprecision(2) << std1[i].CA_1 <<
			setw(10) << setiosflags(ios::fixed) << setprecision(2) << std1[i].CA_2 << endl;
		
	}
	return 0;
}

void findMarks(int t_marks1, int t_marks2, float& t_CA1, float& t_CA2) {
	t_CA1 = t_marks1 * 0.2;
	t_CA2 = t_marks2 * 0.3;
}