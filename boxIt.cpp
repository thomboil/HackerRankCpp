#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height



class Box
{
    public:
    Box()
    {
        l_=0;
        b_=0;
        h_=0;
    }
    Box(int l, int b, int h)
    {
        l_=l;
        b_=b;
        h_=h;
    }
    Box(const Box &B)
    {
        l_ = B.l_;
        b_ = B.b_;
        h_ = B.h_;
    }
    //Getters
    int getLenght(){return l_;} const
    int getBreadth(){return b_;} const
    int getHeight(){return h_;} const
    // long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume() const
    {
        return ((long)l_*b_*h_);
    }

    //Overload operator < as specified
    //bool operator<(Box& b)
    bool operator<(const Box &B)
    {
        return (this->l_ < B.l_) || ((b_ < B.b_) && (l_ == B.l_)) ||
                                ((h_ < B.h_) && (l_ == B.l_) && (b_ == B.b_));
    }

    //Overload operator << as specified
    //ostream& operator<<(ostream& out, Box& B)
    friend ostream& operator<<(ostream& out, Box& B)
    {
        out << B.l_ << " " << B.b_ << " " << B.h_;
        return out;
    }

    private:
    int l_;
    int b_;
    int h_;

};

