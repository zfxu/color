#ifndef color_yiq_get_blue
#define color_yiq_get_blue

// ::color::get::blue( c )
 namespace color
  {
   namespace get
    {
     namespace _internal
      {
       namespace yiq
        {
         namespace _internal
          {

           template< typename category_name, typename scalar_name = double >
            inline
            typename ::color::_internal::model< category_name >::component_const_type
            blue( ::color::_internal::model< category_name > const& color_parameter  )
             {
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename trait_type::component_type     component_type;

              scalar_name value =
                    1.00000 * ( color_parameter.template get<0>() - trait_type::template minimum<0>() ) / scalar_name( trait_type::template range<0>() )
                 -  1.15704 * ( color_parameter.template get<1>() - trait_type::template minimum<1>() ) / scalar_name( trait_type::template range<1>() )
                 +  2.03086 * ( color_parameter.template get<2>() - trait_type::template minimum<2>() ) / scalar_name( trait_type::template range<2>() )
                 -0.436912;

              return component_type( value * trait_type::template range<0>() + trait_type::template minimum<0>() );
             }
          }
        }
      }

      inline
      ::color::_internal::model< color::category::yiq_uint8 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint8 > const& color_parameter )
       {
        return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint8>( color_parameter );
       }

      inline
      ::color::_internal::model< color::category::yiq_uint16 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint16 > const& color_parameter )
       {
        return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint16>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint32 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint32 > const& color_parameter )
       {
        return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint32>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_uint64 >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_uint64 > const& color_parameter )
       {
        return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_uint64>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_float >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_float > const& color_parameter )
       {
        return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_float>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_double >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_double > const& color_parameter )
       {
        return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_double>( color_parameter );
       };

      inline
      ::color::_internal::model< color::category::yiq_ldouble >::component_const_type
      blue( ::color::_internal::model< color::category::yiq_ldouble > const& color_parameter )
       {
        return ::color::get::_internal::yiq::_internal::blue<color::category::yiq_ldouble>( color_parameter );
       };


    }
  }

#endif
