#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    bool in_word = false;
    int letter_count = 0, word_count = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch)) // if ch is a letter
        {
            letter_count++;
            // if not currently in a word, then switch state to in word
            // and increment the word count
            if (!in_word)
            {
                in_word = true;
                word_count++;
            }
        }
        // if ch is not a letter, set program state to out of word
        else
            in_word = false;
    }
    // divide letter count by word count to get average letters/word
    printf("Average letters per word: %.2f\n", (float)letter_count / word_count);

    return 0;
}