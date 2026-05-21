#include <stdio.h>

#include "../tests/lexer_tests.c"

int main()
{
    // Lexer
    lexerTest_nextToken();

    printf("All tests passed\n");
    return 0;
}

// Add the c classes here so you dont need complex build scripts (Single build unit)
#include "./token.c"
#include "./lexer.c"
