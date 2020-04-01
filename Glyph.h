#ifndef _GLYPH_H
#define _GLYPH_H

//图元类，文档结构中所有对象的基类
class Window;
class Glyph
{
public:
    Glyph(){};
    ~Glyph(){};
    virtual void Draw(Window*){};
    //virtual void Bounds(Rect&); //返回图元占据的矩形区域
    //virtual bool Intersects(const Point&);  //判断一个指定点是否与图元相交
    //图元可以拥有子图元，所以有针对子图元的一系列操作
    virtual void Insert(Glyph*, int){};
    virtual void Remove(Glyph*){};
    virtual Glyph* Child(int){};
    virtual Glyph* Parent(){};
};

class Character : public Glyph
{ 
public:
    Character();
    ~Character();
};

class Row : public Glyph
{ 
public:
    Row();
    ~Row();
};

#endif
