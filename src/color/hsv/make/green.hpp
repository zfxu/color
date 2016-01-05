#ifndef color_hsv_make_green
#define color_hsv_make_green

// ::color::make::green( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0.5, 0 } ) 

      inline
      void green( ::color::_internal::model< color::category::hsv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7a;
       }

      inline
      void green( ::color::_internal::model< color::category::hsv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x7fea;
       }

      inline
      void green( ::color::_internal::model< color::category::hsv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff7fff55u;
       }

      inline
      void green( ::color::_internal::model< color::category::hsv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff7fffffff5555ul;
       }

      inline
      void green( ::color::_internal::model< color::category::hsv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.333333, 1, 0.5 } );
       }

      inline
      void green( ::color::_internal::model< color::category::hsv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.333333, 1, 0.5 } );
       }

      inline
      void green( ::color::_internal::model< color::category::hsv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.333333, 1, 0.5 } );
       }

    }
  }

#endif