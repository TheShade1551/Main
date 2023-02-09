# C Practice

- This File Contains All the C Programming Experiments That I Performed in Sem-1

## Experiment 1:

### 1.1 Area of Circle
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
### 1.2 Gross Salary
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
### 1.3 Sum of n Natural Numbers
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

### 2.1 Arithmatic Operator
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
### 2.2 Relational, Logical & Assignment Operator
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
### 2.3 Swap Variables without Temporary Variable
```c
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Variables A & B:\n");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("New Values of Variables A & B are\nA-%d\nB-%d",a,b);
    return 0;
}
```
## Experiment 3:

### 3.1 Grade Display 
```c
#include<stdio.h>
int main()
{
	int num;
	printf("Enter Your Marks:");
	scanf("%d", &num);
	printf("You Entered %d Marks \n",num);
	if(num>=80 && num<=100)
	{ printf("You got A Grade \n");
	}
	else if(num>=60 && num<80)
	{
		printf("You Got B Grade \n");
	}
	else if(num>=40 && num<60)
	{
	printf("You Got C Grade \n");
}
else if(num<40)
{
	printf("Better Luck Next Time \n");
}
return 0;
}
```
### 3.2 Quadratic Equation 
```c
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    double root1, root2;
    printf("This Program Will Find the Roots of the Quadratic Equation ax^2+bx+c=0\n");
    printf("Enter a, b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;

    if(d<0)
	{
        printf("The Given Quadratic Equation has Complex Roots\n");
		double e = -(b)/(double)(2*a);
        double f = sqrt(-d)/2*a;
        printf("First root = %.2lf + (%.2lf)i\n",e,f);
        printf("Second root = %.2lf - (%.2lf)i\n",e,f);
    }
    else
	{
        root1 = (-b+sqrt(d))/(2 * a);
        root2 = (-b-
		sqrt(d))/(2 * a);
        printf("First root= %.2lf\n", root1);
        printf("Second root= %.2lf\n", root2);
    }
    return 0;
}
```
## Experiment 4:

### 4.1 Sum of Inverse Factorial Series 
```c
#include <string.h>
#include <math.h>
int main()
{
    int i,fact,j,n;
    float sum;
    printf("Enter the value of N:");
    scanf("%d",&n);
    sum = 0.0f;
    for (i=1; i<=n; i++)
	 {
        fact=1;
        for(j=1; j<= i; j++)
		{
            fact=fact*j;
        }
        sum=sum+((float)1/(float)fact);
    }
    printf("Sum of The Given Series is: %f\n",sum);
    
    return 0;
}
```
### 4.2 Pyramid 1234ABC Pattern
```c
#include<stdio.h>
int main()
{
	int n,r,c,s,d;
	char ch;
	
	printf("Enter number of rows:");
	scanf("%d", &n);
	
	for(r=1; r<=n; r++)
	{
		for(s=1; s<=n-r; s++)
		{
			printf(" ");
		}
		for (c=1; c<=r; c++)
		{
			printf("%d",c);
		}
		ch='A';
		for(d=1; d<r; d++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
```
## Experiment 5:

