#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = 'C';                   //single character %c
    char b[] = "Mira";                //array of characters %s

    float c = 3.141592;             //4 bytes (32bits of precision) 6-7 digits %f
    double d = 3.141592653589793;   //8 bytes (64 bits of precision) 15-16 digits %lf

    bool e = true;                  // 1 byte (true or false) %d

    char f = 127;                   //1byte (-128 to +127) %d or %c
    unsigned char g = 255;          //1byte (0 - +255) %d or %c

    short int h = 32787;            //2bytes (-32,768 to +32,767) %d
    unsigned short i = 65535;       //2bytes (0 to +65,535) %d

    int j = 2147483647;             //4bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295L;   //4bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;        //8bytes (-9 quintillion to +9 quintillion)
    unsigned long long int m = 18446744073709551615U;     //8bytes ( 0 to +18 quintillion)

    printf("%c\n",a);
    printf("%s\n",b);
    printf("%f\n",c);
    printf("%lf\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",k);
    printf("%lld\n",l);
    printf("%llu",m);


    return 0;
}