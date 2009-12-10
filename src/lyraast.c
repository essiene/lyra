#include <stdlib.h>
#include <lyra.h>
#include <ast.h>

int main(int argc, char** argv)
{
    CHECK_ARGCOUNT(argc, argv);
    OPEN_INFILE(argv, infilename);

    if(yyparse() != 0) {
        return -1;
    }

    ast_printf(rootAst, 0);
}