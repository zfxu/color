#ifndef color_yuv_make_moccasin
#define color_yuv_make_moccasin

// ::color::make::moccasin( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.894118, 0.709804 } ) - rgb(255,228,181) - #FFE4B5

     template< typename tag_name >
      inline
      void moccasin( ::color::model< ::color::category::yuv< tag_name > > & color_parameter )
       {
        typedef ::color::category::yuv< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::yuv< double >      right_type;

        static left_type local( right_type( { 0.904764706, -0.0959400699, 0.0835516489 } ) );

        color_parameter = local;
       }

    }
  }

#endif
