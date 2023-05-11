#include <iostream>

using namespace std;
// parent class
class shape
{
    /* private:
           int l,b,h,r;*/
public:
    int l, b, h, r;

    void setdata(int x, int y, int z, int a)
    {
        l = x;
        b = y;
        h = z;
        r = a;
    }
    void showdata()
    {
        cout << "\n"<< l << " " << b << " " << h << " " << r;
    }
    // protected:
      // int l,b,h,r;
};
// child class
class circle : public shape
{
public:
    int getarea()
    {
        // int r;
        cout << "\nArea of a circle is:";
        return (2 * 3.14 * r);
    }
};
// We can make more then one child class of same parent class
class rectangle : public shape
{
public:
    int getarea()
    {
        cout << "\narea of rectangle :";
        return (l * b);
    }
};
class triangle : public shape
{
public:

    int getarea()
    {
        cout << "\nArea of triangle is  :";
        return (0.5 * b * h);
    }
};

int main()
{
   // shape s1;
    circle c1;
    rectangle r1;
    triangle t1;
    c1.setdata(2, 2, 5, 6);
    cout << c1.getarea();
     r1.setdata(2, 2, 5, 6);
    cout << r1.getarea();
    t1.setdata(2,5, 5, 6);
    cout << t1.getarea();
    t1.showdata();
    
}