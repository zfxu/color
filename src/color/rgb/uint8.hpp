#ifndef color_rgb_uint8
#define color_rgb_uint8

#include "../_internal/utility/bound/332.hpp"
#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/cnent332.hpp"
#include "../_internal/utility/container/cner332.hpp"

namespace color
 {
  namespace _internal
   {
       
    template< >
     struct bound< ::color::category::rgb_uint8 >
      : public ::color::_internal::utility::bound::bound332< unsigned >
      {
      };

    template< >
     struct index< ::color::category::rgb_uint8 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::rgb_uint8 >
      : public ::color::_internal::utility::component::cnent332< unsigned>
      {
      };

    template< >
     struct container< ::color::category::rgb_uint8 >
      : public  ::color::_internal::utility::container::cner332<  unsigned  >
      {
      };

   }
 }

#endif