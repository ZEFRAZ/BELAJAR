#include <stdio.h>
#include <stdbool.h>
int main(){
    // format specifier % defines and formats a type of data to be displayed

    // %c = character
    // %s = string
    // %d = integer
    // %f = float 
    // %lf = double

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- left align

    float item1 = 5.99;
    float item2 = 15.76;
    float item3 = 125.55;

    printf("Harga dari 5 kilo buah jeruk adalah Rp %-8.2f\n", item1);
    printf("Harga dari 10 liter air galon adalah Rp %-8.2f\n", item2);
    printf("Harga dari VGA NVIDIA 5090 adalah Rp %-8.2f\n", item3);

 
    int x; //deklarasi
    x = 10; //inisialisasi
    int y = 321; // deklarasi + inisialisasi

    int age = 19;           //integer
    float gpa = 4.0;        //floating point number
    char grade = 'A';       //character
    char name[] = "Rangga"; //array of character

    printf("Nama : %s\n", name);
    printf("Usia : %d\n", age);
    printf("Kelas: %c\n", grade);
    printf("GPA  : %.1f\n", gpa);

    return 0;
}
