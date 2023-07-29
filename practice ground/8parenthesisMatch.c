#include<stdio.h> 

struct stack{
    char ch[20];
    int top;
};

int isEmpty(struct stack *s){
    if(s->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack *s, char ch){
    s->top++;
    s->ch[s->top] = ch;
}

char pop(struct stack *s){
    char ch = s->ch[s->top];
    s->top--;
    return ch;
}

void parenthesisBalance(const char *ch){
    struct stack s;
    s.top = -1;
    int i = 0;

    while(ch[i] != '\0'){
        char c = ch[i];
        if(c == '('){
            push(&s, c);
        }
        if(c == ')'){
            if(isEmpty(&s)){
                printf("Parenthesis imbalanced\n");
                return;
            }
            char bracket = pop(&s);
            if(bracket != ')'){
                printf("Parenthesisi imbalanced\n");
                return;
            }
        }
        i++;
    }

    if(isEmpty(&s)){
        printf("Parenthesis balanced\n");
        return;
    }else{
        printf("Parenthesis imbalanced\n");
        return;
    }
}

int main() {

    char ch[]= "()(())";
    parenthesisBalance(ch);
    return 0;
}