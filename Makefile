LexiApp : main.cpp Compositor.cpp Glyph.cpp LexiApp.cpp Window.cpp
	g++ -o LexiApp main.cpp Compositor.cpp Glyph.cpp LexiApp.cpp Window.cpp

clean :
	rm LexiApp
