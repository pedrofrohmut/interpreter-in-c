#ifndef TOKEN_H_
#define TOKEN_H_

typedef enum TokenType {
    Token_Illegal,     // "ILLEGAL"
    Token_Eof,         // "EOF"

    // Identifiers + literals
    Token_Ident,       // add, foobar, x, y
    Token_Int,         // 1234

    // Operators
    Token_Assign,      // '='
    Token_Plus,        // '+'

    // Delimiters
    Token_Comma,       // ','
    Token_Semicolon,   // ';'

    Token_Lparen,      // '('
    Token_Rparen,      // ')'
    Token_Lbrace,      // '['
    Token_Rbrace,      // ']'

    Token_Function,    // "FUNCTION"
    Token_Let,         // "LET"
} TokenType;

// Usage: since TokenType will return the index, you can use tokenNames[Token_Foo] to get "Token_Foo"
const char* tokenNames[] = {
    "Token_Illegal",
    "Token_Eof",
    "Token_Ident",
    "Token_Int",
    "Token_Assign",
    "Token_Plus",
    "Token_Comma",
    "Token_Semicolon",
    "Token_Lparen",
    "Token_Rparen",
    "Token_Lbrace",
    "Token_Rbrace",
    "Token_Function",
    "Token_Let",
};


typedef struct {
    TokenType type;
    const char *literal;
} Token;

// TODO: Make array of tokens, Maybe it is not needed
// Token tokens[] = { };

#endif
