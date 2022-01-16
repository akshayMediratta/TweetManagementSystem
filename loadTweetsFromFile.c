#include"headerA3.h"

void loadTweetsFromFile(tweet **tweetList)
{
    tweet *new;
    FILE *file = NULL;
    char arr[30];
    printf("Enter the filename to load from:\n");
    scanf("%s",arr); //input of filename
    file = fopen(arr, "r");
    if (file == NULL) // checking if the file pointer is null
    {
        printf("File not detected!\n");
        return;
    }
    while (!feof(file))
    {
        new = malloc(sizeof(tweet));
        new->next = NULL;
        fscanf(file, "%d, %[^,], %[^\n]\n", &new->id, new->user, new->text); //reading from the file
        addNodeToList(tweetList, new);
    }
    printf("Tweets imported!\n");
}

