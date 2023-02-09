# C Practice

- This File Contains All the C Programming Experiments That I Performed in Sem-1

## Experiment 1:

### 1. Area of Circle
```c
#include<stdio.h>
int main()
{
    int r;
    printf("Enter Value of Radius:");
    scanf("%d,",&r);
    printf("radius of circle is:%d \n",r);
    float area = 3.14*r*r;
    printf("area of Circle is: %f",area);
    return 0;
}
```
### 2. Gross Salary
```c
#include<stdio.h>
int main ()
{
	float bs, hra, da, gs;
	printf("Enter Value of Basic Salary:");
	scanf("%f", &bs);
	printf("Basic Salary is %f \n",bs);
	hra = bs*0.8/100;
	da = bs*0.2/100;
	gs = bs+hra+da;
	printf("Gross Salary of the Employee is: %f",gs);
	return 0;
}
```
### 3. Sum of n Natural Numbers
```c
#include<stdio.h>
int main() 
{
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    int sum = 0;
    int i = 1;
    for(i=1;i<=n;i++)
	{
        sum = sum + i;
    }
    printf("Sum of First %d Natural Numbers is %d", n, sum);
    return 0;
}
```
## Experiment 2:

### 1. Arithmatic Operator
```c
#include<stdio.h>
int main()
{
	int a,b,s,d,p,r;
	float q;
	printf("Enter value of a\n");
    scanf("%d", &a);
    printf("Enter value of b\n");
    scanf("%d", &b);
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/(float)b;// typecasting variable
    r=a%b;
    printf(" sum of a and b is: %d\n", s);
    printf(" difference of a and b is:%d\n", d);
    printf(" product of a and b is: %d\n", p);
    printf(" quotient of a and b is:%f\n", q);
    printf(" reminder of a and b is: %d\n", r);
    return 0;
}
```
### 2. Relational, Logical & Assignment Operator
```c
#include<stdio.h>
int main()
{
 int A,B,sum;
 printf("Enter value of A and B\n");
 scanf("%d %d",&A,&B);
 sum=A+B;
 printf("Sum of A and B is: %d\n",sum);
 
 if(sum>1 && sum<20)
 {
 printf("Sum is between 1 and 20");
 }
 else
 {
 printf("Sum greater than 20");
 }
return 0;
}
```
