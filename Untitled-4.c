#include <stdio.h> 
#include <math.h> 
//prototype
int fact(int); 
int main() 
{ 
    int x,n,i,m=1,r; 
    float sum=0; 
    printf("Enter the value of x: "); 
    scanf("%d",&x); 
    printf("Enter the number of terms: "); 
    scanf("%d",&n); 
    for(i=1;i<=n;i=i+2) 
    { 
        r=fact(i); 
        sum=sum+m*((pow(x,i))/r); 
        m=m*-1; 
    } 
    printf("Sum of the series is : %f",sum); 
} 
int fact(int n) 
{ 
    int j,f=n; 
    for(j=1;j<n;j++)
        f=f*j; 
    return f; 
}