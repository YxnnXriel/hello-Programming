#ifndef TOKEN_H
#define TOKEN_H
typedef struct TOKEN_STRUCT
{
    enum
    {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_STRING,
        TOKEN_SEMI,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_RBRACE,
        TOKEN_LBRACE,
        TOKEN_COMMA,
        TOKEN_EOF
    } type;

    char* value;
} token_T;

token_T* init_token(int type, char* value);

// Using for free token if exist !
void free_token(struct TOKEN_STRUCT * token);

// Using for print simple token !
void print_token(struct TOKEN_STRUCT * token);

#endif
