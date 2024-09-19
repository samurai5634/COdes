#include <iostream>
#include<fstream>
using namespace std;
class stud{
int roll;
char name[30];
char Div[5];
char Add[10];

public:
   void accept();
   void display();
   int roll_no(){

    return roll;
   }

};

void stud::accept(){
  cout<<"\n Enter Roll number: ";           //methods for console 
  cin>>roll;
cout<<"\n Enter name: ";
cin>>name;
cout<<"\n Enter address: ";
cin>>Add;
cout<<"\n Enter Division: ";
cin>>Div;
}

void stud :: display(){
cout<<"\n"<<roll<<"\t"<<name<<"\t"<<Add<<"\t"<<Div;
}

void create(){
stud s;
int n;
ofstream o ("St.txt");  //it is used to create and write
cout<<"\n How many records you want to enter: ";
cin>>n;
for(int i =0;i<n;i++){
    s.accept();
    o.write((char *)&s,sizeof(s));  // it helps you 
}
o.close();
}

void search(){
stud s;
int n;
cout<<"\n"<<"Enter roll no to be searched:";
cin>>n;
ifstream in ("St.txt");      //it is used to read file
int flag=0;
while(in.read((char *)&s,sizeof(s)))
{
    if (s.roll_no()==n){
        cout<<"Record found!!";
        //cout<<"\n"<<roll<<"\t"<<name<<"\t"<<Add<<"\t"<<Div;
        s.display();
        flag=1;
        break;
    }
   
}
if (flag==0){
 cout<<"No such records found";
    }
    in.close();
}


void display()
{
	stud s;
	ifstream infile("St.txt");
	while(infile.read((char *)&s, sizeof(s)))
	{
		s.display();
	}

	infile.close();
}


void add_record(){
stud s;
ofstream o("St.txt",ios::app);
s.accept();
o.write((char *)&s,sizeof(s));
o.close();
cout<<"record inserted succesfully";
}

int main(){
create();
display();
search();
add_record();

return 0;
}

