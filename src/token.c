typedef enum {
    ILLEGAL,   // "ILLEGAL"
    EOF,       // "EOF"

    // Identifiers + literals
    IDENT,     // add, foobar, x, y
    INT,       // 1234

    // Operators
    ASSIGN,    // '='
    PLUS,      // '+'

    // Delimiters
    COMMA,     // ','
    SEMICOLON, // ';'

    LPAREN,    // '('
    RPAREN,    // ')'
    LBRACE,    // '['
    RBRACE,    // ']'

    FUNCTION,  // "FUNCTION"
    LET,       // "LET"
} TokenType;

// TODO: Maybe is needed a function token_type_to_string with a switch statement
// that returns string literals

typedef struct {
    TokenType type;
    const char *literal;
} Token;
