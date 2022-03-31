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

#include "bdb/named.hpp"
#include "bdb/uuidd.hpp"
#include <boost/uuid/uuid.hpp>
#include <string>

namespace BDB {
/**
 * @brief The base type of a behaviour.
 */
class BaseBehaviour : public Named, public UUIDd {
public:
  /**
   * @brief Construct a new BaseBehaviour object.
   *
   * This randomly generates a UUIDv4.
   *
   * @param name The name of the behaviour.
   */
  BaseBehaviour(const std::string name);

  /**
   * @brief Construct a new BaseBehaviour object.
   *
   * @param name The name of the behaviour.
   * @param uuid The UUID of the behaviour.
   */
  BaseBehaviour(const std::string name, const boost::uuids::uuid uuid);
};
} // namespace BDB

#endif // BDB_BEHAVIOUR_H