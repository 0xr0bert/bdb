/* BDB, Behaviour-Derived Beliefs.
 * Copyright (C) 2022 Robert Greener.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef BDB_BEHAVIOUR_H
#define BDB_BEHAVIOUR_H

#include <string>

namespace BDB {
/**
 * @brief The interface type of a behaviour.
 */
class IBehaviour {
public:
  /**
   * @brief The name of the behaviour.
   */
  const std::string name;

  /**
   * @brief Destroy the IBehaviour object.
   */
  virtual ~IBehaviour(){};

  /**
   * @brief Construct a new IBehaviour object.
   *
   * @param name The name of the behaviour.
   */
  IBehaviour(const std::string name);
};
} // namespace BDB

#endif // BDB_BEHAVIOUR_H