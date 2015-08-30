#include "animation.h"

Animation::Animation(const sf::Texture &texture,
                     std::list<std::pair<sf::IntRect, float> > frames)
  : m_texture(texture), m_curFrame(0), m_timePassed(0.f)
{
  std::list<std::pair<sf::IntRect, float> >::iterator it;
  for (it = frames.begin(); it != frames.end(); it++)
  {
    std::pair<sf::IntRect, float> f = *it;
    m_frames.push_back(Frame(m_texture, f.first, f.second));
  }
}

Animation::~Animation()
{ }

const Frame Animation::getFrame(const float &delta)
{
  m_timePassed += delta;

  Frame frame = m_frames[m_curFrame];
  while (frame.length() <= m_timePassed)
  {
    m_timePassed -= frame.length();

    m_curFrame += 1;
    if (m_curFrame >= m_frames.size())
      m_curFrame = 0;

    frame = m_frames[m_curFrame];
  }

  return frame;
}
