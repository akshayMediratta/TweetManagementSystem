#include"headerA3.h"

void deleteTweet(tweet **tweetList)
{
    int i = 0;
    int input;
    int k = 1;
    int j = 0;
    tweet *temp; 
    tweet *head = *tweetList;
    while (head != NULL)
    {
        head = head->next;
        i++;
    }
    printf("Which tweet do you wish to delete - enter a value between 1 and %d:\n", i);
    scanf("%d", &input);
    head = *tweetList;
    if (input == 1) // deleting the first tweet
    {
        j = (*tweetList)->id;
        *tweetList = (*tweetList)->next;
        free(head);
    }
    else if (input == i) // deleting last tweet
    {
        while (k < (i - 1))
        {
            head = head->next;
            k++;
        }
        temp = head->next;
        j = temp->id;
        free(temp);
        head->next = NULL;
    }
    else if ((input <= i) && (input >= 1)) // deleting any tweet other than first and last
    {
        while (k < (input - 1))
        {
            head = head->next;
            k++;
        }
        temp = head->next;
        head->next = temp->next;
        j = temp->id;
        free(temp);
    }
    printf("Tweet %d deleted. There are now %d tweets left.\n", j, i - 1);
}

