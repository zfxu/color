#ifndef color_cmyk_make_blue
#define color_cmyk_make_blue

// ::color::make::blue( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0, 1 } ) - rgb(0,0,255) - #0000ff

      inline
      void blue( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xf;
       }

      inline
      void blue( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xff;
       }

      inline
      void blue( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffu;
       }

      inline
      void blue( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffffffful;
       }

      inline
      void blue( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 1, 1, 0, 0 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 1, 1, 0, 0 } );
       }

      inline
      void blue( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 1, 1, 0, 0 } );
       }

    }
  }

#endif
