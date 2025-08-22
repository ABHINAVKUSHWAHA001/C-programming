#include<stdio.h>
#define  N 5;
int stack [N];
int top =- 1;


int push(){
    printf("Enter the data");
    scanf("%d",&x);
    if(top ==N-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top] = x;
    }
}

int pop(){
    int item;
    if(top==-1){
        printf("underflow");
    }
    else{
        top--;
        printf("%d",item);
    }
}

int peek(){
    if(top == -1)
    {
        printf("stack is empty");
    }
    else{
        printf("%d",stack[top]);
    }
}

int display(){
    int i;
    for(i = top ; i>=0; i--){
        printf("%d",stack[i]);
    }
}

int main(){
    int ch;
    do {
        printf("Enter choice 1 push : 2 pop : 3 peek : 4 display");
    }
    switch(ch){
        case 1:
        push;
        break;
         
        case 2:
        pop;
        break;

        case 3:
        peek;
        break;

        case 4:
        display;
        break;

      default:
      printf("invalid choice");
    }

while(ch = 0);
return 0;
}
