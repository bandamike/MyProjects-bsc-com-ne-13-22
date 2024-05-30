
namespace shapes{
    class Square{
        private:
        float Length;
        public:
        Square();
        Square(float Length);
        ~Square();
        float getLength();
        void setLength(float Length);
    };

    class Triangle{
        private:
        float Base;
        float Height;
        public:
        Triangle();
        Triangle(float Base,float Height);
        ~Triangle();
        float getBase();
        void setBase(float Base);
        float getHeight();
        void setHeight(float Height);
    };
    class Circle{
        private:
        float radius;
        public:
        Circle();
        Circle(float radius);
        ~Circle();
        float getRadius();
        void setRadius(float radius);
    };
}
