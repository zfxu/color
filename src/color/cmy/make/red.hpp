#ifndef color_cmy_make_red
#define color_cmy_make_red

// ::color::make::red( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0, 0 } ) - rgb(255,0,0) - #FF0000

     template< typename tag_name >
      inline
      void red( ::color::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 0, 1, 1 } ) );

        color_parameter = local;
       }

    }
  }

#endif
