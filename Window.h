#ifndef _WINDOW_H
#define _WINDOW_H

class Glyph;
//������Ƶ���
class Window
{
public:
  Window();
  ~Window();
  void Show();
  void Add(Glyph* glyph);
};

#endif
