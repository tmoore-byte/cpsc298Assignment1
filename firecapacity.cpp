/*
Write a program that determines whether a meeting room
is in violation of fire law regula- tions regarding the
 maximum room capacity. The program will read in the maximum
  room capacity and the number of people to attend the meeting.

  If the number of people is less than or equal to the maximum room capacity,
   the program announces that it is legal to hold the meeting and tells
   how many additional people may legally attend. If the number of people
   exceeds the maximum room capacity, the program announces that the meeting
   cannot be held as planned due to fire regulations and tells how many people
   must be excluded in order to meet the fire regulations.
*/
#include <iostream>

using namespace std;

int main(int argc, char **argv){

  int maxRoomSize;
  int numPeople;
  int morePeople;
  bool safe;

  cout << "Enter the max capacity of the room: "
  cin >> maxRoomSize;
  cout << "Enter the amount people who will be attending: " << endl;
  cin >> numPeople;

  if (numPeople > maxRoomSize){
    cout << "This meeting cannot be held due to fire safety regulations." << endl;
    cout << "The maximum amount of people allowed is " << maxRoomSize << endl;

  }else if (numPeople <= maxRoomSize){
    cout << "This meeting can be held." << endl;
    morePeople = maxRoomSize - numPeople;
    cout << "This meeting can legally hold " << morePeople << "more people." << endl;
  }else {
    cout << "invalid input." << endl;
  }

  return 0;
}
