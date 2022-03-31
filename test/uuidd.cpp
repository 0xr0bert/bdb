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

#include "bdb/uuidd.hpp"

#include <boost/uuid/nil_generator.hpp>
#include <boost/uuid/random_generator.hpp>
#include <gtest/gtest.h>

TEST(UUIDd, EmptyConstructorAndGetWorks) {
  auto u1 = BDB::UUIDd();
  EXPECT_NE(u1.getUuid(), boost::uuids::nil_uuid());
}

TEST(UUIDd, NonEmptyConstructorAndGetWorks) {
  auto uuid = boost::uuids::random_generator_mt19937()();
  auto u1 = BDB::UUIDd(uuid);
  EXPECT_EQ(uuid, u1.getUuid());
}

TEST(Named, NonEmptyConstructorSetAndGetWorks) {
  auto uuid1 = boost::uuids::random_generator_mt19937()();
  auto u1 = BDB::UUIDd(uuid1);
  EXPECT_EQ(uuid1, u1.getUuid());
  auto uuid2 = boost::uuids::random_generator_mt19937()();
  u1.setUuid(uuid2);
  EXPECT_EQ(uuid2, u1.getUuid());
}