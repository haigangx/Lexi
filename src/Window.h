#ifndef _WINDOW_H
#define _WINDOW_H

class Glyph;
//负责绘制的类
class Window
{
public:
  Window();
  ~Window();
  void Show();
  void Add(Glyph* glyph);
};

#endif
