#ifndef ANIMATION_H
#define ANIMATION_H

#include <map>
#include <list>
#include <vector>
#include <SFML/Graphics.hpp>

#include "frame.h"

class Animation
{
public:
  Animation(const sf::Texture &texture,
            std::list<std::pair<sf::IntRect, float> > frames);
  ~Animation();

  const Frame getFrame(const float &delta);

private:
  const sf::Texture m_texture;
  std::vector<Frame> m_frames;
  sf::Uint32 m_curFrame;
  float m_timePassed;
};

#endif // ANIMATION_H
