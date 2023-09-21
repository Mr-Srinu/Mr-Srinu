#include<stido.h>
#define MAX 4
struct stack
{
    int items[MAX];
    int top;
}
void push(struct stack*,int ele);
void pop(struct stack*);
void display(struct stack*);
void peek(struct stack*);
int main()
{
    struct stack s;
    s.top=-1;
    int ch,ele
    printf("============");
    printf("main");
    printf("============");
    printf("1.push");
    printf(".pop");
    printf("3.peek");
    printf("4.display");
    printf("5.exit");
    printf("=============");
    printf("Enter a choice:");
    scanf("%d",&ch)
    switch(ch)
    {
        case 1:
            printf("enter a number:");
            scanf("%d",&ele);
            push(&s,ele);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            peek(&s);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
    }
    return 0;
        
}
void push(struct stack *sp,int ele)
{
    if(sp->top==MAX-1)
    {
        printf("overflow");
    }
    else{
        sp->top++;
        sp->items[sp->top]=ele;
    }
}
void pop(struct stack* sp)
{
    int ele;
    if(sp->top==-1)
    {
        printf("underflow");
    }
    else{
        ele=sp->item[sp->top];
        sp->top--;
        printf("removed element is :%d",ele);
    }
}
void peek(struct stack* sp)
{
    if(sp->top==-1)
    {
        printf("underflow");
    }
    else{
        ele=sp->items[sp->top];
        printf("top element is:%d",ele);
    }

}
void display(struct stack* sp)
{
    int i;
    for(i=top;i>=0:i--)
    {
        printf("%d",,sp->item[i]);
    }
}