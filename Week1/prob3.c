#include <stdio.h>
#include <stdlib.h>

struct complex{
	float real;
	float imag;
};

struct complex addition(struct complex c1, struct complex c2){	
		struct complex c3;
		c3.real = c1.real + c2.real;
		c3.imag = c1.imag + c2.imag;
		return c3;
}

struct complex subtraction(struct complex c1, struct complex c2){
		struct complex c3;	
		c3.real = c1.real - c2.real;
		c3.imag = c1.imag - c2.imag;
		return c3;
}

struct complex multiplication(struct complex c1, struct complex c2){
		struct complex c3;	
		c3.real = c1.real * c2.real - c1.imag * c2.imag;
		c3.imag = c1.imag * c2.real + c2.imag * c1.real;
		return c3;
}

int main(){
	struct complex c1, c2, c3;
	printf("Enter 1st complex number\n");
	scanf("%f %f",&c1.real, &c1.imag);
	printf("Enter 2nd complex number\n");
	scanf("%f %f", &c2.real, &c2.imag);
					
	c3 = addition(c1, c2);
	printf("add = %f + i(%.2f)\n", c3.real,c3.imag);

	c3 = subtraction(c1, c2);
	printf("sub = %f + i(%.2f)\n", c3.real,c3.imag);

	c3 = multiplication(c1, c2);
	printf("multiply = %f + i(%.2f)", c3.real, c3.imag);
}
	