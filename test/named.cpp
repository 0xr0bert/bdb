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

#include "bdb/named.hpp"

#include <gtest/gtest.h>

TEST(Named, ConstructorAndGetWorks) {
  auto n1 = BDB::Named("n1");
  EXPECT_EQ(n1.getName(), "n1");
}

TEST(Named, ConstructorSetAndGetWorks) {
  auto n1 = BDB::Named("n1");
  EXPECT_EQ(n1.getName(), "n1");
  n1.setName("n2");
  EXPECT_EQ(n1.getName(), "n2");
}