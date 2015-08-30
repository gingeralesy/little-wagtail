#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>

class Entity : public sf::Sprite
{
public:
  Entity(const sf::Image &image);
  virtual ~Entity() {}

  virtual void update(const float &delta) const = 0;

  const int id();

private:
  const int m_id;
};

#endif // ENTITY_H
