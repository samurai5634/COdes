#include<stdio.h>
int A[3][3];
int B[3][3];
int C[3][3];
int i,j,k,m;

void input(){
    
    printf("%d",C[4][4]);
    printf("Enter number of rows and columns for A");
    printf("\n");
    scanf("%d%d",&i,&j);
     printf("Enter number of rows and columns for B");
    printf("\n");
    scanf("%d%d",&k,&m);
    printf("Enter elements for A");
    printf("\n");
    for (int r=0;r<i;r++){
         for (int c=0;c<j;c++){
            scanf("%d",&A[r][c]);

    }
}

 printf("Enter elements for B");
    for (int r=0;r<k;r++){
         for (int c=0;c<m;c++){
            scanf("%d",&B[r][c]);

    }
}
}
void display(int X[i][j]){
     for (int r=0;r<i;r++){
         for (int c=0;c<j;c++){
             printf("%d",X[r][c]);
             printf(" ");
   
         }
         printf("\n");
     }
   
}

void add(){
    input();
    if(i==k && j==m){
    for (int r=0;r<i;r++){
         for (int c=0;c<j;c++){
        C[r][c] = A[r][c] + B[r][c];

         }
       }
    }
    else
    printf("Addition is not possible");
}

void mul(){
    input();
    if(j==k){
    for (int r=0;r<i;r++){
         for (int c=0;c<m;c++){
            for(int n=0;n<j;n++){
                C[r][c] = C[r][c] + (A[r][n]*B[n][c]);

                }

           }
       }
   }
   else
   printf("Multiplication is not possible");

}

void trans(){
    input();
      for (int r=0;r<i;r++){
         for (int c=0;c<j;c++){
            C[j][i]=A[i][j];


         }
      }

}

void MERGE(){
    input();
     if( j==m)
    for (int r=0;r<i+k;r++){
         for (int c=0;c<j;c++){
            if(r<i){
                C[r][c]=A[r][c];
            }
            else{
                C[r][c]=B[r-3][c];
            }
         }
    }
     for (int r=0;r<i+k;r++){
         for (int c=0;c<j;c++){
             printf("%d",C[r][c]);
             printf(" ");
   
         }
         printf("\n");
     }
   }










void  main(){
    
    //input();
/*
    add();
    display(A);
    display(B);
    display(C);
 */
 //mul();
  //display(C);
MERGE();

}