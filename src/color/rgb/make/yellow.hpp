#ifndef color_rgb_make_yellow
#define color_rgb_make_yellow

// ::color::make::yellow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 1, 0 } ) - rgb(255,255,0) - #FFFF00

     template< typename tag_name >
      inline
      void yellow( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 1, 1, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif
