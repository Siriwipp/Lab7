#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, studentID, movie, day, goodbye;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n"<< "?????: ";
    getline(cin, name);
    
    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\n";
    
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << "\n"<< name << ": ";
    getline(cin, studentID);
    
    
    int firstTwoDigits = stoi(studentID.substr(0, 2));
    int gear = firstTwoDigits - 12;  
    
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you." << "\n";
    
    cout << "Fahsai: Let's go to the cinema together!!!" << "\n";
    cout << "Fahsai: What movie do you want to watch?" << "\n"<< name << ": ";
    getline(cin, movie);
    
    cout << "Fahsai: So....which day are you free to go with me?" << "\n"<< name << ": ";
    getline(cin, day);
    
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << "\n"<< name << ": ";
    getline(cin, goodbye);
    
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/" << "\n";
    
    return 0;
}