///////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2019 - 2020.                 //
//  Distributed under the Boost Software License,                //
//  Version 1.0. (See accompanying file LICENSE_1_0.txt          //
//  or copy at http://www.boost.org/LICENSE_1_0.txt)             //
///////////////////////////////////////////////////////////////////

#include <iomanip>
#include <iostream>

#include <wide_integer/generic_template_uintwide_t.h>

bool test_uintwide_t_examples()
{
  bool result_is_ok = true;

  result_is_ok &= wide_integer::example001_mul_div               (); std::cout << "result_is_ok after example001_mul_div            : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example001a_div_mod              (); std::cout << "result_is_ok after example001a_div_mod           : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example002_shl_shr               (); std::cout << "result_is_ok after example002_shl_shr            : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example003_sqrt                  (); std::cout << "result_is_ok after example003_sqrt               : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example003a_cbrt                 (); std::cout << "result_is_ok after example003a_cbrt              : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example004_rootk_pow             (); std::cout << "result_is_ok after example004_rootk_pow          : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example005_powm                  (); std::cout << "result_is_ok after example005_powm               : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example006_gcd                   (); std::cout << "result_is_ok after example006_gcd                : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example007_random_generator      (); std::cout << "result_is_ok after example007_random_generator   : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example008_miller_rabin_prime    (); std::cout << "result_is_ok after example008_miller_rabin_prime : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example008a_miller_rabin_prime   (); std::cout << "result_is_ok after example008a_miller_rabin_prime: " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example009_timed_mul             (); std::cout << "result_is_ok after example009_timed_mul          : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example010_uint48_t              (); std::cout << "result_is_ok after example010_uint48_t           : " << std::boolalpha << result_is_ok << std::endl;
  result_is_ok &= wide_integer::example011_uint24_t              (); std::cout << "result_is_ok after example011_uint24_t           : " << std::boolalpha << result_is_ok << std::endl;

  return result_is_ok;
}
