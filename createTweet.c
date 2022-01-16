#include"headerA3.h"

tweet* createTweet(tweet* tweetList)
{
    char username[52];
    int k;
    char input[142];
    tweet *temp=tweetList;
    tweet* node = malloc(sizeof(tweet));
 
    for(k=0;;) //infinite loop, comes out after break only
    {
        printf("Enter a username: ");
        if(fgets(username, 52, stdin)!=NULL && (k=strlen(username))>1)
        {
            if(username[k-1]!='\n') // second last character should be \n or else the input is too long
            {
                fflush(stdin);
                printf("Input is too long\n");
                continue;
            }
            username[k-1]=0;
            strcpy(node->user,username);
            break;
        }
        fflush(stdin);
        printf("Invalid input\n");
    }

    for(int n=0;;) //infinite loop, comes out after break only
    {
        printf("Enter the user's tweet: ");
        if(fgets(input, 142, stdin)!=NULL && (n=strlen(input))>1)
        {
            if(input[n-1]!='\n')
            {
                fflush(stdin);
                printf("Too long input\n");
                continue;
            }
            input[n-1]=0;
            strcpy(node->text,input);
            break;
        }
        fflush(stdin);
        printf("Invalid input\n");
    }

    node->next=NULL;

    int id; //calculating id
    id = strlen(node->text); //id is equal to the length of the tweet
    int n = strlen(node->user);
    for(int i=0 ; i<n; i++)
    {
        id = id + node->user[i];
    }

    while(temp!=NULL)
    {
        int k = temp->id;
        if(id==k)
        {
            id= id +(1+(rand()%999)); //adding a random number between 1 and 999
            temp=tweetList;
        }
        else
        temp=temp->next;
    }
    node->id=id;
    printf("Your computer-generated userid is %d\n",id);
    return node;
}

