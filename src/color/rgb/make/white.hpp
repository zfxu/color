#ifndef color_rgb_make_white
#define color_rgb_make_white

// ::color::make::white( c )

 namespace color
  {
   namespace make
    {

      inline
      void white( ::color::_internal::model< color::category::rgb_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xff;
       };

      inline
      void white( ::color::_internal::model< color::category::rgb_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xffff;
       };

      inline
      void white( ::color::_internal::model< color::category::rgb_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xffffffff;
       };

      inline
      void white( ::color::_internal::model< color::category::rgb_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffffffffffffffffu );
       };

      inline
      void white( ::color::_internal::model< color::category::rgb_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {1,1,1});
       };

      inline
      void white( ::color::_internal::model< color::category::rgb_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {1,1,1});
       };

      inline
      void white( ::color::_internal::model< color::category::rgb_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {1,1,1});
       };

    }
  }

#endif