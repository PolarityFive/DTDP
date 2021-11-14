#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Button
{
public:
	Text buttonText;
	Font font;
	int bTextSize;
	Color textColor;
	int x;
	int y;

	RectangleShape bRect;

public:
	Button(std::string text, int textSize, int x, int y);
	void drawButton(RenderWindow& win);
	void initButtonBackground();
	void drawBackground(RenderWindow& win);
	bool isClicked();
};