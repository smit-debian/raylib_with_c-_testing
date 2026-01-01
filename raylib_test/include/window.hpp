#pragma once

#include <string>

class Window
{
private:
	int width;
	int height;
	const std::string title;
	int fps;

public:
	Window( int width, int height, const std::string& title, int fps );
	~Window();
};
