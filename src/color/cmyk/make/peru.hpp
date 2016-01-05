#ifndef color_cmyk_make_peru
#define color_cmyk_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.803922, 0.521569, 0.247059 } ) 

      inline
      void peru( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x24;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x2a50;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0x31b05900u;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0x3231b15259e90000ul;
       }

      inline
      void peru( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.35122, 0.692683, 0.196078 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.35122, 0.692683, 0.196078 } );
       }

      inline
      void peru( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.35122, 0.692683, 0.196078 } );
       }

    }
  }

#endif