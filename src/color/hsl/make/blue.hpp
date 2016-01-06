#ifndef color_hsl_make_blue
#define color_hsl_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 1 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7c;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7ff4;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fffaau;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffffaaaaul;
       }

      inline
      void blue( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 240, 100, 50 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 240, 100, 50 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 240, 100, 50 } );
       }

    }
  }

#endif
