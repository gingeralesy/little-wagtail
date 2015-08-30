#include "frame.h"

Frame::Frame(const Frame &copy)
  : m_texture(copy.texture()), m_tile(copy.tile()), m_length(copy.length())
{ }

Frame::Frame(const sf::Texture &texture,
             const sf::IntRect &rectangle,
             float timeLength)
  : m_texture(texture), m_tile(rectangle), m_length(timeLength)
{ }

const sf::Texture Frame::texture() const
{
  return m_texture;
}

const sf::IntRect Frame::tile() const
{
  return m_tile;
}

const float Frame::length() const
{
  return m_length;
}
