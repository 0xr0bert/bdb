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
#ifndef BDB_BDB_H
#define BDB_BDB_H

#include <string>

/**
 * @brief Behaviour-Derived Beliefs.
 *
 * This library describes how beliefs are derived from behaviours.
 */
namespace BDB {
/**
 * @brief Get the version string.
 *
 * @return std::string The version string of the library.
 */
[[nodiscard("Pure function")]] std::string versionString();
} // namespace BDB

#endif // BDB_BDB_H