#include<iostream>
using namespace std;
int main(){
float a[3][3];        //square matrix
int n=3;
cout<<"Enter elements";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<< " ";

        }
        cout<<"\n";
    }
int sum=0,sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i][0]*a[i][1];
        sum1=sum1+a[i][0]*a[i][2];
        }
    for(int j=0;j<n;j++){
        sum2=sum2+a[0][j]*a[1][j];
        sum3=sum3+a[0][j]*a[2][j];
        }
            if(sum==0 && sum1==0 && sum2==0 && sum3==0){
                cout<<"Orthogonal matrix ";
            }
            else
                cout<<"Not orthogonal matrix" ;
            
return 0;
}
















