#include <bits/stdc++.h>
#define pr cout<<"==============================To-Do List============================\n";

using namespace std;

void full(list<string> l){
	
	int j=1;
	for(auto i:l){
		cout<<j<<". "<<i<<endl;
		j++;
	}
	cout<<endl;
}

int main(){
	int q=1;
	system("clear");
	list<string> l;
	while(q==1){
		cout<<endl;
		pr;
		cout<<"\t\t1.Add task \n\t\t2.View Tasks \n\t\t3.Mark Task Complete \n\t\t4.Remove Task\n\t\t5.To exit\n->Enter The choice Number::->";
		int n;cin>>n;
		if(n==1){
			system("clear");
			pr;
			string m;
			cout<<"Enter The task:->";
			cin.ignore();
			getline(cin,m);
			l.push_back(m);
			cout<<"Total Task in the list->"<<l.size()<<endl;
		}
		else if(n==2){
			system("clear");
			pr;
			full(l);
		}
		else if(n==3){
			system("clear");
			pr;
			full(l);
			int z;
			cout<<"Enter the task no. to mark it completed:->";
			cin>>z;
			if(z>l.size()){
				cout<<"INVALID INPUT\n";
			}
			else{
				auto it=next(l.begin(),z-1);
				(*it)+="\t\t COMPLETED.";
				cout<<"Task No."<<z<<" marked Completed.\n";
			}
		}
		else if(n==4){
			system("clear");
			pr;
			full(l);
			cout<<"Enter the choice no. to be removed:->";
			int z;cin>>z;
			if(z>l.size()){
				cout<<"INVALID CHOICE NUMBER\n";
			}
			
			else{
				auto it=next(l.begin(),z-1);
				l.erase(it);
				system("clear");
				pr;
				full(l);
			}
		}
		else if(n==5){
			cout<<"\t\t\tEXITING......\n";
			break;
		}
		else{
			system("COLOR 4");
			cout<<"\t\t\tINVALID INPUT\n";
			system("COLOR 7");
		}
	}
	
}