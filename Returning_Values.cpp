#include <iostream>
#include <unistd.h>
using namespace std;

//declaring functions
void deployMenu();	
int processSelection(); 
string messageReturned();


//MAIN FUNCTION
int main(){
	deployMenu();
	
	cout<<messageReturned();

	//Flushing the buffer
	int c;
	do {
		c=cin.get();
	}while(c!='\n'&&c!=EOF);
	


	//waiting for the user to press Enter
	cin.get();
	return 0;
}

void deployMenu(){
	cout<<"1. Save Information"<<endl;
	cout<<"2, Delete Information"<<endl;
	cout<<"3. Edit Information"<<endl;
	cout<<"4. QUIT"<<endl;
}

int processSelection(){
	int option=0;
	do{
		cout<<"Press a number from 1 to 4"<<endl;
		cin>>option;
	}while(option!=1&&option!=2&&option!=3&&option!=4);
	
	cout<<"Processing..."<<endl;
	sleep(3);
	return option;
}

string messageReturned(){
		int a=processSelection();
		string message="";	
		switch(a){
		case 1:
			message="Information Saved";
			break;
		case 2:
			message="Information Deleted";
			break;
		case 3:
			message="Information Edited";
			break;
		case 4:	
			message="Quitting...";
			break;
		default:
			message="Unknow number entered";
			break;
	}
	return message;
}
