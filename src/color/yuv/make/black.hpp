#ifndef color_yuv_make_black
#define color_yuv_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 0, 0 } ) 

      inline
      void black( ::color::_internal::model< color::category::yuv_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void black( ::color::_internal::model< color::category::yuv_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x0;
       }

      inline
      void black( ::color::_internal::model< color::category::yuv_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff000000u;
       }

      inline
      void black( ::color::_internal::model< color::category::yuv_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff000000000000ul;
       }

      inline
      void black( ::color::_internal::model< color::category::yuv_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 0, 0 } );
       }

      inline
      void black( ::color::_internal::model< color::category::yuv_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 0, 0 } );
       }

      inline
      void black( ::color::_internal::model< color::category::yuv_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 0, 0 } );
       }

    }
  }

#endif
