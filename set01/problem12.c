#include<stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

typedef struct Complex complex;

int get_n(); 
complex input_complex(); 
void input_n_complex(int n, complex c[n]);
complex add(complex a, complex b);
complex add_n_complex(int n, complex c[n]);
void output(int n, complex c[n], complex result);

int main(){
int n;
n = get_n();
complex c[n];
input_n_complex(n, c);
complex result = add_n_complex(n, c);
output(n, c, result);
}

int get_n() {
    float n;
    printf("enter the number of complex numbers required : ");
    scanf("%f", &n);
    return n;
}

complex input_complex() {
    complex c;
    printf("enter the real part : ");
    scanf("%f", &c.real);

    printf("enter the imaginary part : ");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n, complex c[n]) {
    for(int i = 0; i < n; i++){
        c[i] = input_complex();
    }
}

complex add(complex a, complex b) {
    complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

complex add_n_complex(int n, complex c[n]) {
    complex sum = {0, 0};
    for(int i = 0; i < n; i++){
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, complex c[n], complex result) {
    for(int i = 0; i < n-1; i++){
        printf("%.1f + %.1fi", c[i].real, c[i].imaginary);
    }
    printf("%.1f + %.1fi = %.1f + %.1fi", c[n-1].real, c[n-1].imaginary, result.real, result.imaginary);
}










