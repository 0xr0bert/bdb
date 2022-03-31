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

#include "bdb/belief.hpp"

#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <gtest/gtest.h>
#include <string>

TEST(BaseBelief, ConstructorWithNameAssignsName) {
  auto name = "B1";
  auto b1 = BDB::BaseBelief(std::move(name));
  EXPECT_EQ(b1.getName(), "B1");
}

TEST(BaseBelief, ConstructorWithNameRandomlyGeneratesUUID) {
  auto b1 = BDB::BaseBelief("B1");
  auto b2 = BDB::BaseBelief("B2");
  EXPECT_EQ(b1.getName(), "B1");
  EXPECT_EQ(b2.getName(), "B2");
  EXPECT_NE(b1.getUuid(), b2.getUuid());
}

TEST(BaseBelief, ConstructorWithUUIDWorks) {
  auto uuid = boost::uuids::random_generator_mt19937()();
  auto b = BDB::BaseBelief("B", uuid);
  EXPECT_EQ(b.getName(), "B");
  EXPECT_EQ(b.getUuid(), uuid);
}