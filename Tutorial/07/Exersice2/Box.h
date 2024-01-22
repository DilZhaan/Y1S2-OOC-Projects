class Box{
    private:
        int length, width, height;
    public: 
        Box();
        void setLength(int len);
        void setWidth(int wdt);
        void setHeight(int h);
        int getLength();
        int getWidth();
        int getHeight();
        int  calcVolume();
};