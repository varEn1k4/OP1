#include <stdio.h>
#include <conio.h>

int roman(int i,int j,char c) {
    while (i>=j) {
        putchar(c);
        i=i-j;
    }
    return(i);
}

int main() {
    int a = 0;
    printf("Enter your number (from 1 to 3999)\n");
    scanf(" %d",&a);
    if (a>=4000 || a<1) {
        printf("Wrong number\n");
        printf("Press enter to end");
        getch();
        return 0;
    }
    a=roman(a,1000,'M');
    a=roman(a,500,'D');
    a=roman(a,100,'C');
    a=roman(a,50,'L');
    a=roman(a,10,'X');
    a=roman(a,5,'V');
    a=roman(a,1,'I');
    printf("\nPress enter to end");
    getch();
    return 0;
}