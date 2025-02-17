/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_INI_HOME_USER_KASPERSKYOS_PHP_SRC_ZEND_ZEND_INI_PARSER_H_INCLUDED
# define YY_INI_HOME_USER_KASPERSKYOS_PHP_SRC_ZEND_ZEND_INI_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef INI_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define INI_DEBUG 1
#  else
#   define INI_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define INI_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined INI_DEBUG */
#if INI_DEBUG
extern int ini_debug;
#endif

/* Token type.  */
#ifndef INI_TOKENTYPE
# define INI_TOKENTYPE
  enum ini_tokentype
  {
    END = 0,
    TC_SECTION = 258,
    TC_RAW = 259,
    TC_CONSTANT = 260,
    TC_NUMBER = 261,
    TC_STRING = 262,
    TC_WHITESPACE = 263,
    TC_LABEL = 264,
    TC_OFFSET = 265,
    TC_DOLLAR_CURLY = 266,
    TC_VARNAME = 267,
    TC_QUOTED_STRING = 268,
    BOOL_TRUE = 269,
    BOOL_FALSE = 270,
    NULL_NULL = 271,
    END_OF_LINE = 272
  };
#endif

/* Value type.  */
#if ! defined INI_STYPE && ! defined INI_STYPE_IS_DECLARED
typedef zval INI_STYPE;
# define INI_STYPE_IS_TRIVIAL 1
# define INI_STYPE_IS_DECLARED 1
#endif



int ini_parse (void);

#endif /* !YY_INI_HOME_USER_KASPERSKYOS_PHP_SRC_ZEND_ZEND_INI_PARSER_H_INCLUDED  */
