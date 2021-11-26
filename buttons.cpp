#include "buttons.h"
using namespace sf;

Button::Button(std::string text, int textSize,int x, int y)
{
	this->font.loadFromFile("OpenSans.ttf");
	this->buttonText.setFont(this->font);
	this->buttonText.setString(text);
	this->buttonText.setFillColor(Color::White);
	this->buttonText.setCharacterSize(textSize);
	this->x = x;
	this->y = y;

}

void Button::drawButton(RenderWindow& win)
{
	this->buttonText.setPosition(this->x,this->y);
	win.draw(buttonText);
}


void Button::initButtonBackground()
{
	Vector2f bSize(200, 100);
	this->bRect.setPosition(this->x-(bSize.x/4), this->y);
	this->bRect.setFillColor(Color::Black);
	this->bRect.setSize(bSize);

}

void Button::drawBackground(RenderWindow& win)
{
	win.draw(this->bRect);
}
