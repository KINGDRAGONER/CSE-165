#ifndef APP_H
#define APP_H
#include"Rect.h"

class AppWindow
{
protected:
    Rect rect;

public:
    AppWindow() : rect(0.0, 0.0, 0.0, 0.0)
    {
    }
    AppWindow(float x, float y, float w, float h) : rect(x, y, w, h)
    {
    }

    AppWindow(const Rect &r):rect(r)
    {
        rect = r;
    }
    const Rect &get_rect()
    {
        return rect;
    }
    virtual void resize(int w, int h){
        rect.w = w;
        rect.h = h;
    }
};

class CircleWin : public AppWindow
{
protected:
    float radius;

public:
    CircleWin() : AppWindow()
    {
        radius = std::max(rect.w, rect.h);
    }
    CircleWin(float x, float y, float w, float h) : AppWindow(x, y, w, h), radius(std::max(rect.w, rect.h))
    {
        radius = std::max(rect.w, rect.h);
    }

    CircleWin(const Rect &r) : AppWindow(r)
    {
        rect = r;
    }
    void resize(int w, int h) override
    {
        AppWindow::resize(w, h);
    radius = std::max(rect.w, rect.h);
        std::cout << "radius: " << radius << std::endl;
    }
};

class RectWin : public AppWindow
{
protected:
    float area;

public:
    RectWin() :area(0)
    {
    }
    RectWin(float x, float y, float w, float h) : AppWindow(x, y, w, h), area(h * w)
    {
        area = h * w;
    }

    RectWin(const Rect &a) : AppWindow(a)
    {
        area = rect.h*rect.w;
    }
void resize(int w, int h) override {
    AppWindow::resize(w, h);
    area = rect.h * rect.w;
    std::cout << "area: " << area << std::endl;
}
};
//complile warning:
// In file included from virtualMethods.cpp:3:
// ./App.h:58:31: warning: 'override' keyword is a C++11 extension [-Wc++11-extensions]
//     void resize(int w, int h) override
//                               ^
// ./App.h:84:27: warning: 'override' keyword is a C++11 extension [-Wc++11-extensions]
// void resize(int w, int h) override {
//                           ^
// 2 warnings generated.

#endif