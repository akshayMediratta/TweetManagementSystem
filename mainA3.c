#include"headerA3.h"
#include"time.h"
int main()
{
    srand(time(0));
    int choice = 0;
    tweet *tweetList = NULL; //linked list
    while(choice != 8)
    {
        printf("1. Create a new tweet\n");
        printf("2. Display tweets\n");
        printf("3. Search a tweet\n");
        printf("4. Find no. of stop words\n");
        printf("5. Delete the nth tweet\n");
        printf("6. Save tweets to a file\n");
        printf("7. Load tweet from a file\n");
        printf("8. Exit\n");
        printf("Choose a menu option:\n");
        scanf("%d", &choice);
        getchar();
        switch (choice) { //using a switch case from 1-8 for the menu
          case 1:
          ; tweet* node = createTweet(tweetList);
          if(node==NULL)
          {
              printf("Tweet could not be created\n");
              return 1;
          }
          else
          addNodeToList(&tweetList,node);
          break;
          case 2:
              displayTweets(tweetList);
              break;
          case 3:
              searchTweetsByKeyword(tweetList);
              break;
          case 4:
              countStopWords(tweetList);
              break;
          case 5:
              deleteTweet(&tweetList);
              break;
          case 6:
              saveTweetsToFile(tweetList);
              break;
          case 7:
              loadTweetsFromFile(&tweetList);
              break;
          case 8:
              return 0;
          default:
          printf("Enter a valid input\n");
          }
    }
}
