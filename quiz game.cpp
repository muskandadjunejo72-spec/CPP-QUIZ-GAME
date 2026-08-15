#include <iostream>
using namespace std;
int main(){
	int answer;
	int score =0;
	cout<<"==========================="<<endl;
	cout<<"c++ QUIZ GAME"<<endl;
	cout<<"==========================="<<endl;
	cout<<"\n1, which language is used to create this program?"<<endl;
	cout<<"1, java"<<endl;
	cout<<"2, c++"<<endl;
	cout<<"3, python"<<endl;
	cout<<"4, HTML"<<endl;
	cout<<"Enter your answer";
	cin>>answer;
	if(answer == 2){
		cout<<"correct!"<<endl;
		score++;
	}else{ 
		cout<<"Wrong! correct answer is c++"<<endl;
	}
	cout<<"\n2; which symbol is used to end a statement in c++?"<<endl;
	cout<<"1, ."<<endl;
	cout<<"2, ,"<<endl;
	cout<<"3, :"<<endl;
	cout<<"4, ;"<<endl;
	cout<<"Enter your answer"<<endl;
	cin>>answer;
	if(answer == 4){
		cout<<"correct!"<<endl;
		score++;
	}else{
		cout<<"Wrong! correct answer is :"<<endl;
	}
	cout<<"\n3, which keyword is used to create a variable of type integer?"<<endl;
	cout<<"1, int"<<endl;
	cout<<"2, float"<<endl;
	cout<<"3, char"<<endl;
	cout<<"4, string"<<endl;
	cout<<"Enter your answer"<<endl;
	cin>>answer;
	if(answer == 1){
		cout<<"correct!"<<endl;
		score++;
	}else{
		cout<<"Wrong! correct answer is int"<<endl;
	}
	cout<<"\n4, which operator is used for addition ?"<<endl;
	cout<<"1, - "<<endl;
	cout<<"2, + "<<endl;
	cout<<"3, * "<<endl;
	cout<<"4, / "<<endl;
	cout<<"Enter correct answer"<<endl;
	cin>>answer;
	if(answer == 2){
		cout<<"correct!"<<endl;
		score++;
	}else{
		cout<<"Wrong! correct answer is + "<<endl;
	}
	cout<<"\n5, which function is the starting point of a c++ program ?"<<endl;
	cout<<"1, start() "<<endl;
	cout<<"2, run() "<<endl;
	cout<<"3, main() "<<endl;
	cout<<"4, begin() "<<endl;
	cout<<"Enter your answer"<<endl;
	cin>>answer;
	if(answer == 3){
		cout<<"correct!"<<endl;
		score++;
	}else {
		cout<<"Wrong! correct answer is main() "<<endl;
	}
	cout<<"\n=================================="<<endl;
	cout<<"              QUIZ RESULT          "<<endl;
	cout<<"===================================="<<endl;
	cout<<"Your score"<<score<<"\5"<<endl;
	if(score == 5){
		cout<<"====== EXCELLENT! ======"<<endl;
	}else if(score >= 3){
		cout<<"===== GOOD JOB! ======"<<endl;
	}else{
		  cout<<"===== KEEP LEARNING! ====="<<endl;
    }
	
}
