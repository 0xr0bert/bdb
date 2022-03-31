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

#ifndef BDB_TESTING_BELIEF_H
#define BDB_TESTING_BELIEF_H

#include "bdb/belief.hpp"

namespace BDB::Testing {
class MockBelief : public BaseBelief {
public:
  using BaseBelief::BaseBelief;
};
} // namespace BDB::Testing

#endif // BDB_TESTING_BELIEF_H