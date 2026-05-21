#ifndef LEXER_H_
#define LEXER_H_

#include "./token.h"

typedef struct Lexer {
} Lexer;

Lexer *lexer_new();
Token lexer_nextToken(Lexer *lexer);

#endif // LEXER_H_
