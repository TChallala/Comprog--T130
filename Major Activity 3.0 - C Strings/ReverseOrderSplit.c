#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    char *strings[10][10];
    printf("Enter any string: ");
    scanf("%[^\n]s",string);
    char *token = strtok(string," ");
    int x = 0;
    while (token != NULL)
    {

        strings[x][0] = token;
        token = strtok(NULL," ");
        x++;
    }
    --x;
    printf("Reverse order\n");
    while(x>=0)
    {
         printf("%s ",strings[x][0],x);
         x--;
    }
}
