#include"headerA3.h"
#include"ctype.h"

int searchTweetsByKeyword(tweet *tweetList)
{
    char arr[141];
    int k = 0;
    int total = 0;
    int i;
    int num = 0;
    printf("Enter a keyword to search:\n");
    scanf("%s",arr); //taking input of the keyword
    while (tweetList != NULL)
    {
        k = 0;
        for (i = 0; i <= strlen(tweetList->text); i++)
        {
            if (total == strlen(arr))
            {
                printf("Match found for \'%s\': %s wrote: \"%s\"\n", arr, tweetList->user, tweetList->text);
                num = 1;
                total = 0;
                break;
            }
            else if (tolower(arr[k]) == tolower(tweetList->text[i])) //converting to lowercase and then comparing
            {
                k++;
                total++;
            }
            else
            {
                k = 0;
                total = 0;
            }
        }
        tweetList = tweetList->next;
    }
    return num;
}
