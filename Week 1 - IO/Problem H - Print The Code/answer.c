#include <stdio.h>

int main() {
    char n[101];
    scanf("%[^\n]", n); getchar();
    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%s\\n\",\"%s\");\n", "%s", n);
    printf("    return 0;\n");
    printf("}\n");
    return 0;
}