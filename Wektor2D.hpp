class Wektor2D
{
public:
    Wektor2D() : x(0), y(0) {}
    Wektor2D(double a, double b) : x(a), y(b) {}

    ~Wektor2D()
    {
        //cout << "Goodbye:\n";
    }
    
    void setX(double a=0) 
    {
        x = a;
    }
    
    void setY(double b=0) 
    {
        y = b;
    }
    
    double getX() 
    {
        return x;
    }

    double getY() 
    {
        return y;
    }

    void print() 
    {
        cout<<"Wspolzedna x: "<<x<<endl<<"Wspolzedna y: "<<y<<endl;
    }

    double x;
    double y;
};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
    return Wektor2D{w1.x + w2.x, w1.y + w2.y};
}

int operator*(Wektor2D w1, Wektor2D w2)
{
    return w1.x * w2.x + w1.y * w2.y;
}
