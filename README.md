# Yet another c++ library that implements color.
Status:
- Documentation
 - Examples coverage: ~90%
 - HTML coverage: ~80%
- All planed functionality implemented
- Ready for test use

- Description
 - Yet another c++ library that implements color.

Key features:
- No _virtual_ functions
- Minimal memory footprint
- Ability to copy _array_/_vector_ of colors with _memcpy_, _memmove_, initialize with _memset_.
- Conversions from/to different types ( and its formats ).
- Headers only
- No third parties
- No additional binaries
- One file to include to start the fun
- Out of the box ready
 - No need to recompile or start some install process.
- Color models: CMY, CMYK, GRAY, HSL, HSV, RGB, YIQ, YUV.

Code sample:
```c++
color::rgb<float>         r( { 1.0, 0.55, 0.0 } );        //!< This will pack ONLY three consecutive floats in memory
color::bgr<std::uint8_t>  b( ::color::constant::aqua{} ); //!< Three consecutive std::uint8_t. Ordered in memory: blue, green and red.
color::yiq<std::uint8_t>  y( { 192, 64, 92 } );           //!< Three consecutive std::uint8_t. Ordered in memory: luma, inphase and quadrature.
color::hsv<double>        h( { 90.0, 50.0, 60.0 } );      //!< This will pack ONLY three consecutive doubles in memory

color::make::orange( r );     //!< Reset color to be  orange
color::make::turquoise( y );  //!< Reset color to be turquoise

b = r; //!< Reformat and convert.
r = b; //!< Reformat and convert in opposite direction.
h = b; //!< Reformat and convert from BGR to HSV
h = y; //!< Reformat and convert from YIQ to HSV

color::set::red( y ); //!< Set redness of YIQ

```

Want to see more:
  - [HTML Documentation ](doc/index.html)
  - [Wiki page](https://github.com/dmilos/color/wiki)

Tested against:
  - GCC 5.3.1 20160413
  - GCC 4.8.4
  - MSVC 2015 Update 2
  - MSVC 2013 Update 5
