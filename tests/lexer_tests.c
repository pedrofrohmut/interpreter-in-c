#ifndef LEXER_TESTS_
#define LEXER_TESTS_

#include <stdint.h>
#include <string.h>
#include <stdio.h>

#include "../src/token.h"
#include "../src/lexer.h"

void lexerTest_nextToken()
{
    const char *input = "=+(){},;";

    int8_t testsLength = 9;
    Token tests[] = {
        { Token_Assign,    "="  },
        { Token_Plus,      "+"  },
        { Token_Lparen,    "("  },
        { Token_Rparen,    ")"  },
        { Token_Lbrace,    "{"  },
        { Token_Rbrace,    "}"  },
        { Token_Comma,     ","  },
        { Token_Semicolon, ";"  },
        { Token_Eof,       "\0" },
    };

    // printf("%s\n", tokenNames[Token_Assign]);

    Lexer *lexer = lexer_new();

    for (int64_t i = 0; i < testsLength; i++) {
        Token token = lexer_nextToken(lexer);
        Token test = tests[i];

        // Check token type
        if (token.type != test.type) {
            fprintf(stderr, "Tests[%zu] - token type is wrong. Expected='%s' but got='%s' instead.\n",
                    i, tokenNames[test.type], tokenNames[token.type]);
        }

        // Check token literal
        if (strncmp(token.literal, test.literal, 1) != 0) {
            fprintf(stderr, "Tests[%zu] - Token literal is wrong. Expected='%s' but got='%s' instead.\n",
                    i, test.literal, token.literal);
        }
    }
}

#endif
