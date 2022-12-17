#include <SFML/Graphics.hpp>

using namespace sf;

public class GoblinClass
{
	Sprite m_Sprite;
	Vector2f m_Position;
	Texture m_Texture;
	int m_Health;
	int m_Speed;
	int m_Damage;
	int m_Mitigation;
	String m_Name;

	bool m_UpButton = false;
	bool m_DownButton = false;
	bool m_LeftButton = false;
	bool m_RightButton = false;

	bool goblin1 = false;
	bool goblin2 = false;
	bool goblin3 = false;
	bool goblin4 = false;
}

void GoblinClass::update(float elapsedTime)
{

}

void GoblinClass::handleInput()
{
	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		m_UpButton = true;
	}
	else
	{
		m_UpButton = false;
	}
	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		m_DownButton = true;
	}
	else
	{
		m_DownButton = false;
	}
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		m_LeftButton = true;
	}
	else
	{
		m_LeftButton = false;
	}
	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		m_RightButton = true;
	}
	else
	{
		m_RightButton = false;
	}
	if (Keyboard::isKeyPressed(Keyboard::1))
	{
		goblin1 = true;
		goblin2 = false;
		goblin3 = false;
		goblin4 = false;
	}
	else
	{
		goblin1 = false;
	}
	if (Keyboard::isKeyPressed(Keyboard::1))
	{
		goblin1 = false;
		goblin2 = true;
		goblin3 = false;
		goblin4 = false;
	}
	else
	{
		goblin2 = false;
	}
	if (Keyboard::isKeyPressed(Keyboard::3))
	{
		goblin1 = false;
		goblin2 = false;
		goblin3 = true;
		goblin4 = false;
	}
	else
	{
		goblin3 = false;
	}
	if (Keyboard::isKeyPressed(Keyboard::4))
	{
		goblin1 = false;
		goblin2 = false;
		goblin3 = false;
		goblin4 = true;
	}
	else
	{
		goblin4 = false;
	}
}