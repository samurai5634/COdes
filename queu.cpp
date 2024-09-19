#include<iostream>
using namespace std;
class Circular {
int que[5];
int front, rear,n;
public:
void enque(int key);
void  deque();
void display();
Circular(){
    n=5;
    front=rear=-1;

}
};
void Circular:: enque(int key){
    if(rear==-1&&front==-1){
        rear=front=0;
        que[rear]=key;              //FIFO
        }
    else if(((rear+1)%n)==front){
        cout<<"queue is  overflow"; 
    }

    else{
        rear=(rear+1)%n;
        que[rear]=key;
    }
}
   void Circular::deque(){
    int data;
    if(front==-1){              //if no element is left 
        cout<<"Underflow";
    }
    else if(front==rear)
    {                      //if only one element is left
    data=que[front];
    front=rear=-1;
    }
    else{
        data=que[front];
        front=(front+1)%n;
        cout<<"the item deleted is :"<<data;
        //return data;
        }
}

void Circular::display(){
    int i=front;
    if(front==-1&&rear==-1){
        cout<<"\n queue is empty";
        }
    else{
        while(i!=rear){
            cout<<que[i]<<"\t";
            i=(i+1)%n;
        }
        cout<<que[rear];
    }
    
}

int main(){
Circular c;
int d,ch;
do{


cout<<"\n 1.insert";
cout<<"\n 2.delete";
cout<<"\n 3.display";

cout<<"\n Enter choice: ";

cin>>ch;
switch(ch){
    case 1:
    cout<<"\n Enter data: ";
    cin>>d;
    c.enque(d);
    break;
    case 2:
    c.deque();
    break;
    case 3:
    c.display();
    break;
}
}while(ch!=4);

/*c.enque(d);
c.enque(d);

*/


//
//c.display();

return 0;

}



