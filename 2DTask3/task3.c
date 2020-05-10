// Author: Ashwin R
// Date: May 3rd 2020
// Roll: U4CSE19343

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void setNames(char books[10][5][40]){
    //The list of books are also stored in a file named 'books'
    //Books in first cupboard
    strcpy(books[0][0],"Giant Of Nightmares");
    strcpy(books[0][1],"Tortoise With Silver");
    strcpy(books[0][2],"Phantoms Of Fortune");
    strcpy(books[0][3],"Slaves Of My Imagination");
    strcpy(books[0][4],"Assassins And Giants");
    //Books in second cupboard
    strcpy(books[1][0],"Doctors And Kings");
    strcpy(books[1][1],"Restoration Of Darkness");
    strcpy(books[1][2],"Rise Without Desire");
    strcpy(books[1][3],"Accepting The City");
    strcpy(books[1][4],"Growing In The King");
    //Books in third cupboard
    strcpy(books[2][0],"Butterfly Of The Sea");
    strcpy(books[2][1],"Enemy Of The Solstice");
    strcpy(books[2][2],"Children Without Fear");
    strcpy(books[2][3],"Doctors With Honor");
    strcpy(books[2][4],"Children And Enemies");
    //Books in fourth cupboard
    strcpy(books[3][0],"Witches And Women");
    strcpy(books[3][1],"Origin Without Flaws");
    strcpy(books[3][2],"Restoration Of Greatness");
    strcpy(books[3][3],"Trust Myself");
    strcpy(books[3][4],"Running In The South");
    //Books in fifth cupboard
    strcpy(books[4][0],"Heir Of The Stockades");
    strcpy(books[4][1],"Thief Of The Lost Ones");
    strcpy(books[4][2],"Knights Of Heaven");
    strcpy(books[4][3],"Blacksmiths Of Gold");
    strcpy(books[4][4],"Horses And Soldiers");
    //Books in sixth cupboard
    strcpy(books[5][0],"Lions And Foes");
    strcpy(books[5][1],"Argument Of Glory");
    strcpy(books[5][2],"Fate Of Time");
    strcpy(books[5][3],"Learning From The Commander");
    strcpy(books[5][4],"Calling History");
    //Books in seventh cupboard
    strcpy(books[6][0],"Pilot Of History");
    strcpy(books[6][1],"Thief Of Yesterday");
    strcpy(books[6][2],"Men Of Twilight");
    strcpy(books[6][3],"Trees With Immortality");
    strcpy(books[6][4],"Aliens And Wives");
    //Books in eighth cupboard
    strcpy(books[7][0],"Dogs And Serpents");
    strcpy(books[7][1],"Obliteration Of Darkness");
    strcpy(books[7][2],"Completion Of The River");
    strcpy(books[7][3],"Becoming The Titans");
    strcpy(books[7][4],"Shelter At My Enemies");
    //Books in ninth cupboard
    strcpy(books[8][0],"Witch Of Fire");
    strcpy(books[8][1],"Pilot Of The Ancestors");
    strcpy(books[8][2],"Thieves Without Faith");
    strcpy(books[8][3],"Aliens Of Stone");
    strcpy(books[8][4],"Heroes And Women");
    //Books in tenth cupboard
    strcpy(books[9][0],"Guardians And Traitors");
    strcpy(books[9][1],"Fruit Of Fire");
    strcpy(books[9][2],"Tree Of The Ocean");
    strcpy(books[9][3],"Hunted By The Void");
    strcpy(books[9][4],"Temptations In My Wife");
}


int main()
{
    char books[10][5][40];
    setNames(books); //Assigning book names to the 3D Array
    char search[40];
    printf("\nEnter name of book to search for: ");
    gets(search); //gets() used instead of fgets() to avoid endline character appending issue
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            //Comparing names with all books in library
            if(strcmp(search,books[i][j])==0){
                printf("\nBook found in Cupboard number: %d\nRack number: %d\n",++i,++j);
                exit(0);                
            }
        }
    }
    printf("\nSorry, the book you entered doesn't exist\n");
    return 0;
}
