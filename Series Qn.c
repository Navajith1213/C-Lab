#include <stdio.h>
#include <math.h>
void Sin_series();
void Cos_series();
void Sum_cube();
int main() {
    Sin_series();
    Cos_series();
    Sum_cube();
    return 0;
}
void Sin_series(){
    printf("------ SIN SERIES ------\n");
    float x,sum,term;
    int n,sign;
    printf("Enter X:");
    scanf("%f",&x);
    printf("Enter N:");
    scanf("%d",&n);
    sign=1;
    term=x;
    for (int i = 1; i <= n; i++) {
        sum+=sign*term;
        sign=(i%2==0)?1:-1;
        term*=(x*x)/((2*i)*(2*i+1));
    } 
    printf("The sum of sin(%.2f) series is: %.3f",x,sum);
    printf("\nThe value of sin(%.2f) using function %.3f", x, sinf(x));
}
void Cos_series(){
    float x,sum=0,term;
    int n,sign;
    printf("\n------ COS SERIES ------\n");
    printf("Enter X:");
    scanf("%f",&x);
    printf("Enter N:");
    scanf("%d",&n);
    sign=1;
    term=1;
    for (int i = 1; i <= n; i++) {
        sum+=sign*term;
        sign=(i%2==0)?1:-1;
        term*=(x*x)/((2*i-1)*(2*i));
    }
    printf("The sum of cos(%.2f) series is: %.3f",x,sum);
    printf("\nThe value of cos(%.2f) using function %.3f", x, cosf(x));
    printf("\n-------------------------\n");
}
void Sum_cube() {
    printf("\n-------------------------");
    int n,sum=0;
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        sum+=i*i*i;
    }
    printf("\nThe sum of cubes of first %d natural numbers is: %d", n, sum);
    printf("\n-------------------------\n");
}