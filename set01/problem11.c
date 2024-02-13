#include<stdio.h>
struct complex
{
    float real;
    float imaginary;
};

typedef struct complex complex;

complex input_complex(); 
complex add_complex(complex a, complex b); 
void output(complex a, complex b, complex sum);

int main() {
    complex x, y, total;
    x = input_complex(); 
    y = input_complex(); 
    total = add_complex(x, y); 
    output(x, y, total);
    return 0;
}

complex input_complex() {
    complex n;
    printf("enter the real number : ");
    scanf("%f", &n.real);

    printf("enter the imaginary number : ");
    scanf("%f", &n.imaginary);
    return n;
}

complex add_complex(complex a, complex b){
    complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

void output(complex a, complex b, complex sum) {
    printf("the sum of %f + %f and %f + %f is %f + %f", a.real, b.real, a.imaginary, b.imaginary, sum.real, sum.imaginary);
}