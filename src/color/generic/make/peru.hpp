#ifndef  color_generic_make_peru
#define color_generic_make_peru

// ::color::make::peru( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void peru( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      peru()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::peru( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct peru /*: public ::color::constant::_base */ {};
      using  peru_t    = ::color::constant::peru;
      using  peru_type = ::color::constant::peru;

      template< typename category_name >
       struct make<::color::constant::peru, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::peru       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::peru<category_type>( ).container();
          }

        };

     }

  }

#endif
