#include<stdio.h>
int main()
{
    int i,j;
    char ch[] = "PROGRAM" ;
    for(i=0;i<=6;i++){
        for(j=0;j<=6;j++){
            if(i==j|| (i+j)==6 )
              printf("%c", ch[j]);
            else 
              printf(" ");  
        }
        printf("\n");
    }
    return 0;
}