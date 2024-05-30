
class Rectangle{
    private:
    float Length;
    float Width;
    public:
    Rectangle();
    Rectangle(float l,float w);

    void setLength(float l);
    void setWidth(float w);
    float getLength();
    float getWidth();
     float Area();
     ~Rectangle();
};