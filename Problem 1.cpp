#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class bank
{
 int ac;
 char name[100], actype[100];
 float b; 
 public:
 bank(int acc_no, char *name, char *acc_type, float balance) 
 {
 ac=acc_no;
 strcpy(name, name);
 strcpy(actype, acc_type);
 b=balance;
 }
 void deposit();
 void withdraw();
 void display();
};
void bank::deposit() 
{
 int damt1;
 cout<<"\n Enter Amount for Deposit: ";
 cin>>damt1;
 b+=damt1;
}
void bank::withdraw() 
{
 int wamt1;
 cout<<"\n Enter Withdraw Amount: ";
 cin>>wamt1;
 if(wamt1>b)
 cout<<"\n Cannot Withdraw Amount";
 b-=wamt1;
}
void bank::display() 
{
 cout<<"\n ----------------------";
 cout<<"\n Accout No. : "<<ac;
 cout<<"\n Name : "<<name;
 cout<<"\n Account Type : "<<actype;
 cout<<"\n Balance : "<<b; 
}
int main()
{
 int acc_no;
 char name[100], acc_type[100];
 float balance;
 cout<<"My name is Abhishek Kumar Raghuvanshi"<<endl;
 cout<<"And my R.. is 20BCE10342"<<endl;
 cout<<"-----------------------";
 cout<<"\n Enter Details: "<<endl;
 cout<<"-----------------------"<<endl;
 cout<<"Enter Accout No. "<<endl;
 cin>>acc_no;
 cout<<"Enter Name : "<<endl;
 cin>>name;
 cout<<"Enter Account Type : "<<endl;
 cin>>acc_type;
 cout<<"Enter Balance : "<<endl;
 cin>>balance;
 
 bank bank1(acc_no, name, acc_type, balance); 
 bank1.deposit(); 
 bank1.withdraw(); 
 bank1.display(); 
 return 0;
}

