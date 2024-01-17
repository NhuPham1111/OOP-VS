#include <iostream>
#include <string.h>
using namespace std;

class HumanName {
public:
	int countName = 0;
	static int countName1;

	HumanName() {
		countName++;
		countName1++;

	}
	void Total() {

		cout << "There are " << countName << " in this room" << endl;
		cout << "There are " << HumanName::countName1 << " in this room" << endl;

	}
};
int HumanName::countName1 = 0;

int main() {
	HumanName name;
	HumanName A;
	HumanName B;
	HumanName C;

	name.countName;
	cout << "There are " << name.countName << " in this room" << endl;
	cout << "using static variable ->" << "There are " << HumanName::countName1 << " in this room" << endl;

}