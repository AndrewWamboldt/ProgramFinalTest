#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/types.h>

#define TOKEN_DELIMS "-"
#define TOKEN_BUFFSIZE 64

#define LSIZ 1024
#define RSIZ 1024
typedef struct word
{
   char* phrase;
   char* hint;
} word;

int my_pipe(int fd[2], word* curWord);

int main (int argc, char** argv)
{
  const int MSIZE = 1024;
  char str[MSIZE];
  FILE *fp;
  FILE *fp2 = NULL;
  char fp2name = "words.txt";
  char line [RSIZ][LSIZ];
  int i;
  int j =0;
  int tot = 0;
  int wordCount = 1;
  word myWord;
  word* firstWord;
  firstWord = (word*) malloc(sizeof(word));
  word* secondWord;
  secondWord = (word*) malloc(sizeof(word));
  word* thirdWord;
  thirdWord = (word*) malloc(sizeof(word));
  word* fourthWord;
  fourthWord = (word*) malloc(sizeof(word));
  word* fifthWord;
  fifthWord = (word*) malloc(sizeof(word));
  word* sixithWord;
  sixithWord = (word*) malloc(sizeof(word));
  word* seventhWord;
  seventhWord = (word*) malloc(sizeof(word));
  word* eighthWord;
  eighthWord = (word*) malloc(sizeof(word));
  word* ninthWord;
  ninthWord = (word*) malloc(sizeof(word));
  word* tenthWord;
  tenthWord = (word*) malloc(sizeof(word));
  word* eleventhWord;
  eleventhWord = (word*) malloc(sizeof(word));
  word* twelveWord;
  twelveWord = (word*) malloc(sizeof(word));

  fp = fopen("words.txt", "r");
 if(fp == NULL)
 {
	printf("error opening the file\n");
        return -1;
 }
 while( fgets (str, MSIZE, fp) != NULL)
 {
   char * name = strtok(str, "-");
   if ( name != NULL )
   {
	printf("name = %s\n", name);
	firstWord->phrase = name;
	char * list_value = strtok(NULL, "-");

        while ( list_value != NULL )
	{
	  printf("word Hint = %s\n", list_value);
          ++i;
          firstWord->hint = list_value; // sets the tokenized word to the struct list_value
          list_value =  strtok(NULL, "-");
       }
	printf("Done ...\n");

   }
  	fputs(str, stdout);
 }
  fclose(fp);


 printf("\n\n\n");
 i = 0;
 fp2 = fopen("words.txt", "r");
 if(fp2 == NULL)
 {
        printf("error opening the file\n");
        return -1;
 }
 while( fgets (line[i], LSIZ, fp2))
 {
	line[i][strlen(line[i]) - 1] = '\0';
	i++;
 }
 tot = i;
 for( i = 0; i < tot; i++)
 {
	printf("%s\n", line[i]);
	printf("%d is the i value\n", i);

	if(i == 0)
	{
	  char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            firstWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              firstWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
        printf("Done ...\n");

          }

	}
        if(i == 1)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            secondWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              secondWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 2)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            thirdWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              thirdWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 3)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            fourthWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              fourthWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 4)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            fifthWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              fifthWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 5)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            sixithWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              sixithWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 6)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            seventhWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              seventhWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 7)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            eighthWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              eighthWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 8)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            ninthWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              ninthWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 9)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            tenthWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              tenthWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 10)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            eleventhWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              eleventhWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }
        if(i == 11)
        {
          char * name = strtok(line[i], "-");
          if ( name != NULL )
          {
            printf("name = %s\n", name);
            twelveWord->phrase = name;
            char * list_value = strtok(NULL, "-");

            while ( list_value != NULL )
            {
              printf("word Hint = %s\n", list_value);
              ++j;
              twelveWord->hint = list_value; // sets the tokenized word to the struct list_value
              list_value =  strtok(NULL, "-");
            }
            printf("Done ...\n");

          }

        }




 }

  fclose(fp2);

  // print out to test the stucts and if they have the right values
  printf("\nthe first word is: %s\n",firstWord->phrase);
  printf("the hint is: %s\n", firstWord->hint);
  printf("\nthe second word is: %s\n", secondWord->phrase);
  printf("the 2nd word hint is : %s\n", secondWord->hint);
  printf("\nthe third word is: %s\n",thirdWord->phrase);
  printf("the 3rd hint is: %s\n", thirdWord->hint);
  printf("\nthe fourth word is: %s\n", fourthWord->phrase);
  printf("the 4th word hint is : %s\n", fourthWord->hint);
  printf("\nthe 5th word is: %s\n",fifthWord->phrase);
  printf("the hint is: %s\n", fifthWord->hint);
  printf("\nthe 6th word is: %s\n", sixithWord->phrase);
  printf("the hint is : %s\n", sixithWord->hint);
  printf("\nthe 7th word is: %s\n",seventhWord->phrase);
  printf("the hint is: %s\n", seventhWord->hint);
  printf("\nthe 8th word is: %s\n", eighthWord->phrase);
  printf("the  hint is : %s\n", eighthWord->hint);
  printf("\nthe 9th word is: %s\n",ninthWord->phrase);
  printf("the hint is: %s\n", ninthWord->hint);
  printf("\nthe 10th word is: %s\n", tenthWord->phrase);
  printf("the hint is : %s\n", tenthWord->hint);
  printf("\nthe 11th word is: %s\n", eleventhWord->phrase);
  printf("the hint is: %s\n", eleventhWord->hint);
  printf("\nthe 12th word is: %s\n", twelveWord->phrase);
  printf("the hint is : %s\n", twelveWord->hint);

  int fd[2];
  int stat = my_pipe(fd, tenthWord);

  return 0;
}

int my_pipe(int *fd, word * curWord)
{
  int conn;
  
  int s0 = socket(AF_UNIX, SOCK_STREAM, 0);
  if( s0 == -1)
	return -1;

  struct sockaddr serverAdder = {AF_UNIX, "Hangman"};
  socklen_t serverAdderLen = sizeof(struct sockaddr) + 8;
  //bind socket s0 to severAdder
  bind(s0, &serverAdder, serverAdderLen);

  if( listen(s0, 1)== -1)
  {
	printf("listen() fail\n");
	return -1;
  }

  printf("\n\n\n\nRunning....\n\n\n");

  printf("%s (%d) is listening for conneciton requests\n\n",
	serverAdder.sa_data, serverAdderLen);

  while(1){
	conn = accept(s0, NULL, NULL);

//	write(conn, curWord->phrase, strlen(curWord->phrase));
//	write(conn, "-", 1);
//	write(conn, curWord->hint, strlen(curWord->hint));
	write(conn, curWord->phrase, strlen(curWord->phrase));
        write(conn, "-", 1);
        write(conn, curWord->hint, strlen(curWord->hint));


	close(conn);

	sleep(1);
  }

}
