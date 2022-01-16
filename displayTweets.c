#include"headerA3.h"
void displayTweets(tweet *tweetList)
{
    if (tweetList == NULL) //check for null
    {
        printf("No tweets to display\n");
    }
    while (tweetList != NULL)
    {
        printf("%d: Created by %s: %s\n", tweetList->id, tweetList->user, tweetList->text); // printing the tweet
        tweetList = tweetList->next;
    }
}
