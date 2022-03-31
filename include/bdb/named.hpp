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
#ifndef BDB_NAMED_H
#define BDB_NAMED_H

#include <boost/uuid/uuid.hpp>
#include <string>

namespace BDB {
/**
 * @brief A named object.
 */
class Named {
public:
  /**
   * @brief Construct a new Named object
   *
   * @param name The name.
   */
  Named(const std::string name);

  /**
   * @brief Get the name object.
   *
   * @return const std::string& The name of the object.
   */
  [[nodiscard("Accessor")]] const std::string &getName() const;

  /**
   * @brief Set the name object.
   *
   * @param name The new name.
   */
  void setName(const std::string name);

private:
  /**
   * @brief The name.
   */
  std::string name;
};
} // namespace BDB

#endif // BDB_NAMED_H