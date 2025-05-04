//Ex. of return with argument

#include<stdio.h>
 int sum(int x, int y);

int main(){

 int a,b,c;
printf("Enter two no. ");
 scanf("%d%d",&a,&b);

 c=sum(a,b);
printf("Sum of two no is %d",c);
}

 int sum(int x, int y){
 int z;
z=x+y;
return (z);
}