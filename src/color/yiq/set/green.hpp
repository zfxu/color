#ifndef color_yiq_set_green
#define color_yiq_set_green

// ::color::set::green( c, val )

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace yiq
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            green
             ( 
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
             )
             {
              typedef ::color::_internal::model< category_name > model_type;
              typedef ::color::_internal::trait< category_name > trait_type;
              typedef typename  trait_type::component_type component_type;

              component_type new_component;;

              new_component = ( trait_type::template range<1>() - ( component_parameter - trait_type::template minimum<1>() ) ) + trait_type::template  minimum<1>();

              color_parameter.template set<1>( new_component );

             }

          }
        }
      }

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::yiq_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint8 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::yiq_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint16 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::yiq_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint32 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::yiq_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_uint64 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::green<::color::category::yiq_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::yiq_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_float >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::green<::color::category::yiq_float>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::yiq_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_double >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::green<::color::category::yiq_double>( color_parameter, component_parameter );
       };

      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::yiq_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::yiq_ldouble >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::yiq::_internal::green<::color::category::yiq_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif 