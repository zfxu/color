#ifndef color_cmyk_make_gold
#define color_cmyk_make_gold

// ::color::make::gold( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.843137, 0 } ) - rgb(255,215,0) - #FFD700

     template< typename tag_name >
      inline
      void gold( ::color::model< ::color::category::cmyk< tag_name > > & color_parameter )
       {
        typedef ::color::category::cmyk< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::cmyk< double >      right_type;

        static left_type local( right_type( { 0, 0.156862745, 1, 0 } ) );

        color_parameter = local;
       }

    }
  }

#endif
