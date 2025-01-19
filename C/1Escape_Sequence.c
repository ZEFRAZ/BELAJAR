#include <stdio.h>
#include <stdbool.h>
int main(){
    /*Escape Sequence = karakter kombinasi backslash \ yang diikuti dengan huruf atau kombinasi beberapa digit, yang menentukan tindakan pada baris teks atau yang dikenal dengan string*/
    printf("Aku\nsuka\nbakso\n");                                       //Newline
    printf("\"Aku suka Main Game\" - Rangga Muhamad Fajar\n");          //Quote
    printf("\'Aku ingin belajar coding\' -- Rangga Muhamad Fajar\n");    //Single Quote
    printf("\\Ini adalah backslash\\ \n");                              // Backslash
    printf("Siapa namamu\? \n");                                        // Tanda Tanya
    printf("\a Rangga\n");                                              // Bell/Beep
    printf("\b Rangga\n");                                              // Backspace
    printf("\e Rangga\n");                                              // Escape
    printf("\f Rangga\n");                                              // Form Feed
    printf("\n Rangga\n");                                              // Newline
    printf("\r Rangga\n");                                              // Carriage Return    
    printf("\t Rangga\n");                                              // Horizontal Tab
    printf("\v Rangga\n");                                              // Vertical Tab  
    printf("1\t2\t3\n");
    printf("4\t5\t6\n");
    printf("7\t8\t9\n");

    return 0;
}
