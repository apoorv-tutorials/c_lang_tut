# include<stdio.h>

int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch <= 122 && ch >=97){
        printf("it is lower case\n");
    }else 
    {
        printf("it is not lower case\n");
    }
    
    return 0;
}