#include <iostream>
#include <iomanip>
#include <cstdint>

#include "color/color.hpp"

void make_cmy_red();
void make_cmyk_red();
void make_gray_red();
void make_hsl_red();
void make_hsv_red();
void make_rgb_red();
void make_yiq_red();
void make_yuv_red();


void make_rgb_red();

int main( int argc, char *argv[] )
 {
  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;

  make_cmy_red();
  make_cmyk_red();
  make_gray_red();
  make_hsl_red();
  make_hsv_red();
  make_rgb_red();
  make_yiq_red();
  make_yuv_red();

  std::cout<< "---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----" << std::endl;
  return EXIT_SUCCESS;
 }

template< typename category_name >
 inline void print( color::model< category_name > const& c )
  {
   typedef color::model< category_name > model_type;
   std::cout << "{ ";

   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     std::cout<< std::setw(12) << std::right << c[index] << ",";
    }
   std::cout << " }";
  }

void make_cmy_red()
 {
  // Make instance of CMY in different formats
//color::cmy<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmy<std::uint64_t>  c1;
  color::cmy<std::uint32_t>  c2;
  color::cmy<std::uint16_t>  c3;
  color::cmy<std::uint8_t>   c4;
  color::cmy<float>          c5;
  color::cmy<double>         c6;
  color::cmy<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::cmy<std::uint64_t>  = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::cmy<std::uint32_t>  = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::cmy<std::uint16_t>  = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::cmy<std::uint8_t>   = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::cmy<float>          = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::cmy<double>         = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::cmy<long double>    = "; print( c7 ); std::cout << std::endl;
 }

void make_cmyk_red()
 {
  // Make instance of CMYK in different formats
//color::cmyk<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::cmyk<std::uint64_t>  c1;
  color::cmyk<std::uint32_t>  c2;
  color::cmyk<std::uint16_t>  c3;
  color::cmyk<std::uint8_t>   c4;
  color::cmyk<float>          c5;
  color::cmyk<double>         c6;
  color::cmyk<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::cmyk<std::uint64_t> = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::cmyk<std::uint32_t> = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::cmyk<std::uint16_t> = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::cmyk<std::uint8_t>  = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::cmyk<float>         = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::cmyk<double>        = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::cmyk<long double>   = "; print( c7 ); std::cout << std::endl;
 }

void make_gray_red()
 {
  // Make instance of Gray in different formats
//color::gray<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::gray<std::uint8_t>   c1;
  color::gray<std::uint16_t>  c2;
  color::gray<std::uint32_t>  c3;
  color::gray<std::uint64_t>  c4;
  color::gray<float>          c5;
  color::gray<double>         c6;
  color::gray<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::gray<std::uint8_t>  = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::gray<std::uint16_t> = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::gray<std::uint32_t> = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::gray<std::uint64_t> = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::gray<float>         = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::gray<double>        = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::gray<long double>   = "; print( c7 ); std::cout << std::endl;
 }

void make_hsl_red()
 {
  // Make instance of HSL in different formats
//color::hsl<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::hsl<std::uint8_t>   c1;
  color::hsl<std::uint16_t>  c2;
  color::hsl<std::uint32_t>  c3;
  color::hsl<std::uint64_t>  c4;
  color::hsl<float>          c5;
  color::hsl<double>         c6;
  color::hsl<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::hsl<std::uint8_t>  = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::hsl<std::uint16_t> = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::hsl<std::uint32_t> = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::hsl<std::uint64_t> = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::hsl<float>         = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::hsl<double>        = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::hsl<long double>   = "; print( c7 ); std::cout << std::endl;
 }

void make_hsv_red()
 {
  // Make instance of HSV in different formats
//color::hsv<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::hsv<std::uint8_t>   c1;
  color::hsv<std::uint16_t>  c2;
  color::hsv<std::uint32_t>  c3;
  color::hsv<std::uint64_t>  c4;
  color::hsv<float>          c5;
  color::hsv<double>         c6;
  color::hsv<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::hsv<std::uint8_t>  = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::hsv<std::uint16_t> = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::hsv<std::uint32_t> = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::hsv<std::uint64_t> = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::hsv<float>         = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::hsv<double>        = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::hsv<long double>   = "; print( c7 ); std::cout << std::endl;
 }

void make_rgb_red()
 {
  // Make instance of RGB in different formats
//color::rgb<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::rgb<std::uint8_t>   c1;
  color::rgb<std::uint16_t>  c2;
  color::rgb<std::uint32_t>  c3;
  color::rgb<std::uint64_t>  c4;
  color::rgb<float>          c5;
  color::rgb<double>         c6;
  color::rgb<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::rgb<std::uint8_t>  = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::rgb<std::uint16_t> = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::rgb<std::uint32_t> = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::rgb<std::uint64_t> = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::rgb<float>         = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::rgb<double>        = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::rgb<long double>   = "; print( c7 ); std::cout << std::endl;
 }


void make_yiq_red()
 {
  // Make instance of YIQ in different formats
//color::yiq<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::yiq<std::uint8_t>   c1;
  color::yiq<std::uint16_t>  c2;
  color::yiq<std::uint32_t>  c3;
  color::yiq<std::uint64_t>  c4;
  color::yiq<float>          c5;
  color::yiq<double>         c6;
  color::yiq<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::yiq<std::uint8_t>  = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::yiq<std::uint16_t> = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::yiq<std::uint32_t> = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::yiq<std::uint64_t> = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::yiq<float>         = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::yiq<double>        = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::yiq<long double>   = "; print( c7 ); std::cout << std::endl;
 }

void make_yuv_red()
 {
  // Make instance of YUV in different formats
//color::yuv<bool>           c0( { true, false, false } ); //!< Not yet supported
  color::yuv<std::uint8_t>   c1;
  color::yuv<std::uint16_t>  c2;
  color::yuv<std::uint32_t>  c3;
  color::yuv<std::uint64_t>  c4;
  color::yuv<float>          c5;
  color::yuv<double>         c6;
  color::yuv<long double>    c7;

  // make it red
  color::make::red( c1 ); std::cout << "color::yuv<std::uint8_t>  = "; print( c1 ); std::cout << std::endl;
  color::make::red( c2 ); std::cout << "color::yuv<std::uint16_t> = "; print( c2 ); std::cout << std::endl;
  color::make::red( c3 ); std::cout << "color::yuv<std::uint32_t> = "; print( c3 ); std::cout << std::endl;
  color::make::red( c4 ); std::cout << "color::yuv<std::uint64_t> = "; print( c4 ); std::cout << std::endl;
  color::make::red( c5 ); std::cout << "color::yuv<float>         = "; print( c5 ); std::cout << std::endl;
  color::make::red( c6 ); std::cout << "color::yuv<double>        = "; print( c6 ); std::cout << std::endl;
  color::make::red( c7 ); std::cout << "color::yuv<long double>   = "; print( c7 ); std::cout << std::endl;
 }
