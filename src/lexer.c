#ifndef LEXER_C_
#define LEXER_C_

#include <stdio.h>

#include "./lexer.h"

Lexer *lexer_new()
{
    // TODO: lexer_new
    return NULL;
}

Token lexer_nextToken(Lexer *lexer)
{
    // TODO: lexer_nextToken
    return (Token) { Token_Lbrace, "{" };
}

#endif // LEXER_C_
