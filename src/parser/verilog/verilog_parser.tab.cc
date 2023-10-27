// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.


// Take the name prefix into account.
#define yylex   vvlex



#include "verilog_parser.tab.hh"


// Unqualified %code blocks.
#line 27 "src/parser/verilog/verilog_parser.yy"

#include "readverilog.h"

#line 52 "src/parser/verilog/verilog_parser.tab.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if VVDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !VVDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !VVDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace vv {
#line 144 "src/parser/verilog/verilog_parser.tab.cc"

  /// Build a parser object.
  parser::parser (prs::verilog::readverilog& drv_yyarg)
#if VVDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      drv (drv_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_assignment_stmt: // assignment_stmt
        value.YY_MOVE_OR_COPY< prs::verilog::ast::assignment_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONSTBIN: // "bin_constant"
        value.YY_MOVE_OR_COPY< prs::verilog::ast::bin_constant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_concat_expr: // concat_expr
        value.YY_MOVE_OR_COPY< prs::verilog::ast::concat_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_conn_pair: // conn_pair
        value.YY_MOVE_OR_COPY< prs::verilog::ast::conn_pair > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_conn_pair_list: // conn_pair_list
        value.YY_MOVE_OR_COPY< prs::verilog::ast::conn_pair_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_constant_expr: // constant_expr
        value.YY_MOVE_OR_COPY< prs::verilog::ast::constant_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONSTDEC: // "dec_constant"
        value.YY_MOVE_OR_COPY< prs::verilog::ast::dec_constant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr: // expr
        value.YY_MOVE_OR_COPY< prs::verilog::ast::expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_list: // expr_list
        value.YY_MOVE_OR_COPY< prs::verilog::ast::expr_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONSTHEX: // "hex_constant"
        value.YY_MOVE_OR_COPY< prs::verilog::ast::hex_constant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ident_list: // ident_list
        value.YY_MOVE_OR_COPY< prs::verilog::ast::ident_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_indexed_expr: // indexed_expr
        value.YY_MOVE_OR_COPY< prs::verilog::ast::indexed_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_instance_stmt: // instance_stmt
        value.YY_MOVE_OR_COPY< prs::verilog::ast::instance_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.YY_MOVE_OR_COPY< prs::verilog::ast::integer > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module: // module
        value.YY_MOVE_OR_COPY< prs::verilog::ast::module > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module_header: // module_header
        value.YY_MOVE_OR_COPY< prs::verilog::ast::module_header > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module_port_decl: // module_port_decl
        value.YY_MOVE_OR_COPY< prs::verilog::ast::module_port_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module_port_decl_list: // module_port_decl_list
        value.YY_MOVE_OR_COPY< prs::verilog::ast::module_port_decl_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_multi_var_decl: // multi_var_decl
        value.YY_MOVE_OR_COPY< prs::verilog::ast::multi_var_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_net_decl_stmt: // net_decl_stmt
        value.YY_MOVE_OR_COPY< prs::verilog::ast::net_decl_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param_config: // param_config
        value.YY_MOVE_OR_COPY< prs::verilog::ast::param_config > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_prim_gate_stmt: // prim_gate_stmt
        value.YY_MOVE_OR_COPY< prs::verilog::ast::prim_gate_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_range: // range
        value.YY_MOVE_OR_COPY< prs::verilog::ast::range > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ranged_expr: // ranged_expr
        value.YY_MOVE_OR_COPY< prs::verilog::ast::ranged_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ranged_var_decl: // ranged_var_decl
        value.YY_MOVE_OR_COPY< prs::verilog::ast::ranged_var_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement: // statement
        value.YY_MOVE_OR_COPY< prs::verilog::ast::statement > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.YY_MOVE_OR_COPY< prs::verilog::ast::statement_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_decl: // var_decl
        value.YY_MOVE_OR_COPY< prs::verilog::ast::var_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_verilog: // verilog
        value.YY_MOVE_OR_COPY< prs::verilog::ast::verilog > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // "ident"
      case symbol_kind::S_PRIMGATE: // "primitive_gate"
      case symbol_kind::S_PORTATT: // "variable_attribute"
      case symbol_kind::S_PORTDIR: // "port_direction"
      case symbol_kind::S_CONSTSTR: // "str_constant"
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_assignment_stmt: // assignment_stmt
        value.move< prs::verilog::ast::assignment_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONSTBIN: // "bin_constant"
        value.move< prs::verilog::ast::bin_constant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_concat_expr: // concat_expr
        value.move< prs::verilog::ast::concat_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_conn_pair: // conn_pair
        value.move< prs::verilog::ast::conn_pair > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_conn_pair_list: // conn_pair_list
        value.move< prs::verilog::ast::conn_pair_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_constant_expr: // constant_expr
        value.move< prs::verilog::ast::constant_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONSTDEC: // "dec_constant"
        value.move< prs::verilog::ast::dec_constant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr: // expr
        value.move< prs::verilog::ast::expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_list: // expr_list
        value.move< prs::verilog::ast::expr_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_CONSTHEX: // "hex_constant"
        value.move< prs::verilog::ast::hex_constant > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ident_list: // ident_list
        value.move< prs::verilog::ast::ident_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_indexed_expr: // indexed_expr
        value.move< prs::verilog::ast::indexed_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_instance_stmt: // instance_stmt
        value.move< prs::verilog::ast::instance_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< prs::verilog::ast::integer > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module: // module
        value.move< prs::verilog::ast::module > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module_header: // module_header
        value.move< prs::verilog::ast::module_header > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module_port_decl: // module_port_decl
        value.move< prs::verilog::ast::module_port_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_module_port_decl_list: // module_port_decl_list
        value.move< prs::verilog::ast::module_port_decl_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_multi_var_decl: // multi_var_decl
        value.move< prs::verilog::ast::multi_var_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_net_decl_stmt: // net_decl_stmt
        value.move< prs::verilog::ast::net_decl_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_param_config: // param_config
        value.move< prs::verilog::ast::param_config > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_prim_gate_stmt: // prim_gate_stmt
        value.move< prs::verilog::ast::prim_gate_stmt > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_range: // range
        value.move< prs::verilog::ast::range > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ranged_expr: // ranged_expr
        value.move< prs::verilog::ast::ranged_expr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_ranged_var_decl: // ranged_var_decl
        value.move< prs::verilog::ast::ranged_var_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement: // statement
        value.move< prs::verilog::ast::statement > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.move< prs::verilog::ast::statement_list > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_var_decl: // var_decl
        value.move< prs::verilog::ast::var_decl > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_verilog: // verilog
        value.move< prs::verilog::ast::verilog > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_IDENT: // "ident"
      case symbol_kind::S_PRIMGATE: // "primitive_gate"
      case symbol_kind::S_PORTATT: // "variable_attribute"
      case symbol_kind::S_PORTDIR: // "port_direction"
      case symbol_kind::S_CONSTSTR: // "str_constant"
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_assignment_stmt: // assignment_stmt
        value.copy< prs::verilog::ast::assignment_stmt > (that.value);
        break;

      case symbol_kind::S_CONSTBIN: // "bin_constant"
        value.copy< prs::verilog::ast::bin_constant > (that.value);
        break;

      case symbol_kind::S_concat_expr: // concat_expr
        value.copy< prs::verilog::ast::concat_expr > (that.value);
        break;

      case symbol_kind::S_conn_pair: // conn_pair
        value.copy< prs::verilog::ast::conn_pair > (that.value);
        break;

      case symbol_kind::S_conn_pair_list: // conn_pair_list
        value.copy< prs::verilog::ast::conn_pair_list > (that.value);
        break;

      case symbol_kind::S_constant_expr: // constant_expr
        value.copy< prs::verilog::ast::constant_expr > (that.value);
        break;

      case symbol_kind::S_CONSTDEC: // "dec_constant"
        value.copy< prs::verilog::ast::dec_constant > (that.value);
        break;

      case symbol_kind::S_expr: // expr
        value.copy< prs::verilog::ast::expr > (that.value);
        break;

      case symbol_kind::S_expr_list: // expr_list
        value.copy< prs::verilog::ast::expr_list > (that.value);
        break;

      case symbol_kind::S_CONSTHEX: // "hex_constant"
        value.copy< prs::verilog::ast::hex_constant > (that.value);
        break;

      case symbol_kind::S_ident_list: // ident_list
        value.copy< prs::verilog::ast::ident_list > (that.value);
        break;

      case symbol_kind::S_indexed_expr: // indexed_expr
        value.copy< prs::verilog::ast::indexed_expr > (that.value);
        break;

      case symbol_kind::S_instance_stmt: // instance_stmt
        value.copy< prs::verilog::ast::instance_stmt > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.copy< prs::verilog::ast::integer > (that.value);
        break;

      case symbol_kind::S_module: // module
        value.copy< prs::verilog::ast::module > (that.value);
        break;

      case symbol_kind::S_module_header: // module_header
        value.copy< prs::verilog::ast::module_header > (that.value);
        break;

      case symbol_kind::S_module_port_decl: // module_port_decl
        value.copy< prs::verilog::ast::module_port_decl > (that.value);
        break;

      case symbol_kind::S_module_port_decl_list: // module_port_decl_list
        value.copy< prs::verilog::ast::module_port_decl_list > (that.value);
        break;

      case symbol_kind::S_multi_var_decl: // multi_var_decl
        value.copy< prs::verilog::ast::multi_var_decl > (that.value);
        break;

      case symbol_kind::S_net_decl_stmt: // net_decl_stmt
        value.copy< prs::verilog::ast::net_decl_stmt > (that.value);
        break;

      case symbol_kind::S_param_config: // param_config
        value.copy< prs::verilog::ast::param_config > (that.value);
        break;

      case symbol_kind::S_prim_gate_stmt: // prim_gate_stmt
        value.copy< prs::verilog::ast::prim_gate_stmt > (that.value);
        break;

      case symbol_kind::S_range: // range
        value.copy< prs::verilog::ast::range > (that.value);
        break;

      case symbol_kind::S_ranged_expr: // ranged_expr
        value.copy< prs::verilog::ast::ranged_expr > (that.value);
        break;

      case symbol_kind::S_ranged_var_decl: // ranged_var_decl
        value.copy< prs::verilog::ast::ranged_var_decl > (that.value);
        break;

      case symbol_kind::S_statement: // statement
        value.copy< prs::verilog::ast::statement > (that.value);
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.copy< prs::verilog::ast::statement_list > (that.value);
        break;

      case symbol_kind::S_var_decl: // var_decl
        value.copy< prs::verilog::ast::var_decl > (that.value);
        break;

      case symbol_kind::S_verilog: // verilog
        value.copy< prs::verilog::ast::verilog > (that.value);
        break;

      case symbol_kind::S_IDENT: // "ident"
      case symbol_kind::S_PRIMGATE: // "primitive_gate"
      case symbol_kind::S_PORTATT: // "variable_attribute"
      case symbol_kind::S_PORTDIR: // "port_direction"
      case symbol_kind::S_CONSTSTR: // "str_constant"
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_assignment_stmt: // assignment_stmt
        value.move< prs::verilog::ast::assignment_stmt > (that.value);
        break;

      case symbol_kind::S_CONSTBIN: // "bin_constant"
        value.move< prs::verilog::ast::bin_constant > (that.value);
        break;

      case symbol_kind::S_concat_expr: // concat_expr
        value.move< prs::verilog::ast::concat_expr > (that.value);
        break;

      case symbol_kind::S_conn_pair: // conn_pair
        value.move< prs::verilog::ast::conn_pair > (that.value);
        break;

      case symbol_kind::S_conn_pair_list: // conn_pair_list
        value.move< prs::verilog::ast::conn_pair_list > (that.value);
        break;

      case symbol_kind::S_constant_expr: // constant_expr
        value.move< prs::verilog::ast::constant_expr > (that.value);
        break;

      case symbol_kind::S_CONSTDEC: // "dec_constant"
        value.move< prs::verilog::ast::dec_constant > (that.value);
        break;

      case symbol_kind::S_expr: // expr
        value.move< prs::verilog::ast::expr > (that.value);
        break;

      case symbol_kind::S_expr_list: // expr_list
        value.move< prs::verilog::ast::expr_list > (that.value);
        break;

      case symbol_kind::S_CONSTHEX: // "hex_constant"
        value.move< prs::verilog::ast::hex_constant > (that.value);
        break;

      case symbol_kind::S_ident_list: // ident_list
        value.move< prs::verilog::ast::ident_list > (that.value);
        break;

      case symbol_kind::S_indexed_expr: // indexed_expr
        value.move< prs::verilog::ast::indexed_expr > (that.value);
        break;

      case symbol_kind::S_instance_stmt: // instance_stmt
        value.move< prs::verilog::ast::instance_stmt > (that.value);
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        value.move< prs::verilog::ast::integer > (that.value);
        break;

      case symbol_kind::S_module: // module
        value.move< prs::verilog::ast::module > (that.value);
        break;

      case symbol_kind::S_module_header: // module_header
        value.move< prs::verilog::ast::module_header > (that.value);
        break;

      case symbol_kind::S_module_port_decl: // module_port_decl
        value.move< prs::verilog::ast::module_port_decl > (that.value);
        break;

      case symbol_kind::S_module_port_decl_list: // module_port_decl_list
        value.move< prs::verilog::ast::module_port_decl_list > (that.value);
        break;

      case symbol_kind::S_multi_var_decl: // multi_var_decl
        value.move< prs::verilog::ast::multi_var_decl > (that.value);
        break;

      case symbol_kind::S_net_decl_stmt: // net_decl_stmt
        value.move< prs::verilog::ast::net_decl_stmt > (that.value);
        break;

      case symbol_kind::S_param_config: // param_config
        value.move< prs::verilog::ast::param_config > (that.value);
        break;

      case symbol_kind::S_prim_gate_stmt: // prim_gate_stmt
        value.move< prs::verilog::ast::prim_gate_stmt > (that.value);
        break;

      case symbol_kind::S_range: // range
        value.move< prs::verilog::ast::range > (that.value);
        break;

      case symbol_kind::S_ranged_expr: // ranged_expr
        value.move< prs::verilog::ast::ranged_expr > (that.value);
        break;

      case symbol_kind::S_ranged_var_decl: // ranged_var_decl
        value.move< prs::verilog::ast::ranged_var_decl > (that.value);
        break;

      case symbol_kind::S_statement: // statement
        value.move< prs::verilog::ast::statement > (that.value);
        break;

      case symbol_kind::S_statement_list: // statement_list
        value.move< prs::verilog::ast::statement_list > (that.value);
        break;

      case symbol_kind::S_var_decl: // var_decl
        value.move< prs::verilog::ast::var_decl > (that.value);
        break;

      case symbol_kind::S_verilog: // verilog
        value.move< prs::verilog::ast::verilog > (that.value);
        break;

      case symbol_kind::S_IDENT: // "ident"
      case symbol_kind::S_PRIMGATE: // "primitive_gate"
      case symbol_kind::S_PORTATT: // "variable_attribute"
      case symbol_kind::S_PORTDIR: // "port_direction"
      case symbol_kind::S_CONSTSTR: // "str_constant"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if VVDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if VVDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // VVDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (drv));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_assignment_stmt: // assignment_stmt
        yylhs.value.emplace< prs::verilog::ast::assignment_stmt > ();
        break;

      case symbol_kind::S_CONSTBIN: // "bin_constant"
        yylhs.value.emplace< prs::verilog::ast::bin_constant > ();
        break;

      case symbol_kind::S_concat_expr: // concat_expr
        yylhs.value.emplace< prs::verilog::ast::concat_expr > ();
        break;

      case symbol_kind::S_conn_pair: // conn_pair
        yylhs.value.emplace< prs::verilog::ast::conn_pair > ();
        break;

      case symbol_kind::S_conn_pair_list: // conn_pair_list
        yylhs.value.emplace< prs::verilog::ast::conn_pair_list > ();
        break;

      case symbol_kind::S_constant_expr: // constant_expr
        yylhs.value.emplace< prs::verilog::ast::constant_expr > ();
        break;

      case symbol_kind::S_CONSTDEC: // "dec_constant"
        yylhs.value.emplace< prs::verilog::ast::dec_constant > ();
        break;

      case symbol_kind::S_expr: // expr
        yylhs.value.emplace< prs::verilog::ast::expr > ();
        break;

      case symbol_kind::S_expr_list: // expr_list
        yylhs.value.emplace< prs::verilog::ast::expr_list > ();
        break;

      case symbol_kind::S_CONSTHEX: // "hex_constant"
        yylhs.value.emplace< prs::verilog::ast::hex_constant > ();
        break;

      case symbol_kind::S_ident_list: // ident_list
        yylhs.value.emplace< prs::verilog::ast::ident_list > ();
        break;

      case symbol_kind::S_indexed_expr: // indexed_expr
        yylhs.value.emplace< prs::verilog::ast::indexed_expr > ();
        break;

      case symbol_kind::S_instance_stmt: // instance_stmt
        yylhs.value.emplace< prs::verilog::ast::instance_stmt > ();
        break;

      case symbol_kind::S_INTEGER: // INTEGER
        yylhs.value.emplace< prs::verilog::ast::integer > ();
        break;

      case symbol_kind::S_module: // module
        yylhs.value.emplace< prs::verilog::ast::module > ();
        break;

      case symbol_kind::S_module_header: // module_header
        yylhs.value.emplace< prs::verilog::ast::module_header > ();
        break;

      case symbol_kind::S_module_port_decl: // module_port_decl
        yylhs.value.emplace< prs::verilog::ast::module_port_decl > ();
        break;

      case symbol_kind::S_module_port_decl_list: // module_port_decl_list
        yylhs.value.emplace< prs::verilog::ast::module_port_decl_list > ();
        break;

      case symbol_kind::S_multi_var_decl: // multi_var_decl
        yylhs.value.emplace< prs::verilog::ast::multi_var_decl > ();
        break;

      case symbol_kind::S_net_decl_stmt: // net_decl_stmt
        yylhs.value.emplace< prs::verilog::ast::net_decl_stmt > ();
        break;

      case symbol_kind::S_param_config: // param_config
        yylhs.value.emplace< prs::verilog::ast::param_config > ();
        break;

      case symbol_kind::S_prim_gate_stmt: // prim_gate_stmt
        yylhs.value.emplace< prs::verilog::ast::prim_gate_stmt > ();
        break;

      case symbol_kind::S_range: // range
        yylhs.value.emplace< prs::verilog::ast::range > ();
        break;

      case symbol_kind::S_ranged_expr: // ranged_expr
        yylhs.value.emplace< prs::verilog::ast::ranged_expr > ();
        break;

      case symbol_kind::S_ranged_var_decl: // ranged_var_decl
        yylhs.value.emplace< prs::verilog::ast::ranged_var_decl > ();
        break;

      case symbol_kind::S_statement: // statement
        yylhs.value.emplace< prs::verilog::ast::statement > ();
        break;

      case symbol_kind::S_statement_list: // statement_list
        yylhs.value.emplace< prs::verilog::ast::statement_list > ();
        break;

      case symbol_kind::S_var_decl: // var_decl
        yylhs.value.emplace< prs::verilog::ast::var_decl > ();
        break;

      case symbol_kind::S_verilog: // verilog
        yylhs.value.emplace< prs::verilog::ast::verilog > ();
        break;

      case symbol_kind::S_IDENT: // "ident"
      case symbol_kind::S_PRIMGATE: // "primitive_gate"
      case symbol_kind::S_PORTATT: // "variable_attribute"
      case symbol_kind::S_PORTDIR: // "port_direction"
      case symbol_kind::S_CONSTSTR: // "str_constant"
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // verilog: module
#line 91 "src/parser/verilog/verilog_parser.yy"
                 { drv.vast.push_back(yystack_[0].value.as < prs::verilog::ast::module > ()); }
