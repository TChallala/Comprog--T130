#include <stdio.h>
int auth(int acc[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == acc[i][0] && pin == acc[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int acc[3][2] = {{1234,1234},{1205,2002},{0315,2002}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(auth(acc,id,pin)){
        printf("Logged in to:\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}
