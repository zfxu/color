#include <iomanip>
#include <iostream>
#include <typeinfo>

#include "color/color.hpp"

template< typename category_name >
 void test_get_red( )
  {
   typedef color::model< typename color::akin::rgb< category_name >::akin_type > rgb_type;
   typedef color::model< category_name > model_type;

   model_type m;
   double e = 0;

   for( auto c  = rgb_type::bound_type::minimum(0);
             c  < rgb_type::bound_type::maximum(0);
             c += rgb_type::bound_type::range(0) / 200
      )
    {
     color::make::orange( m );
              color::set::red( m, c );
     auto g = color::get::red( m );

     if( e < fabs( c - g) )
      {
       e = fabs( c - g );
      }
    }

   if( 1e-10 < e  )
    {
     std::cout << std::endl;
     std::cout << "{{{{ FAIL {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "    type - " << typeid( model_type  ).name() << std::endl;
     std::cout << "    type - " << typeid( rgb_type  ).name() << std::endl;
     std::cout << "    e: " << e << std::endl;
     std::cout << std::endl;
     std::cout << "}}}}  }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
    }
 }

template< typename category_name >
 void test_get_green( )
  {
   typedef color::model< typename color::akin::rgb< category_name >::akin_type > rgb_type;
   typedef color::model< category_name > model_type;

   model_type m;
   double e = 0;

   for( auto c  = rgb_type::bound_type::minimum(0);
             c  < rgb_type::bound_type::maximum(0);
             c += rgb_type::bound_type::range(0) / 200
      )
    {
     color::make::orange( m );
              color::set::green( m, c );
     auto g = color::get::green( m );

     if( e < fabs( c - g) )
      {
       e = fabs( c - g );
      }
    }

   if( 1e-10 < e  )
    {
     std::cout << std::endl;
     std::cout << "{{{{ FAIL {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "    type - " << typeid( model_type  ).name() << std::endl;
     std::cout << "    type - " << typeid( rgb_type  ).name() << std::endl;
     std::cout << "    e: " << e << std::endl;
     std::cout << std::endl;
     std::cout << "}}}}  }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
    }
 }

template< typename category_name >
 void test_get_blue( )
  {
   typedef color::model< typename color::akin::rgb< category_name >::akin_type > rgb_type;
   typedef color::model< category_name > model_type;

   model_type m;
   double e = 0;

   for( auto c  = rgb_type::bound_type::minimum(0);
             c  < rgb_type::bound_type::maximum(0);
             c += rgb_type::bound_type::range(0) / 200
      )
    {
     color::make::orange( m );
              color::set::blue( m, c );
     auto g = color::get::blue( m );

     if( e < fabs( c - g) )
      {
       e = fabs( c - g );
      }
    }

   if( 1e-10 < e  )
    {
     std::cout << std::endl;
     std::cout << "{{{{ FAIL {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{ {{{{"<< std::endl;
     std::cout << "  function - " << __FUNCTION__ << std::endl;
     std::cout << "    type - " << typeid( model_type  ).name() << std::endl;
     std::cout << "    type - " << typeid( rgb_type  ).name() << std::endl;
     std::cout << "    e: " << e << std::endl;
     std::cout << std::endl;
     std::cout << "}}}}  }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}} }}}}" << std::endl;
    }
 }

void check_get()
 {
  test_get_red< ::color::category::gray_double>();
  test_get_red< ::color::category::cmy_double>();
  test_get_red< ::color::category::cmyk_double>();
  test_get_red< ::color::category::hsv_double>();
  test_get_red< ::color::category::rgb_double>();
  test_get_red< ::color::category::yiq_double>();
  test_get_red< ::color::category::yuv_double>();

  test_get_green< ::color::category::gray_double>();
  test_get_green< ::color::category::cmy_double>();
  test_get_green< ::color::category::cmyk_double>();
  test_get_green< ::color::category::hsv_double>();
  test_get_green< ::color::category::rgb_double>();
  test_get_green< ::color::category::yiq_double>();
  test_get_green< ::color::category::yuv_double>();

  test_get_blue< ::color::category::gray_double>();
  test_get_blue< ::color::category::cmy_double>();
  test_get_blue< ::color::category::cmyk_double>();
  test_get_blue< ::color::category::hsv_double>();
  test_get_blue< ::color::category::rgb_double>();
  test_get_blue< ::color::category::yiq_double>();
  test_get_blue< ::color::category::yuv_double>();

 }