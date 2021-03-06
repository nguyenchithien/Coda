#include "ITokenizer.h"
#include "TokenizerEn.h"
#include "Tools.h"

extern "C"
{

namespace Tokenization
{


void CreateTokenizer(const char* languagePtr);

/* FUNCTIONS RELATED TO TOKENIZATION */

extern vector<Token> currentTokens;

size_t Tokenize(const wchar_t* sentencePtr, const char* languagePtr);
const wchar_t* RequestContent(size_t index);
size_t RequestPunctuationSize(size_t index);
const wchar_t* RequestPunctuation(size_t tokenIndex, size_t punctIndex);

/* FUNCTION RELATED TO PARSING PYTHON INPUT */

extern vector<Token> parsedTokens;

void ResetParsedTokens();
void PushParsedContent(const wchar_t* content);
void PushParsedPunctuation(const wchar_t* punctuation);

}

}
