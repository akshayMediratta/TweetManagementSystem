#include"headerA3.h"
#include"ctype.h"

void countStopWords(tweet * tweetList)
{
    int numTweets=0;
    int count=0;
    for(tweet *temp = tweetList; temp != NULL; temp = temp -> next, numTweets++){;} //to count the total number of tweets
    char stopwords[25][5]={"a","an","and","are","as","at","be","by","for","from","has","he","in","is","it","its","of","on","that","the","to","was","were","will","with"};
    for(int i=0; i<25; i++)
    {
        char* word = stopwords[i];

        tweet *rough = tweetList;
        while(rough!=NULL)
        {
            //storing the text in lower case
            int length;
            length = strlen(rough->text);
            char content[1+length];
            strcpy(content, rough->text);
            for(int j=0; j<length; j++)
            {
                content[i]=tolower(content[i]);
            }


            char *temp=strtok(content," ,.-!?"); //checking for stopwords
            while(temp!=NULL)
            {
                if(strcmp(temp,word)==0)
                {
                    count++;
                }
                temp=strtok(NULL," ,.-!?");
            }
            rough=rough->next;
        }
    }
  printf("Across %d tweets, %d stop words were found.\n",numTweets,count);
}

