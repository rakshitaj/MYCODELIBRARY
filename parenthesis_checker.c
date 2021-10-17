#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Stack
{
    int size;
    int top;
    char *s;
}stack;  

void push(stack *st,char a)
{
    if (st->top==st->size-1)
    printf("full\n");
    
    else
        st->s[++st->top]=a;
}

char pop(stack *st)
{
    char x='\0';
    if(st->top==-1)
    printf("empty\n");
    
    else
        x=st->s[st->top--];
        
    return x;
}

int isempty(stack st)
{
    if (st.top==-1)
    return 1;
    return 0;
}
int check(char a, char b)
{
    if (a=='(' && b==')')
        return 1;
    if (a=='[' && b==']')
        return 1;
    if (a=='{' && b=='}')
        return 1;
    return 0;
}
int isbalance(char *ex)
{
    stack st;
    st.size=strlen(ex);
    st.top=-1;
    st.s=(char*)malloc(sizeof(char)*st.size);
    
    for (int i=0; ex[i]!='\0';i++)
    {
        if(ex[i]=='(' || ex[i]=='[' || ex[i]=='{')
            push(&st,ex[i]);
        else if (ex[i]==')' || ex[i]==']' || ex[i]=='}')
        {
            if (isempty(st)) return 0;
            
            char z=pop(&st);
            if(!(check(z,ex[i]))) return 0;
        }
        
    }
    
    if (isempty(st))
    return 1;
    else 
    return 0;
    
}

int main()
{
    
    char ex[50],stack[50];
    printf("enter a string  ");
    scanf("%s",ex);
    
    if (isbalance(&ex))
    printf("it is balanced");
    
    else
    printf("not balanced");
    
    return 0;
}
