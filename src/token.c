#include "include/token.h"
#include <stdio.h>
#include <stdlib.h>


token_T* init_token(int type, char* value)
{
    token_T* token = calloc(1, sizeof(struct TOKEN_STRUCT));
    token->type = type;
    token->value = value;

    return token;
}


/**
 * @author YxnnXriel
 * @param token
 */
void free_token(struct TOKEN_STRUCT * token){
    if(token != (void*)0){
        if(token->value != (void*)0){
            free(token->value);
        }
        free(token);
    }
}

void print_token(struct TOKEN_STRUCT * token){
    printf("%d %s\n",token->type , token->value);
}