#line 1158 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 3: // verilog: verilog module
#line 92 "src/parser/verilog/verilog_parser.yy"
                     { drv.vast.push_back(yystack_[0].value.as < prs::verilog::ast::module > ()); }
#line 1164 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 4: // module: module_header statement_list ENDMODULEKW
#line 95 "src/parser/verilog/verilog_parser.yy"
                                                  { yylhs.value.as < prs::verilog::ast::module > () = {std::move(yystack_[2].value.as < prs::verilog::ast::module_header > ()), std::move(yystack_[1].value.as < prs::verilog::ast::statement_list > ())}; }
#line 1170 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 5: // module_header: MODULEKW "ident"
#line 99 "src/parser/verilog/verilog_parser.yy"
                         { yylhs.value.as < prs::verilog::ast::module_header > ().module_name = yystack_[0].value.as < std::string > (); }
#line 1176 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 6: // module_header: MODULEKW "ident" "(" module_port_decl_list ")"
#line 100 "src/parser/verilog/verilog_parser.yy"
                                                       { yylhs.value.as < prs::verilog::ast::module_header > () = {std::move(yystack_[3].value.as < std::string > ()), std::move(yystack_[1].value.as < prs::verilog::ast::module_port_decl_list > ())}; }
#line 1182 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 7: // module_header: module_header ";"
#line 101 "src/parser/verilog/verilog_parser.yy"
                             { yylhs.value.as < prs::verilog::ast::module_header > () = std::move(yystack_[1].value.as < prs::verilog::ast::module_header > ()); }
