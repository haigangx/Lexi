#include "LexiApp.h"
#include "Window.h"
#include "Compositor.h"
#include "Glyph.h"

#include <iostream>
using namespace std;

LexiApp::LexiApp()
{
    m_pMainWindow = new Window();
}

LexiApp::~LexiApp()
{
    delete m_pMainWindow;
}

bool LexiApp::run()
{
    m_pMainWindow->Add(new Character());
    m_pMainWindow->Add(new Character());
    m_pMainWindow->Add(new Row());
    m_pMainWindow->Show();
}

