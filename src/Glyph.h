#ifndef _GLYPH_H
#define _GLYPH_H

//ͼԪ�࣬�ĵ��ṹ�����ж���Ļ���
class Window;
class Glyph
{
public:
    Glyph(){};
    ~Glyph(){};
    virtual void Draw(Window*){};
    //virtual void Bounds(Rect&); //����ͼԪռ�ݵľ�������
    //virtual bool Intersects(const Point&);  //�ж�һ��ָ�����Ƿ���ͼԪ�ཻ
    //ͼԪ����ӵ����ͼԪ�������������ͼԪ��һϵ�в���
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