#line 1188 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 8: // module_port_decl_list: module_port_decl
#line 105 "src/parser/verilog/verilog_parser.yy"
                           { yylhs.value.as < prs::verilog::ast::module_port_decl_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::module_port_decl > ()); }
#line 1194 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 9: // module_port_decl_list: module_port_decl_list "," module_port_decl
#line 106 "src/parser/verilog/verilog_parser.yy"
                                                     { yystack_[2].value.as < prs::verilog::ast::module_port_decl_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::module_port_decl > ()); yylhs.value.as < prs::verilog::ast::module_port_decl_list > () = std::move(yystack_[2].value.as < prs::verilog::ast::module_port_decl_list > ()); }
#line 1200 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 10: // module_port_decl: var_decl
#line 110 "src/parser/verilog/verilog_parser.yy"
                   { yylhs.value.as < prs::verilog::ast::module_port_decl > () = {"", "", std::move(yystack_[0].value.as < prs::verilog::ast::var_decl > ())}; }
#line 1206 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 11: // module_port_decl: "variable_attribute" var_decl
#line 111 "src/parser/verilog/verilog_parser.yy"
                            { yylhs.value.as < prs::verilog::ast::module_port_decl > () = {"", std::move(yystack_[1].value.as < std::string > ()), std::move(yystack_[0].value.as < prs::verilog::ast::var_decl > ())}; }
