#include <iostream>
using namespace std;

int main() {

    int row = 3;
    int col = 3;

    int a[3][3] = {
        {2, 7, 1}, 
        {3, 5, 4}, 
        {8, 9, 6}
    };

    int maxElement = a[0][0];

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (a[i][j] > maxElement){
                maxElement = a[i][j];
            }
        }
    }

    cout << maxElement;

}