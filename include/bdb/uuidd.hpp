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

#ifndef BDB_UUIDD_H
#define BDB_UUIDD_H

#include <boost/uuid/uuid.hpp>

namespace BDB {
class UUIDd {
public:
  /**
   * @brief Construct a new UUIDd object.
   *
   * This randomly generates a UUID.
   */
  UUIDd();

  /**
   * @brief Construct a new UUIDd object.
   *
   * @param uuid The UUID to assign.
   */
  UUIDd(const boost::uuids::uuid uuid);

  /**
   * @brief Get the Uuid object.
   *
   * @return const boost::uuids::uuid& The UUID.
   */
  [[nodiscard("Accessor")]] const boost::uuids::uuid &getUuid() const;

  /**
   * @brief Set the Uuid object.
   *
   * @param uuid The new UUID.
   */
  void setUuid(const boost::uuids::uuid uuid);

private:
  /**
   * @brief The UUID.
   */
  boost::uuids::uuid uuid;
};
} // namespace BDB

#endif // BDB_UUIDD_H