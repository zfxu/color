#ifndef color_rgb_make_peru
#define color_rgb_make_peru

// ::color::make::peru( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 205.0/255.0, 133.0/255.0,  63.0/255.0 } ) - rgb(205,133,63) - #cd853f

     template< typename tag_name >
      inline
      void peru( ::color::model< ::color::category::rgb< tag_name > > & color_parameter )
       {
        typedef ::color::category::rgb< tag_name     > category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::rgb< double >      right_type;

        static left_type local( right_type( { 0.8, 0.52, 0.25 } ) );

        color_parameter = local;
       }

    }
  }

#endif
