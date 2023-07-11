#include <stdio.h>

void cbinary(int number) {
    int binary[64];
    int i = 0;

    while (number> 0) {
        binary[i] = number % 2;
        number = number/2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

void coctal(int number) {
    int octal[64];
    int i = 0;

    while (number > 0) {
        octal[i] = number % 8;
        number=number/ 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void chexadecimal(int number) {
    char hexadecimal[32];
    int i = 0;
                char hex[] = "0123456789ABCDEF";

    while (number > 0) {
        hexadecimal[i] = hex[number % 16];
        number=number/ 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() {
    int number;
     scanf("%d",&number);
     if(number<=0){
    printf("Invalid Input");
     }
     else{

  cbinary(number);
    coctal(number);
    chexadecimal(number);
     }
    return 0;
}