#line 1212 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 12: // module_port_decl: "port_direction" "variable_attribute" var_decl
#line 112 "src/parser/verilog/verilog_parser.yy"
                                   { yylhs.value.as < prs::verilog::ast::module_port_decl > () = {std::move(yystack_[2].value.as < std::string > ()), std::move(yystack_[1].value.as < std::string > ()), std::move(yystack_[0].value.as < prs::verilog::ast::var_decl > ())}; }
#line 1218 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 13: // statement_list: %empty
#line 116 "src/parser/verilog/verilog_parser.yy"
                 {}
#line 1224 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 14: // statement_list: statement
#line 117 "src/parser/verilog/verilog_parser.yy"
                    { yylhs.value.as < prs::verilog::ast::statement_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::statement > ()); }
#line 1230 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 15: // statement_list: statement_list statement
#line 118 "src/parser/verilog/verilog_parser.yy"
                                   { yystack_[1].value.as < prs::verilog::ast::statement_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::statement > ()); yylhs.value.as < prs::verilog::ast::statement_list > () = std::move(yystack_[1].value.as < prs::verilog::ast::statement_list > ()); }
#line 1236 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 16: // statement: statement ";"
#line 122 "src/parser/verilog/verilog_parser.yy"
                        { yylhs.value.as < prs::verilog::ast::statement > () = std::move(yystack_[1].value.as < prs::verilog::ast::statement > ()); }
