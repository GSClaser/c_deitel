#include <stdio.h>

int main()
{
    FILE* fp=fopen("datasize.dat","w");
    fprintf(fp,"Data type\t\tsize\n");
    fprintf(fp,"char\t\t\t%d\n",sizeof(char));
    fprintf(fp,"unsigned char\t\t%d\n",sizeof(unsigned char));
    fprintf(fp,"short int\t\t%d\n",sizeof(short int));
    fprintf(fp,"unsigned short int\t%d\n",sizeof(unsigned short int));
    fprintf(fp,"int\t\t\t%d\n",sizeof(int));
    fprintf(fp,"unsigned int\t\t%d\n",sizeof(unsigned int));
    fprintf(fp,"long int\t\t%d\n",sizeof(long int));
    fprintf(fp,"unsigned long int\t%d\n",sizeof(unsigned long int));
    fprintf(fp,"float\t\t\t%d\n",sizeof(float));
    fprintf(fp,"double\t\t\t%d\n",sizeof(double));
    fprintf(fp,"long double\t\t%d\n",sizeof(long double));
    fclose(fp);
    return 0;
}