#ifndef color_rgb_trait_component_split233
#define color_rgb_trait_component_split233


#include "../../../generic/type/split3.hpp"

#include "../../../_internal/utility/component/pack8.hpp"

#include "../../../generic/trait/component.hpp"

#include "../../category.hpp"


namespace color
 {
  namespace trait
   {

     template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split233_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::component::cnent233< unsigned >
      {
      };

     template< unsigned first_position, unsigned second_position, unsigned third_position >
     struct component< ::color::category::rgb< ::color::category::_internal::rgb_scramble< ::color::type::split332_t, first_position, second_position, third_position > > >
      : public ::color::_internal::utility::component::cnent332< unsigned >
      {
      };

   }
 }

#endif