### 5.1 Armstrong Numbers
```c
#include<stdio.h>
int isArmstrong(int num);
void printArmstrong(int start, int end);

int main()
{
	int start,end;
	printf("Enter Lower Limit to Print Armstrong numbers: ");
	scanf("%d",&start);
	printf("Enter Upper Limit to Print Armstrong numbers: ");
	scanf("%d",&end);
	
	printf("All armstrong numbers between %d to %d are:\n",start,end);
	printArmstrong(start,end);
	
	return 0;
}

int isArmstrong(int num)
{
	int temp,LastDigit,Sum;
	
	temp=num;
	Sum=0;
	
	while(temp !=0)
	{
		LastDigit = temp%10;
		Sum+=LastDigit*LastDigit*LastDigit;
		temp/=10;
	}
	if(num==Sum)
	return 1;
	else
	return 0;
}

void printArmstrong(int start,int end)
{
	while(start<=end)
	{
		if(isArmstrong(start))
		{
			printf("%d, ",start);
		}
		start++;
	}
}
```
### 5.2 Prime Numbers
```c
#include<stdio.h>
int isPrime(int num);
void printPrime(int lowerLimit, int upperLimit);

int main()
{
	int lowerLimit, upperLimit;
	printf("Enter the lower and upper limit to list prime:");
	scanf("%d%d", &lowerLimit, &upperLimit);
	printPrime(lowerLimit, upperLimit);
	return 0;
}
void printPrime(int lowerLimit, int upperLimit)
{
	printf("All prime number between %d to %d are:",lowerLimit,upperLimit);
	while(lowerLimit<=upperLimit)
	{
		if(isPrime(lowerLimit))
		{
			printf("%d ",lowerLimit);
		}
		lowerLimit++;
	}
}
int isPrime(int num)
{
	int i;
	for(i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
```
### 5.3 Factorial using Recursion
```c
#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
	int n;
	printf("Enter a positive integer:");
	scanf("%d", &n);
	printf("Factorial of %d = %1d",n,multiplyNumbers(n));
	return 0;
	}
	long int multiplyNumbers(int n){
		if(n>=1)
		return n*multiplyNumbers(n-1);
		else
		return 1;
}
```
### 5.4 Number in Words
```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void convert(char*num){
	int len = strlen(num);
	if(len = 0){
		fprintf(stderr,"empty string\n");
		return;
	}
	if(len>4){
		fprintf(stderr,"Length more than 4 is not supported\n");
		return;
	}
	char*single_digit[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char*tens_place[]={"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char*tens_multiple[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	char*tens_power[]={"hundred","thousand"};
	printf("\n%s:",num);
	if(len=1){
		printf("%s\n",single_digit[*num-'0']);
		return;
	}
	while(*num!='\0'){
		if(len>=3){
			if(*num='0'!=0){
				printf("%s",single_digit[*num='0']);
				printf("%s",tens_power[len-3]);
			}
			--len;
		}
		else{
			if(*num=='1'){
				int sum=*num-'0'+*(num+1)-'0';
				printf("%s\n",tens_place[sum]);
				return;
			}
			else if(*num=='2' &&*(num+1)=='0'){
				printf("twenty\n");
				return;
			}
			else{
				int i=*num-'0';
				printf("%s",i?tens_multiple[i]:"");
				++num;
				if(*num!='0')
				printf("%s",single_digit[*num-'0']);
			}
		}
		++num;
	}
}
int main(){
	convert("5274");
	return 0;
}
```
## Experiment 6:

### 6.1 Element deletion in Array 
```c
#include <stdio.h>

int main()
{
    int a[100], pos, c, n;
    char ch = 'y'; 
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &a[c]);

    do
    {
        if (ch == 'y')
        {
            printf("Enter the Location Where You Wish To Delete Element\n");
            scanf("%d", &pos);
            if (pos >= n + 1)
                printf("Deletion Not Possible.\n");
            else
            {
                for (c = pos - 1; c < n - 1; c++)
                    a[c] = a[c + 1];
                n = n - 1;
                if (n > 0)
                {
                    printf("Resultant array:\n");
                    for (c = 0; c < n; c++) 
                        printf("%d\n", a[c]);
                }
                else
                {
                    printf("Array is empty\n");
                    return 0;
                }
            }
        }
        printf("Continue (y/n)?\n");
        scanf(" %c", &ch);
    } while (ch == 'y' && n != 0); 

    return 0;
}
```
### 6.2 Sorting of Array 
```c
#include <stdio.h>
int main()
{
    int i, j, a, n, number [30];
    char ch;
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number [i]);
    printf("Ascending or Descending?? 'a' or 'd'\n");
    scanf(" %c", &ch);
    if (ch == 'a')
    {
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number [j])
                {
                    a = number[i];
                    number [i]= number[j];
                    number[j] = a;
                }
            }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
    }  
    if (ch == 'd')
    {
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i]= number [j]; 
                    number[j] = a;
                }
            }
        }
        printf("The numbers arranged in descending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
    } 
    return 0;
}
```
