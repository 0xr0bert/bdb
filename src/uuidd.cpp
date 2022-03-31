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

#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid.hpp>

BDB::UUIDd::UUIDd()
    : BDB::UUIDd::UUIDd(boost::uuids::random_generator_mt19937()()) {}

BDB::UUIDd::UUIDd(const boost::uuids::uuid uuid) : uuid(uuid) {}

const boost::uuids::uuid &BDB::UUIDd::getUuid() const { return this->uuid; }

void BDB::UUIDd::setUuid(const boost::uuids::uuid uuid) { this->uuid = uuid; }