#line 1242 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 17: // statement: prim_gate_stmt ";"
#line 123 "src/parser/verilog/verilog_parser.yy"
                         { yylhs.value.as < prs::verilog::ast::statement > () = std::move(yystack_[1].value.as < prs::verilog::ast::prim_gate_stmt > ()); }
#line 1248 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 18: // statement: net_decl_stmt ";"
#line 124 "src/parser/verilog/verilog_parser.yy"
                        { yylhs.value.as < prs::verilog::ast::statement > () = std::move(yystack_[1].value.as < prs::verilog::ast::net_decl_stmt > ()); }
#line 1254 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 19: // statement: instance_stmt ";"
#line 125 "src/parser/verilog/verilog_parser.yy"
                        { yylhs.value.as < prs::verilog::ast::statement > () = std::move(yystack_[1].value.as < prs::verilog::ast::instance_stmt > ()); }
#line 1260 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 20: // statement: assignment_stmt ";"
#line 126 "src/parser/verilog/verilog_parser.yy"
                          { yylhs.value.as < prs::verilog::ast::statement > () = std::move(yystack_[1].value.as < prs::verilog::ast::assignment_stmt > ()); }
#line 1266 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 21: // net_decl_stmt: "variable_attribute" multi_var_decl
#line 130 "src/parser/verilog/verilog_parser.yy"
                                  { yylhs.value.as < prs::verilog::ast::net_decl_stmt > () = {"", std::move(yystack_[1].value.as < std::string > ()), std::move(yystack_[0].value.as < prs::verilog::ast::multi_var_decl > ())}; }
#line 1272 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 22: // net_decl_stmt: "port_direction" multi_var_decl
#line 131 "src/parser/verilog/verilog_parser.yy"
                             { yylhs.value.as < prs::verilog::ast::net_decl_stmt > () = {std::move(yystack_[1].value.as < std::string > ()), "", std::move(yystack_[0].value.as < prs::verilog::ast::multi_var_decl > ())}; }
#line 1278 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 23: // net_decl_stmt: "port_direction" "variable_attribute" multi_var_decl
#line 132 "src/parser/verilog/verilog_parser.yy"
                                         { yylhs.value.as < prs::verilog::ast::net_decl_stmt > () = {std::move(yystack_[2].value.as < std::string > ()), std::move(yystack_[1].value.as < std::string > ()), std::move(yystack_[0].value.as < prs::verilog::ast::multi_var_decl > ())}; }
#line 1284 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 24: // var_decl: "ident"
#line 136 "src/parser/verilog/verilog_parser.yy"
                { yylhs.value.as < prs::verilog::ast::var_decl > () = yystack_[0].value.as < std::string > ();  }
#line 1290 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 25: // var_decl: ranged_var_decl
#line 137 "src/parser/verilog/verilog_parser.yy"
                          { yylhs.value.as < prs::verilog::ast::var_decl > () = yystack_[0].value.as < prs::verilog::ast::ranged_var_decl > (); }
#line 1296 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 26: // ranged_var_decl: range "ident"
#line 141 "src/parser/verilog/verilog_parser.yy"
                      { yylhs.value.as < prs::verilog::ast::ranged_var_decl > () = {std::move(yystack_[1].value.as < prs::verilog::ast::range > ()), std::move(yystack_[0].value.as < std::string > ())}; }
#line 1302 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 27: // multi_var_decl: ident_list
#line 145 "src/parser/verilog/verilog_parser.yy"
                     { yylhs.value.as < prs::verilog::ast::multi_var_decl > ().var_names = yystack_[0].value.as < prs::verilog::ast::ident_list > (); }
#line 1308 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 28: // multi_var_decl: range ident_list
#line 146 "src/parser/verilog/verilog_parser.yy"
                           { yylhs.value.as < prs::verilog::ast::multi_var_decl > () = {std::move(yystack_[1].value.as < prs::verilog::ast::range > ()), std::move(yystack_[0].value.as < prs::verilog::ast::ident_list > ())}; }
#line 1314 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 29: // instance_stmt: "ident" param_config "ident" "(" expr_list ")"
#line 150 "src/parser/verilog/verilog_parser.yy"
                                                     { yylhs.value.as < prs::verilog::ast::instance_stmt > () = {std::move(yystack_[5].value.as < std::string > ()), std::move(yystack_[4].value.as < prs::verilog::ast::param_config > ()), std::move(yystack_[3].value.as < std::string > ()), std::move(yystack_[1].value.as < prs::verilog::ast::expr_list > ())}; }
#line 1320 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 30: // instance_stmt: "ident" param_config "ident" "(" conn_pair_list ")"
#line 151 "src/parser/verilog/verilog_parser.yy"
                                                          { yylhs.value.as < prs::verilog::ast::instance_stmt > () = {std::move(yystack_[5].value.as < std::string > ()), std::move(yystack_[4].value.as < prs::verilog::ast::param_config > ()), std::move(yystack_[3].value.as < std::string > ()), std::move(yystack_[1].value.as < prs::verilog::ast::conn_pair_list > ())}; }
#line 1326 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 31: // param_config: %empty
#line 156 "src/parser/verilog/verilog_parser.yy"
               {}
#line 1332 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 32: // param_config: "#" "(" expr_list ")"
#line 157 "src/parser/verilog/verilog_parser.yy"
                                  { yylhs.value.as < prs::verilog::ast::param_config > () = std::move(yystack_[1].value.as < prs::verilog::ast::expr_list > ()); }
#line 1338 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 33: // param_config: "#" "(" conn_pair_list ")"
#line 158 "src/parser/verilog/verilog_parser.yy"
                                       { yylhs.value.as < prs::verilog::ast::param_config > () = std::move(yystack_[1].value.as < prs::verilog::ast::conn_pair_list > ()); }
#line 1344 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 34: // constant_expr: INTEGER
#line 163 "src/parser/verilog/verilog_parser.yy"
                  { yylhs.value.as < prs::verilog::ast::constant_expr > () = std::to_string(yystack_[0].value.as < prs::verilog::ast::integer > ()); }
#line 1350 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 35: // constant_expr: "bin_constant"
#line 164 "src/parser/verilog/verilog_parser.yy"
                         { yylhs.value.as < prs::verilog::ast::constant_expr > () = std::move(yystack_[0].value.as < prs::verilog::ast::bin_constant > ()); }
#line 1356 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 36: // constant_expr: "dec_constant"
#line 165 "src/parser/verilog/verilog_parser.yy"
                         { yylhs.value.as < prs::verilog::ast::constant_expr > () = std::move(yystack_[0].value.as < prs::verilog::ast::dec_constant > ()); }
#line 1362 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 37: // constant_expr: "hex_constant"
#line 166 "src/parser/verilog/verilog_parser.yy"
                         { yylhs.value.as < prs::verilog::ast::constant_expr > () = std::move(yystack_[0].value.as < prs::verilog::ast::hex_constant > ()); }
#line 1368 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 38: // constant_expr: "str_constant"
#line 167 "src/parser/verilog/verilog_parser.yy"
                         { yylhs.value.as < prs::verilog::ast::constant_expr > () = std::move(yystack_[0].value.as < std::string > ()); }
#line 1374 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 39: // prim_gate_stmt: "primitive_gate" "ident" "(" expr "," expr_list ")"
#line 171 "src/parser/verilog/verilog_parser.yy"
                                                    { yylhs.value.as < prs::verilog::ast::prim_gate_stmt > () = {std::move(yystack_[3].value.as < prs::verilog::ast::expr > ()), std::move(yystack_[6].value.as < std::string > ()), std::move(yystack_[5].value.as < std::string > ()), std::move(yystack_[1].value.as < prs::verilog::ast::expr_list > ())}; }
#line 1380 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 40: // assignment_stmt: ASSIGNKW expr "=" expr
#line 175 "src/parser/verilog/verilog_parser.yy"
                                 { yylhs.value.as < prs::verilog::ast::assignment_stmt > () = {std::move(yystack_[2].value.as < prs::verilog::ast::expr > ()), std::move(yystack_[0].value.as < prs::verilog::ast::expr > ())}; }
#line 1386 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 41: // expr_list: expr
#line 179 "src/parser/verilog/verilog_parser.yy"
               { yylhs.value.as < prs::verilog::ast::expr_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::expr > ()); }
#line 1392 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 42: // expr_list: expr_list "," expr
#line 180 "src/parser/verilog/verilog_parser.yy"
                             { yystack_[2].value.as < prs::verilog::ast::expr_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::expr > ()); yylhs.value.as < prs::verilog::ast::expr_list > () = std::move(yystack_[2].value.as < prs::verilog::ast::expr_list > ()); }
#line 1398 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 43: // expr: "ident"
#line 184 "src/parser/verilog/verilog_parser.yy"
                { yylhs.value.as < prs::verilog::ast::expr > () = {yystack_[0].value.as < std::string > ()}; }
#line 1404 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 44: // expr: ranged_expr
#line 185 "src/parser/verilog/verilog_parser.yy"
                      { yylhs.value.as < prs::verilog::ast::expr > () = {yystack_[0].value.as < prs::verilog::ast::ranged_expr > ()}; }
#line 1410 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 45: // expr: indexed_expr
#line 186 "src/parser/verilog/verilog_parser.yy"
                       { yylhs.value.as < prs::verilog::ast::expr > () = {yystack_[0].value.as < prs::verilog::ast::indexed_expr > ()}; }
#line 1416 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 46: // expr: concat_expr
#line 187 "src/parser/verilog/verilog_parser.yy"
                      { yylhs.value.as < prs::verilog::ast::expr > () = {yystack_[0].value.as < prs::verilog::ast::concat_expr > ()}; }
#line 1422 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 47: // expr: constant_expr
#line 188 "src/parser/verilog/verilog_parser.yy"
                        { yylhs.value.as < prs::verilog::ast::expr > () = {yystack_[0].value.as < prs::verilog::ast::constant_expr > ()}; }
