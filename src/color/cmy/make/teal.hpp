#ifndef color_cmy_make_teal
#define color_cmy_make_teal

// ::color::make::teal( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0, 0.5, 0.5 } ) - rgb(0,127,127) - #007F7F

     template< typename tag_name >
      inline
      void teal( ::color::model< ::color::category::cmy< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmy< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmy< double >      right_type;

        static left_type local( right_type( { 1, 0.5, 0.5 } ) );

        color_parameter = local;
       }

    }
  }

#endif
