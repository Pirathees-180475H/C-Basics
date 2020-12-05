#include <iostream>

using namespace std;
// bacic class and construtor and method

 class worker{
 public:
    string name;
    int age;
    worker(string n,int a){ name=n;age=a;}  // no this notation

    string gowork(){ cout<< name<< endl;
        return "im on work";}




};

// for inharitance

class shape{    // protected main la access illa, only in child..not as java
protected:

    int width;

public:
    int hight;
    void set_hight(int h){hight=h;}
    void set_width(int w){width=w;}
};


// multiple inharitance also in c++

class clour{
public:
    string clr;

    void set_clour(string c){clr=c;}

};

// inharitance
class rectangle : public shape{
public:
    void get_area(){int area=hight*width; cout<<area<< endl;}

};

class squre:public shape,public clour{

};


// overlaoding

class gamer{
public:
    int gamekills;
    double KD;

    int get_gamekills(int k){return gamekills;} // same methods but diffrent types of input parametre
    double get_gamekills(double K){return KD;}



};

// opreator overloading

class pen{
public:
    int price;

    pen(int price){price=price;}

    void get_price() {cout<<price<<endl;}

    pen operator +(const pen& p){   // this line for overloading
        pen pn;
        pn.price=this->price+p.price;
        cout<< pn.price << this->price << p.price<<endl;
        return pn;

    }


};




int main()
{
    cout << "Hello world!" << endl;

    // create a new objeect

    worker x("pts",22);

    // method calling
    cout<< x.gowork() << endl;

    x.name="pirathees"; // name changed because  it is public
     //inhatitance
    rectangle r;
    r.set_hight(10); r.set_width(50);    r.get_area();
    // multiple inharitance
    squre s;
    s.set_clour("red"); cout<<s.clr<< endl;
    s.set_hight(50);    cout<<s.hight<< endl;







    return 0;
}


