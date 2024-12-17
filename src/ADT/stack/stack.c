#include <stdio.h>
#include "stack.h"

void CreateEmptyStack(Stack *S){
    Top(*S) = Stack_Nil;
    S->size = 0;
}

boolean IsEmptyStack(Stack S){
    return Top(S)==Stack_Nil;
}

boolean IsFullStack(Stack S){
    return Top(S)==MaxEl-1;
}

void PushStack(Stack * S, barang_dibeli X){
    if(IsEmptyStack(*S)){
        Top(*S)=0;
    }
    else{
        Top(*S)++;
    }
    InfoTop(*S) = X;
    S->size++;
}

void PopStack(Stack * S, barang_dibeli* X){
    *X = InfoTop(*S);
    if(Top(*S)==0){
        Top(*S) = Stack_Nil;
    }
    else{
        Top(*S)--;
    }
    S->size--;
}