#ifndef color_generic_get_gray
#define color_generic_get_gray

// ::color::get::gray( c )

 namespace color
  {
   namespace get
    {

     template< typename category_name, typename scalar_name = double >
      inline
      typename ::color::_internal::model< category_name >::component_const_type
      gray( ::color::_internal::model< category_name > const& color_parameter )
       {
        return color_parameter.template get<0>();
       }

    }
  }

#endif
