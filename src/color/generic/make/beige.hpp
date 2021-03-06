#ifndef  color_generic_make_beige
#define color_generic_make_beige

// ::color::make::beige( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void beige( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      beige()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::beige( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct beige /*: public ::color::constant::_base */ {};
      using  beige_t    = ::color::constant::beige;
      using  beige_type = ::color::constant::beige;

      template< typename category_name >
       struct make<::color::constant::beige, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::beige       color_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::beige<category_type>( ).container();
          }

        };

     }

  }

#endif
