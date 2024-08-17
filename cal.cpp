#include<bits/stdc++.h>

using namespace std;

void intro(){
	cout<<"\t\t\tWelcome to this Simple Calculator Program.\n";
	cout<<".......This program takes two numbers and an airthmetic operator as input and returns output......\n";
	cout<<"\t\t.....TO EXIT THE PROGRAM PRESS Ctrl+C ON YOUR KEYBOARD.......\n";
	cout<<"\t\t\tAvailable operators:-> + - * /\n";
	cout<<endl;
	
}

int main(){
	while(true){
	system("clear");
	intro();
	double a,b;
	cout<<"\t->Enter the first Number:->";
	cin>>a;
	cout<<"\t->Enter the second Number:->";
	cin>>b;
	char c;
	cout<<"\t->Enter the operator:->";
	cin>>c;
	if(c=='+'){
		cout<<"\tAnswer is:->"<<a+b<<endl;
		cout<<"\t\tPRESS ENTER TO CONTINUE.\n";
		cin.ignore();
		cin.get();
	}
	else if(c=='-'){
		cout<<"\tAnswer is:->"<<a-b<<endl;
		cout<<"\t\tPRESS ENTER TO CONTINUE.\n";
		cin.ignore();
		cin.get();
		
	}
	else if(c=='/'){
		if(b==0){
			cout<<"Can't Divide by zero.\n";
			
			cout<<"\t\tPRESS ENTER TO CONTINUE.\n";
			cin.ignore();
			cin.get();
		}
		else{
			cout<<"\tAnswer is:->"<<a/b<<endl;
			cout<<"\t\tPRESS ENTER TO CONTINUE.\n";
			cin.ignore();
			cin.get();
		}
	}
	else if(c=='*'){
		cout<<"\tAnswer is:->"<<a*b<<endl;
		
		cout<<"\t\tPRESS ENTER TO CONTINUE.\n";
		cin.ignore();
		cin.get();
	}
	else{
		cout<<"\t\t\tINVALID OPERATOR.\n";
		cout<<"\t\tPRESS ENTER TO CONTINUE.\n";
		cin.ignore();
		cin.get();
	}
	}
	return 0;
}