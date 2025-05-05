#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	int number;

    cout << "Please enter a first name, followed by a space, then a last name, and finally another space followed by a number:";
	cin >> first;
	cin >> last;
	cin >> number;

    //uncomment this and see what last.at(0) does!
    //cout << "last.at(0) does this: " << last.at(0) << endl  << endl;

    //uncomment this and see what to_string(number % 10) does!
    //cout << "to_string(number % 10) does this: " << to_string(number % 10) << endl  << endl;

	if (first.length() < 6)  {
		login = first + last.at(0) + '_' + to_string(number % 10);
	}
	else {
        //modify this to take the first 4 charactes instead of 6
		login = first.substr(0, 6) + last.at(0) + '_' + to_string(number % 10);
	}

	cout << "Your login name: " << login << endl;
	
	return 0;
}