#line 1428 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 48: // ranged_expr: "ident" range
#line 191 "src/parser/verilog/verilog_parser.yy"
                          { yylhs.value.as < prs::verilog::ast::ranged_expr > () = {std::move(yystack_[0].value.as < prs::verilog::ast::range > ()), std::move(yystack_[1].value.as < std::string > ())}; }
#line 1434 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 49: // indexed_expr: "ident" "[" INTEGER "]"
#line 194 "src/parser/verilog/verilog_parser.yy"
                                     { 
		if (yystack_[1].value.as < prs::verilog::ast::integer > () < 0)
			throw vv::parser::syntax_error(yystack_[1].location, "cannot use negative index");
		yylhs.value.as < prs::verilog::ast::indexed_expr > () = {yystack_[1].value.as < prs::verilog::ast::integer > (), yystack_[3].value.as < std::string > ()};
		}
#line 1444 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 50: // concat_expr: "{" expr_list "}"
#line 202 "src/parser/verilog/verilog_parser.yy"
                             { yylhs.value.as < prs::verilog::ast::concat_expr > () = {yystack_[1].value.as < prs::verilog::ast::expr_list > ()}; }
#line 1450 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 51: // range: "[" INTEGER ":" INTEGER "]"
#line 205 "src/parser/verilog/verilog_parser.yy"
                                    { 
		if (yystack_[3].value.as < prs::verilog::ast::integer > () < 0 || yystack_[1].value.as < prs::verilog::ast::integer > () < 0) 
			throw vv::parser::syntax_error(yystack_[3].location, "negative range is invalid");
		yylhs.value.as < prs::verilog::ast::range > () = {std::move(yystack_[3].value.as < prs::verilog::ast::integer > ()), std::move(yystack_[1].value.as < prs::verilog::ast::integer > ())}; 
		}
#line 1460 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 52: // conn_pair: "." "ident" "(" expr ")"
#line 212 "src/parser/verilog/verilog_parser.yy"
                                   { yylhs.value.as < prs::verilog::ast::conn_pair > () = {std::move(yystack_[3].value.as < std::string > ()), std::move(yystack_[1].value.as < prs::verilog::ast::expr > ())}; }
#line 1466 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 53: // conn_pair_list: conn_pair
#line 216 "src/parser/verilog/verilog_parser.yy"
                    { yylhs.value.as < prs::verilog::ast::conn_pair_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::conn_pair > ()); }
#line 1472 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 54: // conn_pair_list: conn_pair_list "," conn_pair
#line 217 "src/parser/verilog/verilog_parser.yy"
                                       { yystack_[2].value.as < prs::verilog::ast::conn_pair_list > ().push_back(yystack_[0].value.as < prs::verilog::ast::conn_pair > ()); yylhs.value.as < prs::verilog::ast::conn_pair_list > () = std::move(yystack_[2].value.as < prs::verilog::ast::conn_pair_list > ()); }
#line 1478 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 55: // ident_list: "ident"
#line 221 "src/parser/verilog/verilog_parser.yy"
          { yylhs.value.as < prs::verilog::ast::ident_list > ().push_back(yystack_[0].value.as < std::string > ()); }
#line 1484 "src/parser/verilog/verilog_parser.tab.cc"
    break;

  case 56: // ident_list: ident_list "," "ident"
#line 222 "src/parser/verilog/verilog_parser.yy"
                           { yystack_[2].value.as < prs::verilog::ast::ident_list > ().push_back(yystack_[0].value.as < std::string > ()); yylhs.value.as < prs::verilog::ast::ident_list > () = std::move(yystack_[2].value.as < prs::verilog::ast::ident_list > ()); }
#line 1490 "src/parser/verilog/verilog_parser.tab.cc"
    break;


