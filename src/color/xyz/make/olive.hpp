#ifndef color_xyz_make_olive
#define color_xyz_make_olive

// ::color::make::olive( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.5, 0.5, 0 } ) - rgb(127,127,0) - #7f7f00

      inline
      void olive( ::color::model< color::category::xyz_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x1f;
       }

      inline
      void olive( ::color::model< color::category::xyz_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x6c6;
       }

      inline
      void olive( ::color::model< color::category::xyz_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff07c840u;
       }

      inline
      void olive( ::color::model< color::category::xyz_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff073bcb96429eul;
       }

      inline
      void olive( ::color::model< color::category::xyz_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 12.7721, 15.7954, 0.159651 } );
       }

      inline
      void olive( ::color::model< color::category::xyz_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 12.7721, 15.7954, 0.159651 } );
       }

      inline
      void olive( ::color::model< color::category::xyz_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 12.7721, 15.7954, 0.159651 } );
       }

    }
  }

#endif
