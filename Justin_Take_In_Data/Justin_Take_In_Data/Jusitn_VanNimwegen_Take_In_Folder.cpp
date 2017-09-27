/*Jusitn Van Nimwgen 9/25/2017 Period 4
Take in Data
Display Data, Accept user response, Display Changed Data 
*/

//Libraries
#include <iostream> //* ives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> //* gives access to _kbhit() and _getch() for pause()

// Namespaces
using namespace std;

//Functions ()
void pause() {
	cout << "Press any key to contuniue..."; \
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// Main 
void main() {
	//Variables
	int favorite_number; // What is your favorite whole number
	char last_inital; // what is the first inital on your last name
	double money; // How much do you get paid per hour
	double my_pay = 10.00; // $8 an hour
	bool u_hav_betr_jub_dan_me;

	// User Options
	cout << "What is your favorite whole number?" << endl;
	cin >> favorite_number;
	cout << "What is the first inital of your last name" << endl;  
	cin >> last_inital;
	cout << "How much do you get payed per hour? (rounded to the whole number)" << endl;
	cin >> money;
	u_hav_betr_jub_dan_me = money > my_pay; // checks who has more money
	// after questions stores out stored data
	cout << "hey your favorite number is: " << favorite_number << " mine is also " << favorite_number << endl;
	cout << "Your first initial in your last name is " << last_inital << ", mine is V. \n";
	cout << "Wow you get paid $" << money << ", that is sure alot." << endl;
	if (u_hav_betr_jub_dan_me) {
		cout << "Can you get me a job?" << endl;
	}
//pause
	pause();
}