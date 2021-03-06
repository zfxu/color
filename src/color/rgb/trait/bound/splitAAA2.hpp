#ifndef color_rgb_trait_bound_splitAAA2
#define color_rgb_trait_bound_splitAAA2


#include "../../../generic/type/split4.hpp"

#include "../../../_internal/utility/bound/split4.hpp"

#include "../../../generic/trait/bound.hpp"

#include "../../category.hpp"

namespace color
 {
  namespace trait
   {

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
      struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::splitAAA2_t, first_position, second_position, third_position, fourth_position > > >
       : public ::color::_internal::utility::bound::splitAAA2
       {
       };

     template< unsigned first_position, unsigned second_position, unsigned third_position, unsigned fourth_position >
      struct bound< ::color::category::rgb< ::color::category::_internal::rgba_scramble< ::color::type::split2AAA_t, first_position, second_position, third_position, fourth_position > > >
       : public ::color::_internal::utility::bound::split2AAA
       {
       };

   }
 }

#endif
