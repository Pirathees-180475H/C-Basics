#include <iostream>

using namespace std;


//polymorpisam

class human{
 public :
     string name;
     int age;

    virtual void sayhi(){}  // iff not give virtual wrong result
};

class man : public human{
   public:
       void sayhi(){cout<<"im man"<<endl;}

       void say_manthings(){cout<<"im man class only"<<endl;}
};

class woman:public human{
public:
    void sayhi(){cout<<"im women"<<endl;}
};


int main()
{
    cout << "Hello world!" << endl;

    human *h; // human instance

    man m; woman w;

    h= &m; // now h have m's address

    h->sayhi(); // ans im man

    //h->say_manthings() not work

    h= &w;
    h->sayhi(); // ans im woman

}
