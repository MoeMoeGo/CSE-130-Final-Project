#include <iostream>
#include <string>
#include <time.h>
using namespace std;
int start = time(NULL);

class President {
public:
    string name;
    int term;
    int presidency;
};

int main() {
    President PresidentObj1;
    PresidentObj1.name = "Barack Obama";
    PresidentObj1.term = 2;
    PresidentObj1.presidency = 44;


    string guess;
    cout << "Guess Which President is this?(Enter the Last Name Only) \n";
    cout << "This president was the 44th president and had 2 terms:\n\n";
    cin >> guess;
    
   
    if (guess == "Obama") {
        cout <<  "Correct Choice\n\n";
        cout << PresidentObj1.name << " \n" << PresidentObj1.term << " term in office \n" << PresidentObj1.presidency << "th president\n\n";
    } else {
        cout << "Wrong Answer\n";
    }
    int end = time(NULL);
    cout << "Program exited after  " << end - start << " seconds" << endl;

    return 0;
}
