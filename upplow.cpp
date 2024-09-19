#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a[3][3],n;
    int sumdg=0,sumlow=0,sumup=0;
    cout<<"Enter the size of square matrix";
    cin>>n;
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(i==j){
                sumdg=sumdg+a[i][j];

            }
            else if(i<j){
                sumup=sumup+a[i][j];
            }
            else{
                sumlow=sumlow+a[i][j];
            }

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }







    cout<<sumdg;
    cout<< "\n"<<sumlow;
    cout<< "\n"<<sumup;
    return 0;
}
