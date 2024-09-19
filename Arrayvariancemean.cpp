#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float sum=0.0,variance,mean,dev,sumsq=0.0;
    float a[10];
    int  n;
    cout<<"Enter number of elements ";
    cin>>n;
    cout<<"Enter elements ";
    for (int num=0;num<n;num++){
        cin>>a[num];
        sum=sum+a[num];
    }
    mean=sum/n;
    for (int num=0;num<n;num++){
        sumsq=sumsq+pow((mean-a[num]),2.0);
    }

    variance=sumsq/n;
    dev=sqrt(variance);
    return 0;
}