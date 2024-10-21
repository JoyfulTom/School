#include <iostream>

using namespace std;

void matrixSum(int a[2][3], int b[2][3]){
cout << "The sum is: " << endl;
for (int i=0; i<2; i++){
    cout << a[i][0] + b[i][0] << " " << a[i][1] + b[i][1] << " " << a[i][2] + b[i][2] << endl;
}
}

int main(){
    int set1[2][3];
    int set2[2][3];
    cout << "Enter values for matrix 1, one row at a time:" << endl;
for (int i=0; i<2; i++){  
        cin >> set1[i][0] >> set1[i][1] >> set1[i][2];
}
    cout << "Enter values for matrix 2, one row at a time:" << endl;
for (int k=0; k<2; k++){  
        cin >> set2[k][0] >> set2[k][1] >> set2[k][2];
}
matrixSum(set1, set2);
return 0;
}