#line 1494 "src/parser/verilog/verilog_parser.tab.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -63;

  const signed char parser::yytable_ninf_ = -1;

  const signed char
  parser::yypact_[] =
  {
      -5,     1,     7,   -63,    42,    13,   -63,   -63,   -63,    26,
      29,    27,     9,     0,    51,    35,    43,    45,    46,    52,
       8,    26,    59,   -63,   -63,   -63,   -63,   -63,   -63,    10,
     -63,   -63,   -63,    79,    66,    81,    64,   -63,   -63,    73,
      77,     9,   -63,   -63,    35,   -63,   -63,   -63,   -63,   -63,
     -63,    24,    74,    36,   -63,   -63,   -63,    75,    -1,   -63,
      67,   -63,    26,    14,    84,    26,    82,    77,    78,   -63,
     -63,    24,   -63,     8,   -63,   -63,    26,     3,   -63,    80,
      68,   -63,    69,    14,    87,    83,   -63,   -63,   -63,   -63,
     -63,    88,   -63,   -63,    89,    70,    71,    26,    92,    26,
     -63,   -63,   -63,    72,   -63,    96,   -63,   -63
  };

  const signed char
  parser::yydefact_[] =
  {
       0,     0,     0,     2,    13,     5,     1,     3,     7,     0,
      31,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,    43,    34,    37,    35,    36,    38,    47,     0,
      44,    45,    46,     0,     0,     0,     0,    55,    21,     0,
      27,     0,    22,     4,    15,    16,    18,    19,    17,    20,
      24,     0,     0,     0,     8,    10,    25,     0,     0,    41,
       0,    48,     0,     0,     0,     0,     0,    28,     0,    23,
      11,     0,     6,     0,    26,    50,     0,     0,    40,     0,
       0,    53,     0,     0,     0,     0,    56,    12,     9,    42,
      49,     0,    32,    33,     0,     0,     0,     0,     0,     0,
      54,    29,    30,     0,    51,     0,    39,    52
  };

  const signed char
  parser::yypgoto_[] =
  {
     -63,   -63,   100,   -63,   -63,    30,   -63,    90,   -63,   -47,
     -63,    -8,   -63,   -63,   -63,   -63,   -63,   -62,    -9,   -63,
     -63,   -63,   -10,    12,    25,    76
  };

  const signed char
  parser::yydefgoto_[] =
  {
       0,     2,     3,     4,    53,    54,    14,    15,    16,    55,
      56,    38,    17,    34,    28,    18,    19,    58,    59,    30,
      31,    32,    57,    81,    82,    40
  };

  const signed char
  parser::yytable_[] =
  {
      29,    80,    39,    39,    70,    42,    36,     6,    75,    76,
      90,     1,    61,    62,    36,    36,    85,    20,    37,     5,
      41,    95,    21,     1,    87,    79,    50,    37,    51,    52,
      36,    39,    22,    69,    21,   103,    23,    24,    25,    26,
      27,    72,    50,    33,    22,    35,    73,    45,    23,    24,
      25,    26,    27,    78,     8,    46,    84,    47,    48,     9,
      10,    11,    12,    13,    49,    60,    43,    89,     9,    10,
      11,    12,    13,    92,    93,   101,   102,   106,    76,    94,
      76,    94,    76,    63,    64,    65,    66,    68,    83,    77,
     105,    37,    99,    74,    71,    85,    86,    97,    91,   104,
      79,   107,     7,    88,    44,    98,   100,     0,    96,     0,
       0,     0,     0,     0,     0,    67
  };

  const signed char
  parser::yycheck_[] =
  {
       9,    63,    12,    13,    51,    13,     6,     0,     9,    10,
       7,    16,    22,     3,     6,     6,    13,     4,    18,    18,
      20,    83,     8,    16,    71,    11,    18,    18,    20,    21,
       6,    41,    18,    41,     8,    97,    22,    23,    24,    25,
      26,     5,    18,    14,    18,    18,    10,    12,    22,    23,
      24,    25,    26,    62,    12,    12,    65,    12,    12,    17,
      18,    19,    20,    21,    12,     6,    15,    76,    17,    18,
      19,    20,    21,     5,     5,     5,     5,     5,    10,    10,
      10,    10,    10,     4,    18,     4,    22,    10,     4,    22,
      99,    18,     4,    18,    20,    13,    18,    10,    18,     7,
      11,     5,     2,    73,    14,    22,    94,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    39
  };

  const signed char
  parser::yystos_[] =
  {
       0,    16,    28,    29,    30,    18,     0,    29,    12,    17,
      18,    19,    20,    21,    33,    34,    35,    39,    42,    43,
       4,     8,    18,    22,    23,    24,    25,    26,    41,    45,
      46,    47,    48,    14,    40,    18,     6,    18,    38,    49,
      52,    20,    38,    15,    34,    12,    12,    12,    12,    12,
      18,    20,    21,    31,    32,    36,    37,    49,    44,    45,
       6,    49,     3,     4,    18,     4,    22,    52,    10,    38,
      36,    20,     5,    10,    18,     9,    10,    22,    45,    11,
      44,    50,    51,     4,    45,    13,    18,    36,    32,    45,
       7,    18,     5,     5,    10,    44,    51,    10,    22,     4,
      50,     5,     5,    44,     7,    45,     5,     5
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    27,    28,    28,    29,    30,    30,    30,    31,    31,
      32,    32,    32,    33,    33,    33,    34,    34,    34,    34,
      34,    35,    35,    35,    36,    36,    37,    38,    38,    39,
      39,    40,    40,    40,    41,    41,    41,    41,    41,    42,
      43,    44,    44,    45,    45,    45,    45,    45,    46,    47,
      48,    49,    50,    51,    51,    52,    52
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     1,     2,     3,     2,     5,     2,     1,     3,
       1,     2,     3,     0,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     1,     1,     2,     1,     2,     6,
       6,     0,     4,     4,     1,     1,     1,     1,     1,     7,
       4,     1,     3,     1,     1,     1,     1,     1,     2,     4,
       3,     5,     5,     1,     3,     1,     3
  };


#if VVDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "\"=\"", "\"(\"",
  "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"", "\",\"", "\".\"", "\";\"",
  "\":\"", "\"#\"", "ENDMODULEKW", "MODULEKW", "ASSIGNKW", "\"ident\"",
  "\"primitive_gate\"", "\"variable_attribute\"", "\"port_direction\"",
  "INTEGER", "\"hex_constant\"", "\"bin_constant\"", "\"dec_constant\"",
  "\"str_constant\"", "$accept", "verilog", "module", "module_header",
  "module_port_decl_list", "module_port_decl", "statement_list",
  "statement", "net_decl_stmt", "var_decl", "ranged_var_decl",
  "multi_var_decl", "instance_stmt", "param_config", "constant_expr",
  "prim_gate_stmt", "assignment_stmt", "expr_list", "expr", "ranged_expr",
  "indexed_expr", "concat_expr", "range", "conn_pair", "conn_pair_list",
  "ident_list", YY_NULLPTR
  };
#endif


#if VVDEBUG
  const unsigned char
  parser::yyrline_[] =
  {
       0,    91,    91,    92,    95,    99,   100,   101,   105,   106,
     110,   111,   112,   116,   117,   118,   122,   123,   124,   125,
     126,   130,   131,   132,   136,   137,   141,   145,   146,   150,
     151,   156,   157,   158,   163,   164,   165,   166,   167,   171,
     175,   179,   180,   184,   185,   186,   187,   188,   191,   194,
     202,   205,   212,   216,   217,   221,   222
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // VVDEBUG


} // vv
#line 2034 "src/parser/verilog/verilog_parser.tab.cc"

#line 225 "src/parser/verilog/verilog_parser.yy"


void 
vv::parser::error (const location_type& l, const std::string& m)
{
  std::cerr << l << ": " << m << '\n';
}

