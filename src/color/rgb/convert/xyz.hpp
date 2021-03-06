#ifndef color_rgb_convert_xyz
#define color_rgb_convert_xyz

#include "../../generic/trait/container.hpp"
#include "../../_internal/convert.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../../xyz/xyz.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename rgb_tag_name, typename xyz_tag_name >
     struct convert
      <
        ::color::category::rgb< rgb_tag_name >
       ,::color::category::xyz<xyz_tag_name>
      >
      {
       public:
         typedef ::color::category::rgb< rgb_tag_name > category_left_type;
         typedef ::color::category::xyz<xyz_tag_name>   category_right_type;
         typedef double  scalar_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::diverse< category_left_type >    diverse_type;
         typedef ::color::_internal::normalize< category_right_type > normalize_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           enum
            {
              red_p   = ::color::place::_internal::red<category_left_type>::position_enum
             ,green_p = ::color::place::_internal::green<category_left_type>::position_enum
             ,blue_p  = ::color::place::_internal::blue<category_left_type>::position_enum
            };

          static scalar_type mc = 0.17697;
           static scalar_type b11 =  473041/scalar_type(200050)*mc,  b12 = -60980/scalar_type(68017)*mc,  b13 = -1591847/scalar_type(3400850)*mc;
           static scalar_type b21 = -103059/scalar_type(200050)*mc,  b22 =  97020/scalar_type(68017)*mc,  b23 =   301853/scalar_type(3400850)*mc;
           static scalar_type b31 =    1041/scalar_type(200050)*mc,  b32 =   -980/scalar_type(68017)*mc,  b33 =  3432153/scalar_type(3400850)*mc;

           scalar_type x = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

           container_left_trait_type::template set<red_p  >( left, diverse_type::template process<red_p  >( b11 * x + b12 * y + b13 * z ) );
           container_left_trait_type::template set<green_p>( left, diverse_type::template process<green_p>( b21 * x + b22 * y + b23 * z ) );
           container_left_trait_type::template set<blue_p >( left, diverse_type::template process<blue_p >( b31 * x + b32 * y + b33 * z ) );
          }
      };

   }
 }

#endif
