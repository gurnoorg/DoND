#include <iostream>
#include <vector>

#include "elements.h"

using namespace std;

int main() {
    
	cout<< "Welcome to Deal or No Deal!" <<endl;
    cout<< "The max you can win in this version is $1000 so play wisely"<<endl;
    cout<< "Values stored in briefcases: $1, $10, $50, $150, $250, $400, $600, $725, $800, $925, $1000"<<endl;
    
    bool rules = 0;
	cout<< "To display more rules press 1 then press enter, or to play press 0 and enter" <<endl;
	cin>> rules;
    if (rules == 1) {

        cout<< "Please read up on the general rules of Deal or No Deal at this link:" <<endl;
        cout<< "http://www.dealornodeal.co.uk/deal-no-deal-rules/" << endl;
        cout<< "********************************************************************"<< endl;
        cout<< "Let's play!"<<endl;
	}

	if (rules ==0) {

        cout<< "***********" << endl;
        cout<< "11 total boxes in gameplay" << endl;
        cout<< "Maximum winning is $1000" << endl;
		cout<< "Let's play!" << endl;
		cout<< "***************"<<endl;
	}

    boxes A;
    A.initialize();
    int yourBox;

    cout<< "Choose a box from the range 0 to 10, then press enter" <<endl;

    cin>>yourBox;

    A.remove(yourBox);

    cout<< "You chose box "<< yourBox <<endl;

    cout << "*************" << endl;

    cout<< "Round 1: Choose 4 boxes (other than your selected box)" <<endl;
   
    int box1;
    int box2;
    int box3;
    int box4;

    

    cout<< "Selection 1: "<<endl;
    cin>>box1;

    if(box1 == yourBox) {
        cout<< "STOP RIGHT THERE U CHEATER! Now restart the game and play fairly :)" <<endl;
        return -1;
    }

    else {
        cout<< "$" << A.value(box1)<<endl;
    }

    cout<< "Selection 2: " << endl;
    cin>>box2;

    cout<< "$" << A.value(box2)<<endl;

    cout<< "Selection 3: " <<endl;
    cin>>box3;

    cout<< "$" << A.value(box3)<<endl;

    cout<< "Selection 4: " <<endl;
    cin>>box4;

    cout<< "$" << A.value(box4)<<endl;



    cout << "*****************"<<endl;
    cout<< "Banker's Offer" <<endl;
    cout<< "$" << A.offer1(A.value(box1), A.value(box2), A.value(box3) , A.value(box4)) <<endl;

    bool choice1 = 0;

    cout<< "Deal(1) or No Deal(0)" << endl;
    cin>> choice1;

    if (choice1 ==1) {
        
        cout<< "You won $" <<A.offer1(A.value(box1), A.value(box2), A.value(box3) , A.value(box4)) <<endl;

        cout<< "Your box had $" << A.value(yourBox)<<endl;

        return 0;
    }
 
    cout<< "***********************" <<endl;
    cout<< "Round 2: Choose 3 boxes " <<endl;
    cout<< "Choose from boxes: ";
    for (int i=0; i<11; i++) {
       if (i!=box1 && i!=box2 && i!=box3 && i!=box4 && i!= yourBox) {

       	   cout << i << " ";
       }
    }
    cout<< endl << "Your box is " <<yourBox<<endl;
    
    int box5;
    int box6;
    int box7;

    cout<< "Selection 5: "<<endl;
    cin>>box5;

    cout<< "$" << A.value(box5)<<endl;

    cout<< "Selection 6: " << endl;
    cin>>box6; 

    cout<< "$" << A.value(box6)<<endl;

    cout<< "Selection 7: " <<endl;
    cin>>box7;

    cout<< "$" << A.value (box7) <<endl;

    cout << "*****************"<<endl;
    cout<< "Banker's Offer" <<endl;
    cout<< "$" << A.offer2(A.value(box5), A.value(box6), A.value(box7)) <<endl;
   
    cout<< "Deal(1) or No Deal(0)" << endl;
    cin>> choice1;

    if (choice1 ==1) {
        
        cout<< "You won $" << A.offer2(A.value(box5), A.value(box6), A.value(box7)) <<endl;

        cout<< "Your box had $" << A.value(yourBox)<<endl;

        return 0;
    }
 
    cout<< "***********************" <<endl;
    cout<< "Round 3: Choose 2 boxes " <<endl;
    cout<< "Choose from boxes: ";
    for (int i=0; i<11; i++) {
       if (i!=box1 && i!=box2 && i!=box3 && i!=box4 && i!= box5 && i!= box6 && i!= box7 && i!= yourBox) {

       	   cout << i << " ";
       }
    }
    cout<< endl<< "Your box is " << yourBox <<endl;
  
    int box8 , box9;
    cout<< "Selection 8: "<<endl;
    cin>>box8;

    cout<< "$" << A.value(box8)<<endl;

    cout<< "Selection 9: " << endl;
    cin>>box9;

    cout<< "$" << A.value(box9)<<endl;

    cout << "*****************"<<endl;
    cout<< "Banker's Offer" <<endl;
    cout<< "$" << A.offer3(A.value(box8), A.value(box9)) <<endl;
   
    cout<< "Deal(1) or No Deal(0)" << endl;
    cin>> choice1;

    if (choice1 ==1) {
        
        cout<< "You won $" << A.offer3(A.value(box8), A.value(box9)) <<endl;

        cout<< "Your box had $" << A.value(yourBox)<<endl;

        return 0;
    }
 

    int box10;
    
    cout<< "***********************" <<endl;
    cout<< "Final Round: Choose your box or open the last box" <<endl;
    cout<< "Choose from boxes: ";
    for (int i=0; i<11; i++) {
       if (i!=box1 && i!=box2 && i!=box3 && i!=box4 && i!= box5 && i!= box6 && i!= box7 && i!= box8 && i!=box9 && i!= yourBox) {

       	   cout << i << " ";
       }
    }
    cout<< endl <<"Your box is " <<yourBox<<endl;

    cout<< "Selection 10: "<<endl;
    cin>> box10;

    int remainingbox;
  
    for (int i=0; i<11; i++) {
       if (i!=box1 && i!=box2 && i!=box3 && i!=box4 && i!= box5 && i!= box6 && i!= box7 && i!= box8 && i!=box9 && i!= yourBox) {

       	   remainingbox = i;
       }
    }


    if (box10 == yourBox) {

        cout<< "You won $" << A.value(yourBox) <<endl;
        cout<< "The final box had $"<<A.value(remainingbox)<<endl;
        return 0;

    }

    else {

    	cout <<"You won $" << A.value(box10)<<endl;
    	cout<< "Your box had $" << A.value(yourBox)<<endl;

    }

   return 0;
}
