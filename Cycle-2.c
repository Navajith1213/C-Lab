//Name: G S Navajith
//Register Num: 24100781

#include <stdio.h>
int Denominator_Check(int,int,int,int);
int Unique_Solution1(int,int,int,int,int,int);
int Unique_Solution2(int,int,int,int,int,int);
int main(){
    int A,B,C,D,M,N,UV1,UV2;
    printf("Enter the value of A :");
    scanf("%d",&A);
    printf("Enter the value of B:");
    scanf("%d",&B);
    printf("Enter the value of C:");
    scanf("%d",&C);
    printf("Enter the value of D:");
    scanf("%d",&D);
    printf("Enter the value of M:");
    scanf("%d",&M);
    printf("Enter the value of N:");
    scanf("%d",&N);
    if (Denominator_Check(A,B,C,D)==0){
        return -1;}
    UV1= Unique_Solution1(A,B,C,D,M,N);
    UV2= Unique_Solution2(A,B,C,D,M,N);
    printf("The value of X1 is: %d\n",UV1);
    printf("The value of X2 is: %d",UV2);
    return 0;
}
int Denominator_Check(int A, int B, int C, int D){
    int Num=(A*D)-(C*B);
    if (Num==0){
        printf("Invalid Input!! The denominator value is zero.");
        return 0;
    }}
int Unique_Solution1(int A,int B,int C,int D,int M,int N){
    int Deno=(A*D)-(C*B);
    int X1=((M*N)-(B*N))/Deno;
    return(X1);
}
int Unique_Solution2(int A,int B,int C,int D,int M,int N){
    int Deno=(A*D)-(C*B);
    int X2=((M*D)-(N*C))/Deno;
    return(X2);
}