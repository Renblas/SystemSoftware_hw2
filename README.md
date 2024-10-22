# SystemSoftware_hw2

	/* DEFINITIONS */
	
	/*ident				({letter} {letter_or_digit})
	letter				[a-zA-Z]
	number				(digit {digit})
	digit				[0-9]
	letter_or_digit		({letter} | {letter})
	plus				[+]
	minus				[-]
	mult				[*]
	div					[/]
	punctuation			[.;=,] | (:=) | ( | )
	reserved-word		const | var | proc | call | begin | end | if | then | else | while | do | read | print | divisible | by
	rel-ops				== | != | < | <= | > | >=
	ignored				{blank} | {tab} | {vt} | {formfeed} | {eol} | {comment}
	blank				\32
	tab					\9
	vt					\11
	formfeed			\12
	newline				\10
	cr					\13
	eol					{newline} | {cr} {newline}
	comment				{percent-siggn} {non-nl}+ {newline}
	percent-sign		%
	non-nl				[^\n]*/


/*program				{block} .
block          		begin {const-decls} {var-decls} {proc-decls} {stmts} end
const-decls    		{const-decl}+
const-decl      	const {const-def-list} ;
const-def-list    	{const-def} | {const-defs} , {const-def}
const-def       	{ident} = {number}
var-decls       	{var-decl}+
var-decl            	var {ident-list}
ident-list		{ident} | {idents} , {ident}
proc-decls		{proc-decl}+
proc-decl		proc {ident} {block} ;
stmts			{empty} | {stmt-list}
empty			
stmt-list		{stmt} | {stmt-list} ; {stmt}
stmt			{assign-stmt} | {call-stmt} | {if-stmt} | {while-stmt} | {read-stmt} | {print-stmt} | {block-stmt}
assign-stmt		{ident} = {expr}
call-stmt		call {ident}
if-stmt			if {condition} then {stmts} else {stmts} end | if {condition} then {stmts} end
while-stmt		while {condition} do {stmts} end
read-stmt		read {ident}
print-stmt		print{expr}
block-stmt		{block}
condition		{db-condition} | {rel-op-condition}
db-condition		divisible {expr} by {expr}
rel-op-condition	{expr} {rel-op} {expr}
rel-op			== | != | < | <= | > | >=
expr			{term} | {expr} {plus} {term} | {expr} {minus} {term}
term			{factor} | {term} {mult} {factor} | {term} {div} {factor}
factor			{ident} | {number} | {sign} {factor} | ( {exper} )
sign			{minus} | {plus} */

WHITESPACE          [\32];

{WHITESPACE}        {;}