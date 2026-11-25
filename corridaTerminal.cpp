#include <iostream>
using namespace std;



int main() {
    
    char pista[4][10] = {
    {'C', '.', '.', '.', '.', '#', '.', '.', '.', '.'},
    {'.', '.', '#', '.', '.', 'F', '.', '.', '$', '.'},
    {'.', '.', '.', '.', '#', '.', '.', '.', '.', '.'},
    {'.', '$', '.', '.', '.', '.', '.', '#', '.', 'E'}
};
    for(int i =0; i<20; i++) {
        cout << "-";
    }
    cout << endl;

    for(int i=0; i<4; i++) {
        for(int j=0; j<10; j++) {
            cout << pista[i][j] << " ";
        }
        cout<< endl;
    }
    for(int i =0; i<20; i++) {
        cout << "-";
    }

}