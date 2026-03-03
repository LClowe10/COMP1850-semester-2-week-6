#include <stdio.h>


int word(char buffer)
{
    int counter = 0;
    for (int i = 0; i < sizeof(buffer); i++)
    {
        if (line[i] == ' ' || line[i] == )
    }

}


int main(int argc, char** argv)
{
    if (argc - 2)
    {
        return 1;
    }

    char buffer[100];
    int lines = 0, words = 0, characters = 0;

    FILE *file = fopen(argv[1], "r" );
    if (file == NULL) 
    {
        printf("Error: File not found.\n");
        return 1;
    }
    
    while (fgets(buffer, sizeof(buffer), file) != NULL) 
    {
        lines += 1;
        words += word(buffer);
        characters += chars(buffer); 
    }
    
    fclose(file);
    printf("%d lines\n%d words\n%d characters", lines, words, characters);
    return 0;
}