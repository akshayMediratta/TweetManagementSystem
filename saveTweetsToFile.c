#include"headerA3.h"
void saveTweetsToFile(tweet *tweetList)
{
    if (tweetList == NULL)
    {
        printf("No tweets\n");
    }
    char arr[30];
    printf("Enter the filename where you would like to store your tweets:\n");
    scanf("%s",arr);
    FILE *file;
    file = fopen(arr, "w"); //opening the file in writing mode
    while (tweetList != NULL)
    {
        fprintf(file, "%d, %s, %s\n", tweetList->id, tweetList->user, tweetList->text); //writing in the file
        tweetList = tweetList->next;
    }
    printf("Output successful!\n");
    fclose(file);
}

