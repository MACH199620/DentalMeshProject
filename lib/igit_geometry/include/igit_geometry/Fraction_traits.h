// Copyright (c) 2006-2007 Max-Planck-Institute Saarbruecken (Germany).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; either version 3 of the License,
// or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL$
// $Id$
//
//
// Author(s)     : Michael Hemmer    <hemmer@mpi-inf.mpg.de>
//
// =============================================================================


// TODO: The comments are all original EXACUS comments and aren't adapted. So
//         they may be wrong now.

/*! \file NiX/Fraction_traits.h
    \brief Defines class NiX::Fraction_traits. 
 
    Provides dependent types and function objects for all the functions
    beyond operators with specializations of the \c Fraction_traits<NT>
    class for each number type.
*/

#ifndef CGAL_FRACTION_TRAITS_H
#define CGAL_FRACTION_TRAITS_H 

#include <igit_geometry/tags.h>

namespace CGAL {

/*! \ingroup NiX_Fraction_traits_spec
 *  \brief Traits class for accessing numerator and denominator.\n 
 *  It is a model of the concept TypeTraits. 
 *
 *  This is the default version of NiX::Fraction_traits. 
 *  It typedefs NiX::Fraction_traits::Is_decomposable
 *  as Tag_false and all functors to LiS::Null_type.
 *  
 *  \see module NiX_Fraction_traits 
 *  \see module NiX_Cofraction_traits
 */
template <class Type_ >
class Fraction_traits {
public:
    typedef Type_ Type;
    typedef Tag_false Is_fraction;
    typedef Null_tag Numerator_type;
    typedef Null_tag Denominator_type;
    typedef Null_functor Common_factor;
    typedef Null_functor Decompose;
    typedef Null_functor Compose;
};

} //namespace CGAL

#endif // CGAL_FRACTION_TRAITS_H
// EOF
