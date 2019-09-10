#include<iostream>
#include<string>
using namespace std;
void ListStudent(string na[40],int sc[40],int);
char Calgrade(int ); 
int main() {
	int ns,sc[40];
	string na[40];
	cout<<"Enter number of student  : ";
	cin>>ns;
	cout<<endl;
	for (int i=0;i<ns;i++){
		cout<<"input name : ";
		cin>>na[i];
		cout<<"input score : ";
		cin>>sc[i];
		cout<<endl;
		
	}
		ListStudent( na,sc, ns);

	return 0;
}
void ListStudent(string na[40],int sc[40],int ns){
		for (int i=0;i<ns;i++){
			cout<<"name : "<<na[i]<<" "<<"score "<<sc[i]<<"="<<sc[i]<< "Your grade is "<<Calgrade(sc[i])<<endl;
		
	}
}
char Calgrade(int sc ){
	if (sc <= 100 && sc >=80 )
	{
	 return('A');
	}
	if (sc <= 79 && sc >=70 )
	{
	 return('B');
	}
	if (sc <=69 && sc >=60 )
	{
	 return('C');
	}
	if (sc <= 59 && sc >=50 )
	{
	 return('D');
	}
	if (sc<=49)
	 return('F');

}
	




