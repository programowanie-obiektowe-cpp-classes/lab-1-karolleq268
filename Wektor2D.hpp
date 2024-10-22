using namespace std;

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
    
    Wektor2D operator+(Wektor2D& A)
    {
        return Wektor2D{x + A.x, y + A.y};
    }
    
    int operator*(Wektor2D& A)
    {
        return x * A.x + y * A.y;
    }
private:
    double x;
    double y;
};
