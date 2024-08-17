#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=0;
	cout<<"----------------------------->GUESSING NUMBER GAME--------------------\n";
	cout<<"\t\t--------->Game Rules----------\n";
	cout<<"\tGuess a positive number between 0 and 100 inclusive\n";
	cout<<"\tOn correct Guess The program will exit automatically\n";
	cout<<"\tTo exit the Game enter -1\n";
	
	while(a==0){
		int upper_bound=10000;
		int lower_bound=0;
		int num=(rand()%(upper_bound-lower_bound+1))+lower_bound;
		cout<<"Enter the number you gussed:";
		int g;cin>>g;
		if(g==num){
			vector<string> z={"Bravo!","Congratulations"};
			a=1;
			cout<<"Congo You have guessed the correct answer.\n\n";
		
		}
		else if(g>num){
			cout<<"Uff! Guessed number not matched\n";
			cout<<"My number "<<num<<" your input "<<g<<" is greater than My number by "<<abs(g-num)<<endl;
			cout<<endl;
		}
		else if(g==-1){
			cout<<"\t\t--------->EXITING..<--------\n\n";
			a=1;
			break;
		}
		else{
			cout<<"Uff! Guessed number not matched\n";
			cout<<"My number "<<num<<" your input "<<g<<" is lesser than my number by "<<abs(g-num)<<endl;
			cout<<endl;
		}
	}
	return 0;
}