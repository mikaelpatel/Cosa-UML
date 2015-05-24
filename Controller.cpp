/**
 * @file Controller.cpp
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2015, Mikael Patel
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * This file is part of the Arduino Che Cosa project.
 */

#include "UML/Controller.hh"

namespace UML {

Controller controller;

void
Controller::run()
{
  while (m_cnt != 0) {
    Capsule* capsule;
    synchronized {
      capsule = m_queue[m_get++];
      if (UNLIKELY(m_get == QUEUE_MAX)) m_get = 0;
      m_cnt -= 1;
      capsule->is_scheduled = false;
    }
    capsule->behavior();
  }
}

int
Controller::schedule(Capsule* capsule)
{
  if (UNLIKELY(m_cnt == QUEUE_MAX)) return (ENOMEM);
  synchronized {
    if (capsule->is_scheduled) synchronized_return (0);
    capsule->is_scheduled = true;
    m_queue[m_put++] = capsule;
    if (UNLIKELY(m_put == QUEUE_MAX)) m_put = 0;
    m_cnt += 1;
  }
  return (1);
}

};
