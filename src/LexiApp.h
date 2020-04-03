#ifndef _LEXIAPP_H
#define _LEXIAPP_H

class Window;
class LexiApp
{
public:
    LexiApp();
    ~LexiApp();
    bool run();

private:
    Window* m_pMainWindow;
};

#endif
