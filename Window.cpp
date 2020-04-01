#include "Window.h"
#include "Glyph.h"

#include <iostream>
using namespace std;

Window::Window()
{
    cout << "创建一个Window" << endl;
}

Window::~Window()
{

}

void Window::Show()
{
    cout << "显示上的Window的内容" << endl;
}

void Window::Add(Glyph* glyph)
{
    cout << "添加了一个文档组件" << endl;
}
