#include <iostream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

class boxes {
	
public:

  void initialize ();
  void remove (int x);
  void assignValues();
  int value (int y);
  int offer1 (int a, int b, int c, int d);
  int offer2 (int a, int b , int c);
  int offer3 (int a, int b);
private :

   class Pair {
	public:
		int number ;
		int value ;
	};

	Pair* A; // Array containing heap contents.
};


int valueArr[11] = {1 , 10 , 50 , 150 , 250 , 400 , 600 , 725 , 800 , 925 , 1000};
int yourSelection;

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void randomize ( int arr[], int n )
{
    // Use a different seed value so that we don't get same
    // result each time we run this program
    srand ( time(NULL) );
 
    // Start from the last element and swap one by one. We don't
    // need to run for the first element that's why i > 0
    for (int i = n-1; i > 0; i--)
    {
        // Pick a random index from 0 to i
        int j = rand() % (i+1);
 
        // Swap arr[i] with the element at random index
        swap(&arr[i], &arr[j]);
    }
}
void boxes :: initialize () {

	A = new Pair [11];

	for (int i=0; i<11 ; i++) {

		A[i].number = i;
	}

	randomize (valueArr , 11);
	for (int i =0 ; i<11 ; i++) {
		A[i].value = valueArr[i];
	}
}

void boxes :: assignValues () {

}

void boxes :: remove (int x) {

   for (int i=0; i<11; i++) {

   	  if (A[i].number == x) {
        yourSelection = A[i].value;
   	  	A[i].number = A[i+1].number;
   	  }
   }

}

int boxes :: value (int y) {


     return A[y].value;

}

int boxes :: offer1 (int a, int b, int c, int d) {

   int average = (a+b+c+d)/4;

   if (average < 500) {

   	   return yourSelection * 0.5 + (average * .5);
   }

   if (average > 500) {
       
       return yourSelection - (average/4);
   }
}

int boxes :: offer2 (int a, int b, int c) {

   int average = (a+b+c)/3;
   if (average < yourSelection) {

   	   return (yourSelection * 0.5) + (average* 0.6);
   }

   if (average > yourSelection) {

   	   
   	   return yourSelection - (average/3);
   }
   
}

int boxes :: offer3 (int a, int b) {

   int average = (a+b) / 2;

  if (average < yourSelection) {

   	   return yourSelection * 0.5 + (average*.7);
   }

   if (average > yourSelection) {

   	   
   	   return yourSelection - (average/2);
   }

 }