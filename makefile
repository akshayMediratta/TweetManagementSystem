a3: mainA3.o countStopWords.o loadTweetsFromFile.o saveTweetsToFile.o deleteTweet.o searchTweetsByKeyword.o addNodeToList.o displayTweets.o createTweet.o
	gcc -Wall -std=c99 mainA3.o countStopWords.o loadTweetsFromFile.o saveTweetsToFile.o deleteTweet.o searchTweetsByKeyword.o addNodeToList.o displayTweets.o createTweet.o -o a3

loadTweetsFromFile.o: loadTweetsFromFile.c headerA3.h
	gcc -Wall -std=c99 -c loadTweetsFromFile.c

saveTweetsToFile.o: saveTweetsToFile.c headerA3.h
	gcc -Wall -std=c99 -c saveTweetsToFile.c

deleteTweet.o: deleteTweet.c headerA3.h
	gcc -Wall -std=c99 -c deleteTweet.c

countStopWords.o: countStopWords.c headerA3.h
	gcc -Wall -std=c99 -c countStopWords.c

check.o: check.c headerA3.h
	gcc -Wall -std=c99 -c check.c

searchTweetsByKeyword.o: searchTweetsByKeyword.c headerA3.h
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c

addNodeToList.o: addNodeToList.c headerA3.h
	gcc -Wall -std=c99 -c addNodeToList.c

displayTweets.o: displayTweets.c headerA3.h
	gcc -Wall -std=c99 -c displayTweets.c

createTweet.o: createTweet.c headerA3.h
	gcc -Wall -std=c99 -c createTweet.c

mainA3.o: mainA3.c headerA3.h
	gcc -Wall -std=c99 -c mainA3.c

clean:
	rm *.o a3
