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

#include "behaviour.hpp"

#include <gtest/gtest.h>
#include <string>

TEST(MockBehaviour, ConstructorWithNameAssignsName) {
  auto name = "B1";
  auto b1 = BDB::Testing::MockBehaviour(std::move(name));
  EXPECT_EQ(b1.name, "B1");
}