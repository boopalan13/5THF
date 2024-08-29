#include<stdio.h>
#include<stdlib.h>
#include"mylib.h"
#define size 10

typedef struct {
    int array[size];
    int top;
}s;
s stack;


void initialize(){
    stack.top=-1;
}

void push(int number){
    if(stack.top==size-1){
        printf("stack overflow!\n");
    }
    stack.array[++stack.top]=number;
}
int pop(){
    if(stack.top==-1){
        printf("stack underflow!\n");
        return -1;
    }
    stack.array[stack.top]=NULL;
    return stack.array[--stack.top];
}
int peek(){
    if(stack.top==-1){
        printf("stack is empty!\n");
        return -1;
    }
    return stack.array[stack.top];
}
    


int main(){
    


    
}
