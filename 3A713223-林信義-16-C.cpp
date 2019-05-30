#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char num[10][3]={"箂","滁","禠","把","竩","ヮ","嘲","琺","","╤"};
    char ch[3][3]={"","ㄕ","珺"};
    char wan[3][3]={"","货","窾"};
    int i, j, len, group, start, digit, c=0, flag=0;
    char n[20];  

    printf("叫块俱计(计惠璶16计)" );
    scanf("%s",n); 
    len = strlen(n);

    if (len>16) {
        printf("俱计禬筁16计, 礚猭锣传...\n");
        exit(0);
    }
    group=(len-1)/4+1;
    printf("锣传挡狦");
    
    for(i=0;i<group;i++) {
        flag=0; 
	    if (i==0) start=(4-len%4)%4;
        else start=0;
        for (j=start;j<4;j++) {
            digit=n[c++]-48;
		    if(digit==0) continue; 
            printf("%s",num[digit]);
            if(j!=3) 
            printf("%s",ch[j]);
            flag=1;
            }
        if (group!=1 && i!=group-1 && flag!=0) {
            printf("%s",wan[4-group+i]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}


