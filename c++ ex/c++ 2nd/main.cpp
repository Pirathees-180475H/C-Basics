#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    // about 2 dimansonal arrays

    int twod [2][3]={{1,2,3},{4,5,6}}; // [how many list][num of elements in insided list]


    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<< twod[i][j];
        }
        cout<<endl;
    }

    int x1=7;
    cout<< &x1<< endl;  //for memory addres



    return 0;
}



