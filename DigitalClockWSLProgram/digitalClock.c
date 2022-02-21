#include <stdio.h>
#include <windows.h>

int main(){
    int h,m,s;
    int d = 1000;

    printf("Set time: \n");
    scanf("%d:%d:%d", &h, &m, &s);

    if(h>12 || m>60 || s>60){
        printf("Invalid time!\n");
        return 0;
    }

    while(1){
        s++;
        if(s>=60){
            s = 0;
            m++;
        }
        if(m>=60){
            m = 0;
            h++;
        }
        if(h>=24){
            h = 0;
        }
        printf("\n Clock:");
        printf("%d:%d:%d\n", h, m, s);

        Sleep(d);
        system("cls");
    }
}