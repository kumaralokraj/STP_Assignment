#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 4; i++) {         
        for (int j = 0; j < 8; j++) {       
            if (j == 0)
                cout << "* ";              
            else
                cout << "* ";               
        }
        cout << endl;
    }
    return 0;
}