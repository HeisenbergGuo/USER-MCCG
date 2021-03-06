/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   Copyright (c) 2012-2014 The plumed team
   (see the PEOPLE file at the root of the distribution for a list of names)

   See http://www.plumed-code.org for more information.

   This file is part of plumed, version 2.

   plumed is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   plumed is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with plumed.  If not, see <http://www.gnu.org/licenses/>.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */
#ifndef __PLUMED_vesselbase_StoreValueAndWeightVessel_h
#define __PLUMED_vesselbase_StoreValueAndWeightVessel_h

#include <string>
#include <cstring>
#include <vector>
#include "StoreDataVessel.h"

namespace PLMD {
namespace vesselbase {

class StoreValueAndWeightVessel : public StoreDataVessel {
public:
  static void registerKeywords( Keywords& keys );
  StoreValueAndWeightVessel( const VesselOptions& );
  double getValue( const unsigned& );
  double getWeight( const unsigned& );
};

inline
double StoreValueAndWeightVessel::getValue( const unsigned& ival ){
  return getComponent( ival, 0 );
}

inline
double StoreValueAndWeightVessel::getWeight( const unsigned& ival ){
  return getComponent( ival, 1 );
}


}
}
#endif
