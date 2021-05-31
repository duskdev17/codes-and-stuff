#include<iostream>
using namespace std;

bool log_in(bool cheak){
	string username = "admin";
	string passwd = "admin";
	string name;
	string pass;

	cout << "Username: ";
	cin >> name;
	cout << "Password: ";
	cin >> pass;
	
	if (name == username) {
		if (pass == passwd) {
			cout << "Log in successful!" << endl;
		}
		else {
			cout << "Wrong Password! Acess Denied!" << endl;
		}
	}
	else {
		cout << "Wrong Username! Acess Denied! " << endl;
	}

	if (name == username && pass == passwd)
		return true;
	else
		return false;

}

int main() {
	bool cheak=false;

	log_in(cheak);


	if (cheak == true) {
		cout << "Welcome" << endl;
	}
	else {
		cout << "Your entered credentials were incorrect! Please try logging in again!" << endl;
		log_in(false);
	}

	return 0;
}