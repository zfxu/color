#ifndef color_hsl_make_sienna
#define color_hsl_make_sienna

// ::color::make::sienna( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.627451, 0.321569, 0.176471 } ) 

      inline
      void sienna( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x58;
       }

      inline
      void sienna( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x6621;
       }

      inline
      void sienna( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff668f0du;
       }

      inline
      void sienna( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff66e68f9b0dbaul;
       }

      inline
      void sienna( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.0536232, 0.560976, 0.401961 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.0536232, 0.560976, 0.401961 } );
       }

      inline
      void sienna( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.0536232, 0.560976, 0.401961 } );
       }

    }
  }

#endif