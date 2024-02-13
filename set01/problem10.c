#include<stdio.h>
void input_two_strings(char *string1, char *string2); 
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main() {
    char string1[100], string2[100];
    int result;
    input_two_strings(string1, string2); 
    result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;
}

void input_two_strings(char *string1, char *string2) {
    printf("enter the first string : ");
    scanf("%s", string1);

    printf("enter the second string : ");
    scanf("%s", string2);
}

int stringcompare(char *string1, char *string2) {
   for(int i = 0; string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0'; i++)
    if(string1[i] > string2[i]){
        return 2;
    }
    else if(string1[i] < string2[i]){
        return 1;
    }
        else {
        return 0;
        }
   }


void output(char *string1, char *string2, int result) {
    if(result = 2){
        printf("%s is greater than %s\n", string1, string2);
    }
    else if(result = 1){
        printf("%s is greater than %s\n", string2, string1);
    }
    else
    {
        printf("%s is equal to %s\n", string1, string2);
    }
}