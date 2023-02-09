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
