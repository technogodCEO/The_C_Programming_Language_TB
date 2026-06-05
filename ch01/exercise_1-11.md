## How would you test the word count program?

I would test the word count program by using input redirection in bash that allows my to run the program with a text input

syntax:
```bash
./wc < text_file.txt
```

## What kinds of input are most likely to uncover bugs if there are any? 

Although the code seems to account for all of them, the most likely to cause an issue are edge cases

1. inputs starting on a character
    1. This is negated by the fact that the program checks first if there is a space before checking if the current state is OUT
2. Completely empty or whitespace files, again negated by the if statement being placed first.

Another concern could be very large files that overload the c program \ 

Another concern could be in regards to what defines a word

1. hello,world -> This is 1 word
2. hello;world -> this is one word
So inputs with different word delimiters may cause a conflict, bugs, and an inaccurate program. This is the only one I found that is not accounted for in the program 