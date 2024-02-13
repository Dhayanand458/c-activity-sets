// 3. Write a C program to add two numbers using **pass by value**

// ***Function declarations***

// ```c
// int input();
// int add(int a, int b);
// void output(int a, int b, int sum);

#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main() {
    int x, y, total;
    x = input();
    y = input();
    total = add(x, y);
    output(x, y, total);
    return 0;
}

int input() {
    int n;
    printf("enter the value : ");
    scanf("%d", &n);
    return n;
}

int add(int a, int b) {
    int sum = 0;
    sum = a + b;
    return sum;
}

void output(int a, int b, int sum) {
    printf("the sum of %d and %d is %d", a ,b, sum);
}





