#include<stdio.h>
float input(); 
float square_root(float n); 
void output(float n, float sqrroot);
int main() {
    int n,sqrroot;
    n = input();
    sqrroot = square_root(n);
    output(n, sqrroot);
    return 0;
}

float input() {
    float n;
    printf("enter the value : ", &n);
    scanf("%f", &n);
    return n;
}

float square_root(float n) {
    float x = n;
    for(int i = 0; i < 10; i++)
    {
        x = 0.5 * (x + n/ x);
    }
    return x;
}

void output(float n, float sqrroot) {
    printf("the square root of %.1f is %.1f", n, sqrroot);
}


