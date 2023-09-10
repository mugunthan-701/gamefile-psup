#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int CompScore = 0, UserScore = 0, UserInput, wickets = 0,UserBalls,CompBalls;
    string UserName;

    srand(static_cast<unsigned>(time(0)));

    cout<<"Enter your name here: ";
    cin>>UserName;
    cout<<"Hi "<<UserName<<" this is hand cricket a luck based game where you compete against the computer"<<endl
	<<"here you should enter any number between 1 to 6 and the entered number would be compared to the"<<endl<<
	"number given by the computerif your number matches the computers one the you would be considered"<<endl<<
	"as out but still you have a chance to win now you should bowl against the computer if you correctly"<<endl<<
	"guess the number before it leads your score you will be considered as the winner"<<endl<<
	"play wisely"
	<<"Go ahead and give your input."<<endl;

    bool userBatting = true;

    while (true) {
        int random_number = std::rand() % 6 + 1; 

        cout << "Enter any number between 1-6: ";
        cin >> UserInput;
        cout << endl;

        if (UserInput < 1 || UserInput > 6) {
            cout<<"Please enter a number between 1 to 6"<< endl;
        } else if (userBatting && UserInput == random_number) {
            cout << "You chose " << UserInput << " and the computer chose " << random_number << ". You are out." << endl;
            wickets++;
            userBatting = false;
        } else if (userBatting) {
            UserScore += UserInput;
            UserBalls++;
            cout<<UserName<<"'s score is "<< UserScore << endl;
        } else if (!userBatting && UserInput == random_number) {
            cout << "You chose " << UserInput << " and the computer chose " << random_number << ". Computer is out." << endl;
            wickets++;
            userBatting = true;
        } else if(!userBatting) {
            CompScore+=random_number;
            CompBalls++;
            cout<<"Comp score is "<<CompScore<<endl;
        
            if (CompScore>UserScore){
            wickets++;
            
        }}

        if(wickets == 2) {
            break; 
        }
    }

    cout<<"Match over!"<< endl;

    if(UserScore > CompScore) {
        cout<<"You won "<<UserName<<"!"<<endl;
        cout<<"Your score is "<<UserScore<<" and number of balls batted is "<<UserBalls<<endl;
        cout<<"Comp score is "<<CompScore<<" and number of balls batted is "<<CompBalls<<endl;
    } else if(UserScore < CompScore) {
        cout<<"Try harder next time "<<UserName<<"!"<<endl;
         cout<<"Your score is "<<UserScore<<" and number of balls batted is "<<UserBalls<<endl;
        cout<<"Comp score is "<<CompScore<<" and number of balls batted is "<<CompBalls<<endl;
    } else {
        if(UserBalls>CompBalls){
            cout<<"See it took less number of balls to reach your target";
        }
        else if(UserBalls<CompBalls){
            cout<<"Atleast you batted well that it took more number of balls to reach your target";
        }
        else if(UserBalls==CompBalls){
            cout<<"AH! this is what we call a perfect draw";
        }
         cout<<"Your score is "<<UserScore<<" and number of balls batted is "<<UserBalls<<endl;
        cout<<"Comp score is "<<CompScore<<" and number of balls batted is "<<CompBalls<<endl;
    }

    return 0;
}