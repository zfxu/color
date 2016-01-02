#ifndef color_rgb_convert_xyz
#define color_rgb_convert_xyz

#include "../../_internal/container.hpp"
#include "../../_internal/convert.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"

#include "../../xyz/xyz.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateRGB
     {

      template< typename category_left_name, typename category_right_name, typename scalar_name = double >
       struct convert_xyz2rgb
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;
           typedef scalar_name  scalar_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           typedef ::color::_internal::diverse< category_left_type, scalar_type >    diverse_type;
           typedef ::color::_internal::normalize< category_right_type, scalar_type > normalize_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            { // TODO divide by 0.17697
             static scalar_type b11 =  2.3646138465383655,   b12 = -0.896540570739668,    b13 = -0.4680732757986974;
             static scalar_type b21 = -0.515166208447888,    b22 =  1.4264081038563887,   b23 =  0.08875810459149917;
             static scalar_type b31 =  0.005203699075231192, b32 = -0.014408162665216047, b33 =  1.0092044635899848; 

             scalar_type x = normalize_type::template process<0>( container_right_trait_type::template get<0>( right ) );
             scalar_type y = normalize_type::template process<1>( container_right_trait_type::template get<1>( right ) );
             scalar_type z = normalize_type::template process<2>( container_right_trait_type::template get<2>( right ) );

             container_left_trait_type::template set<0>( left, diverse_type::template process<0>( b11 * x + b12 * y + b13 * z ) );
             container_left_trait_type::template set<1>( left, diverse_type::template process<1>( b21 * x + b22 * y + b23 * z ) );
             container_left_trait_type::template set<2>( left, diverse_type::template process<2>( b31 * x + b32 * y + b33 * z ) );
            }
        };

     }

     template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint8  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint8  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint16 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint32 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_uint64 >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_float  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_float  >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_double >{};
     template< > struct convert<::color::category::rgb_uint8,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint8,::color::category::xyz_ldouble>{};

     template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint8  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint8  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint16 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint32 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_uint64 >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_float  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_float  >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_double >{};
     template< > struct convert<::color::category::rgb_uint16,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint16,::color::category::xyz_ldouble>{};

     template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint8  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint8  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint16 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint32 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_uint64 >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_float  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_float  >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_double >{};
     template< > struct convert<::color::category::rgb_uint32,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint32,::color::category::xyz_ldouble>{};

     template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint8  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint8  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint16 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint32 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_uint64 >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_float  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_float  >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_double >{};
     template< > struct convert<::color::category::rgb_uint64,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_uint64,::color::category::xyz_ldouble>{};

     template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint8  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint8  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint16 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint32 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_uint64 >{};
     template< > struct convert<::color::category::rgb_float,::color::category::xyz_float  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_float  >{};
     template< > struct convert<::color::category::rgb_float,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_double >{};
     template< > struct convert<::color::category::rgb_float,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_float,::color::category::xyz_ldouble>{};

     template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint8  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint8  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint16 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint32 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_uint64 >{};
     template< > struct convert<::color::category::rgb_double,::color::category::xyz_float  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_float  >{};
     template< > struct convert<::color::category::rgb_double,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_double >{};
     template< > struct convert<::color::category::rgb_double,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_double,::color::category::xyz_ldouble>{};

     template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint8  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint8  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint16 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint16 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint32 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint32 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_uint64 > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_uint64 >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_float  > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_float  >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_double > : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_double >{};
     template< > struct convert<::color::category::rgb_ldouble,::color::category::xyz_ldouble> : public ::color::_internal::_privateRGB::convert_xyz2rgb<::color::category::rgb_ldouble,::color::category::xyz_ldouble>{};


   }
 }

#endif
// TODO