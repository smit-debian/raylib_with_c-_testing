#include "window.hpp"
#include "raylib.h"

Window::Window( int width, int height, const std::string& title, int fps )
        : width( width ), height( height ), title( title ), fps( fps )
{
        InitWindow( width, height, title.c_str() );
        SetTargetFPS( fps );
}

Window::~Window()
{
        CloseWindow();
}
