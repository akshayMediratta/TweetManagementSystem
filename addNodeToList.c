#include"headerA3.h"

void addNodeToList(tweet **tweetList, tweet *node)
{
    //function to add node to list
    tweet *head;
    if (*tweetList == NULL) //check for null
    {
        *tweetList = node;
    }
    else
    {
        head = *tweetList;
        while (head->next != NULL)
        {
            head = head->next;
        }
        head->next = node;
    }
}

