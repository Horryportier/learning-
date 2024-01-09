#ifndef _LEXER_H_
#define _LEXER_H_

typedef enum {
  TokenOr,
  TokenAnd,
  TokenNot,
  TokenEqual,

  TokenAdd,
  TokenSub,
  TokenMul,
  TokenDiv,

  TokenLeftParen,
  TokenRightParen,
  TokenLeftSquare,
  TokenRightSquare
} TokenType;

typedef struct SToken {
  TokenType type;
  char *literal;
} Token;

typedef struct SLexer Lexer;
Lexer *lexerCreate(const char *input);

Token *lexerNext(Lexer *lexer);
void *lexerCleanUp(Lexer **lexer);

Token *createToken(TokenType token, char *literal);
void *tokenCleanUp(Token **token);

#endif // !_LEXER_H_
