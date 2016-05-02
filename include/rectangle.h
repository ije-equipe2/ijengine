#ifndef IJENGINE_RECTANGLE_H
#define IJENGINE_RECTANGLE_H

namespace ijengine
{
    class Rectangle {
    public:
        virtual ~Rectangle() = default;
        Rectangle(int x, int y, int w, int h);

        int x() const;
        int y() const;
        int w() const;
        int h() const;

    private:
        int m_x; // coordinate x of the rectangle's CENTER
        int m_y; // coordinate y of the rectangle's CENTER
        int m_w; // width of the rectangle
        int m_h; // height of the rectangle
    };
}

#endif
