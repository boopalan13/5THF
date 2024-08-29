#include"mylib.c"
int main(){
    char str[]="abc";
    for(int i=0;i<strlen(str);i++){
        printf("str[%d] : %d\n",i,str[i]-'A');
    }
}