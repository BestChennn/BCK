#include <iostream>
#include <string>
using namespace std;

int main(){
	string name, MVname, day, text;
	int id;
	cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
	cout << "?????: ";
	getline(cin,name);
	cout << "Fahsai: Wow!!! "<< name <<" is a really cool name.\n";
	cout <<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
	cout << name << ": " ;
	cin >> id ;
	cin.ignore();
	cout <<"Fahsai: I think you may be GEAR " << int (id/10000000)-12 << ". I have a free movie ticket for you.\n";
	cout <<"Fahsai: Let's go to the cinema together!!!\n";
	cout <<"Fahsai: What movie do you want to watch?\n";
	cout << name << ": " ;
	getline(cin,MVname);
	cout <<"Fahsai: So....which day are you free to go with me?\n";
	cout << name << ": " ;
	getline(cin,day);
	cout << "Fahsai: "<<day<< "....that is OK!!! I'm looking forward to watching " << MVname<< " with you.\n";
	cout << name << ": " ;
	getline(cin,text) ;
	cout << "Fahsai: 555+ see you "<<day << ". Bye Bye \\(^ ^)/";
		
		return 0;
	
	}