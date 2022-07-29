#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	
	 string x[3][3] = {{"1","2","3"},{"4","5","6"},{"7","8","9"}};
	int in;
	int in2;
	int on=0;
	int i=0;
	
	while(on==0){
	cout<<"          |          |          "<<endl;
	cout<<"    "<<x[0][0]<<"     |    "<<x[0][1]<<"     |   "<<x[0][2]<<"      "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"    "<<x[1][0]<<"     |    "<<x[1][1]<<"     |   "<<x[1][2]<<"      "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"   "<<x[2][0]<<"      |    "<<x[2][1]<<"     |    "<<x[2][2]<<"     "<<endl;
	cout<<"          |          |          "<<endl;
	


	
	cout<<"player 1 choose your square"<<endl;
	cin>>in;

	if(in==1){
		x[0][0]="x";
		
	}
	if(in==2){
		x[0][1]="x";
		
	}
	if(in==3){
		x[0][2]="x";
		
	}
	if(in==4){
		x[1][0]="x";
		
	}
	if(in==5){
		x[1][1]="x";
		
	}
	if(in==6){
		x[1][2]="x";
		
	}
	if(in==7){
		x[2][0]="x";
		
	}
	if(in==8){
		x[2][1]="x";
		
	}
	if(in==9){
		x[2][2]="x";
		
	}
//________________________________________________________________________	
	if(x[0][0]=="x"&&x[0][1]=="x"&&x[0][2]=="x"){
		system("cls");
		on=10;
	}
	if(x[1][0]=="x"&&x[1][1]=="x"&&x[1][2]=="x"){
		system("cls");
		on=10;
	}
	if(x[2][0]=="x"&&x[2][1]=="x"&&x[2][2]=="x"){
		system("cls");
		on=10;
	}
	if(x[0][0]=="x"&&x[0][1]=="x"&&x[0][2]=="x"){
		system("cls");
		on=10;
	}
	if(x[0][1]=="x"&&x[1][1]=="x"&&x[2][1]=="x"){
		system("cls");
		on=10;
	}
	if(x[0][2]=="x"&&x[1][2]=="x"&&x[2][2]=="x"){
		system("cls");
		on=10;
	}

	if(x[0][0]=="x"&&x[1][1]=="x"&&x[2][2]=="x"){
		system("cls");
		on=10;
		}
	if(x[0][2]=="x"&&x[1][1]=="x"&&x[2][0]=="x"){
	system("cls");
		on=10;
	}
	system("cls");
	
		cout<<"          |          |          "<<endl;
	cout<<"    "<<x[0][0]<<"     |    "<<x[0][1]<<"     |   "<<x[0][2]<<"      "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"    "<<x[1][0]<<"     |    "<<x[1][1]<<"     |   "<<x[1][2]<<"      "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"          |          |          "<<endl;
	cout<<"   "<<x[2][0]<<"      |    "<<x[2][1]<<"     |    "<<x[2][2]<<"     "<<endl;
	cout<<"          |          |          "<<endl;
	
	//	if(on==10){
	//		system("cls");
	//	on=10;
	//	cout<<"Player 1 wins"<<endl;
	//}

	//-----------------------------------------------------
	
	
	cout<<"player 2 choose your square"<<endl;
	cin>>in2;
	
	
	if(in2==1){
		x[0][0]="O";
		
	}
	if(in2==2){
		x[0][1]="O";
		
	}
	if(in2==3){
		x[0][2]="O";
		
	}
	if(in2==4){
		x[1][0]="O";
		
	}
	if(in2==5){
		x[1][1]="O";
		
	}
	if(in2==6){
		x[1][2]="O";
		
	}
	if(in2==7){
		x[2][0]="O";
		
	}
	if(in2==8){
		x[2][1]="O";
		
	}
	if(in2==9){
		x[2][2]="O";
		
	}	
//______________________________________________________________________________
	if(x[0][0]=="O"&&x[0][1]=="O"&&x[0][2]=="O"){
		system("cls");
		on=20;
	}
	if(x[1][0]=="O"&&x[1][1]=="O"&&x[1][2]=="O"){
		system("cls");
		on=20;
	}
	if(x[2][0]=="O"&&x[2][1]=="O"&&x[2][2]=="O"){
		system("cls");
		on=20;
	}
	if(x[0][0]=="O"&&x[0][1]=="x"&&x[0][2]=="O"){
		system("cls");
		on=20;
	}
	if(x[0][1]=="O"&&x[1][1]=="x"&&x[2][1]=="O"){
		system("cls");
		on=20;
	}
	if(x[0][2]=="O"&&x[1][2]=="x"&&x[2][2]=="O"){
		system("cls");
		on=20;
	}
	
	if(x[0][0]=="O"&&x[1][1]=="O"&&x[2][2]=="O"){
		system("cls");
		on=20;
		}
	if(x[0][2]=="O"&&x[1][1]=="O"&&x[2][0]=="O"){
	system("cls");
		system("cls");
		on=20;
	}
	
	i++;
if(i==5){
	system("cls");
	on=30;
		cout<<"Tie"<<endl;
}
	

	system("cls");
}

	if(on==10){
		cout<<"Player 1 wins"<<endl;
	}
		if(on==20){
		cout<<"Player 2 wins"<<endl;
	}
if(on==30){
		cout<<"Tie"<<endl;
	}
}
