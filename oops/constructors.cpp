class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() // non-parameterised constructor
    {
        length = 0;
        breadth = 0;
    }

    //void Rectangle(int l, int b) // constructor does not have any return type
    Rectangle(int l, int b) // parameterised constructor
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle(&r))
    {
        length = r.length;
        breadth = r.breadth;
    }

    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int
    getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};

int main()
{
    Rectangle r;
    Rectangle r1();
    Rectangle r2(5, 10);
    Rectangle r3(r2);
}