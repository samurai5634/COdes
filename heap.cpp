#include<iostream>
using namespace std;
class Heap{
    int a[50],b[50],n;

    public :
       Heap(){
        n=-1;
       }
       void insheap(int );
       int delheap();
       void display();
       void heapsort();

};
void Heap::insheap(int item){
    int i,j;
    n++;
    i=n;
    while(i>0){
        j=(i-1)/2;
        if(item<=a[j]){        ///max heap tree
            a[i]=item;
            return;
        }
        a[i]=a[j];
        i=j;
    }
    a[0]=item;
}
int Heap::delheap(){
   int left,right,last,first;
    first=a[0];
    last=a[n];
    n--;
    int i=0;
    left=1;
    right=2;
while(right<=n){
    if(last>a[left]  &&  last>a[right]){
        a[i]=last;
        return first;
    }
    if(a[right]<=a[left]){
        a[i]=a[left];
        i=left;

    }

    else{
        a[i]=a[right];
        i=right;
        }
    left=(2*i)+1;
    right=left+1;

}
if(left==n){
    if(last<a[left]){
    a[i]=a[left];
    i=left;
     }
   }
    a[i]=last;
    return first;
}

void Heap::display(){
    for(int i=0;i<=n;i++){
        cout<<"\t"<<a[i];
    }
}
void Heap::heapsort(){
    int temp;
    int ch,j=0,item;
    do{
        cout<<"enter item to insert: ";
        cin>>item;
        insheap(item);
        cout<<"Press 1 to enter again or 0 to exit";
        cin>>ch;
        }while(ch!=0);
       // display();
        for(int i=0;i<=n;i++){
        cout<<"\t"<<a[i];
    }
    temp=n;
   
    while(n!=-1)
    {
        b[j]=delheap();
        j++;
    }
    //cout<<"\n"<<b[i];
    cout<<"\n after sorting: ";
    for(int i=temp;i>=0;i--){
         cout<<"\t"<<b[i];
    
    }
}
int main(){
    Heap h;
    h.heapsort();
return 0;

}
  

