#ifndef FRAME_H
#define FRAME_H

#include <SFML/Graphics.hpp>

class Frame
{
public:
  Frame(const Frame &copy);
  Frame(const sf::Texture &texture,
        const sf::IntRect &rectangle,
        float timeLength);

  const sf::Texture texture() const;
  const sf::IntRect tile() const;
  const float length() const;

private:
  sf::Texture m_texture;
  sf::IntRect m_tile;
  float m_length;
};

#endif // FRAME_H
