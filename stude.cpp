#include <cstring>    
#include <iostream>
using namespace std;
struct student
{
  int rollno;
  char name[25];
  float SGPA;
};

void create(struct student s[25]){
int i,n;
cout<<"Enter how many records you want to insert: ";
cin>>n;
  for (i=0;i<n;i++)
 {
     cout<<"enter roll no: "<<"\n";
     cin>>s[i].rollno;
     cout<<"enter name: "<<"\n";
     cin>>s[i].name;
     cout<<" enter SGPA:" <<"\n";
     cin>>s[i].SGPA;
  }
}
void display(struct student s[25],int n){
     cout<<"roll no"<<"\t"<<"name"<<"\t"<<"SGPA"<<"\t";
    for (int i=0;i<n;i++)
    {
     cout<<"\n"<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].SGPA<<"\t";
     }
}
void lin(struct student s[25],int n)
{
int i,count=0;
float sg;
cout<<"\n"<<"enter data to search: ";
cin>>sg;
for(i=0;i<n;i++)
{
 if (s[i].SGPA==sg)
 {
 count++;
 cout<<"\n"<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].SGPA<<"\t";
 }

}
cout<<"\n"<<"total records found : "<<count;
}

void bubblesort(struct student s[25],int n)
{
  int i,j;
  struct student temp;
  
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-1-i;j++)
   { 
    if (s[j].rollno>s[j+1].rollno)
    {
       temp=s[j];
       s[j]=s[j+1];
       s[j+1]=temp;
                              
	}
    }
}
}
void insort (struct student s[25],int n)
{
  int i,j;
  struct student temp;
  
  
  for (i=1;i<n;i++)
  { 
    temp=s[i];
    j=i-1;
    
   while (j>=0&& strcmp(s[j].name,temp.name)>0) 
   { 
     s[j+1]=s[j];
     j--;
   }
     s[j+1]=temp;
    }
    cout<<"\n";
display(s,n);
    
 } 
 void binsearch (struct student s[25],int n)
 {
   insort(s,n);
   int left=0,right=n-1,mid,flag=0;
   char x[20];
   cout<<"Enter name to search: ";
   cin>>x;
   while(left<=right){
    mid=(left+right)/2;
    if(strcmp(x,s[mid].name)==0){
        flag=1;
        cout<<"\n Record found \n";
        cout << s[mid].rollno << "\t" << s[mid].name << "\t" << s[mid].SGPA;
        return; 
    }
    if(strcmp(x,s[mid].name)<0){
        right=mid-1;
    }
    else{
        left=mid+1;
    }
   }
   if(flag==0){
    cout<<"\n not found";
   }
   
 }



int part(student s[],int l,int i){
int p,q;
struct student pivot=s[l];
struct student temp;
p=l;
q=i;
while(p<q){
    while(pivot.SGPA<=s[p].SGPA){
        p++;
    }
    while(pivot.SGPA>s[q].SGPA){
        q--;
    }
    if(p<q){
        
        temp=s[p];
        s[p]=s[q];
        s[q]=temp;
    }

}
    temp=s[q];
    s[q]=s[l];
    s[l]=temp;
    return q;
}
void quick(student s[],int l,int i){
    if(l < i){
        int pivot=part(s,l,i);
        quick(s , l, pivot-1);
        quick(s,pivot+1,i);
        }
}
 
 int main()
 { 
  struct student s[25];
  int i,n=3;
  create(s);
  /*bubblesort(s,n);
 display( s,n);
lin(s,n);
insort(s,n);
binsearch(s,n);*/
quick(s,0,n-1);
display(s,n);

return 0;
}

 
     

