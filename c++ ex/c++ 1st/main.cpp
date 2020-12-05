#include <iostream>
#include <cmath>
using namespace std;


// function not need to in a class but this need to above the main class, other wise error

void sayhi(){
cout<<"say hi"<<endl;
}

int main()
{
    // variables
    string  name= "nimal";
    int age; age=22;


    cout << "Hello world!" << endl;
    cout<<"im pirathees age 20"<<endl;

     cout<<"im " << name << " age" << " "<< age <<endl;

     // data types

     char grade='A'; // save a single data
     string texts="pirathees";
     age=50;
     int number=-51;
       // for float
     float c=5.59;
     double t=5.14475; // double can store more decimal points ,usually use double

     bool x=false;
     bool y=true;

     // Working with strings

     cout<< "hello"
     "world" <<endl; // cout and next endl are in same line

     cout<< "hello \n"
     "world"<< endl; // print in next line

     cout<< "abc"; // also printed but next code um same line la varum

     cout << texts.length()<<endl;// for length of a string
     cout<< texts[0]<< endl;

     texts[1]='B'; //change charters

     cout<< texts.find("thees",0)<< endl;// to find that start index in text


     string sub=texts.substr(4, 2);
     cout<<sub<< endl; //parameters start index.length


    //working with numbers

    cout<< 5+ 5.5<< endl; // answer is 10.5
    cout<< 5+4<< endl; // ans is 9

    cout<< 10/3 << endl; //ans is 3 int-> int


    //from cmath onclude

    int d=pow(2,5); // ans is 32
    d=sqrt(25); // ans is 5

    d=round(4.6);// ans is 5
    d=ceil(4.3);// ans is 5
    d=floor(4.7);// ans is 4

    d=fmax(5,2);// ans is 5 also fmin

    // user input

    int agee;

    cout<< "enter input" <<endl;
    cin >>agee; // actual input declare to variable

    if((agee>18 && agee<45)|| agee>15){
        cout<<"you are adult"<< endl;
    } else{
        cout<<"not adult"<< endl;
    }

    string namme;

    cout<<"entera name"<< endl;
    cin>> namme;                   // if input is "Abc CDE" then Abc only will get so we use new way getline
    cout<< namme<< endl;


    string name1;
     cout <<"enter ful name"<<endl;
     cin.ignore(); // for avoid getline error

     getline(cin,name1);
     cout<< name1<< endl;

    // array is same as java array have types

    int numbs[]={4,5,1};
    cout<< numbs[0]; //ans is 4
    numbs[0]=15;

    // we also define size
    int num2[20]; //20 is size of array

    //function calling
    sayhi();


    //while loop

    cout<<"enter new input for while loop" <<endl;

    int wc;
    cin>>wc;
    while(wc>0){
        wc--;
        cout<<"print"<< wc<<endl;
    }

    //sitch in c++

    cout<<"input for switch c++"<<endl;

    int A;
    cin>> A;

    switch(A){
    case 5: cout<<" you select 5"<<endl; break;
    case 4: cout<<" you select 4"<<endl; break;
    default:break;

    }

    // for loop
    int arrayx[20]={1,2};
    int C=sizeof(arrayx);

    for(int i=0;i<sizeof(arrayx);i++){
       cout<<arrayx[i]<< endl;
    }



    return 0;


}





