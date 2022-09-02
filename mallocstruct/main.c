#include <stdio.h>
#include <stdlib.h>


struct ogrenci
{
    int no;
    char isim[15];

};

int main(void)
{

    int n, i;
    struct ogrenci *optr;

    printf("Kac ogrenci gireceksiniz?: ");
    scanf("%d", &n);

    optr = (struct ogrenci *)malloc(n*sizeof(struct ogrenci));

    for(i=0;i<n;++i)
    {
        printf("%d. ogrencinin bilgilerini giriniz: \n", (i+1));
        printf("No: ");
        scanf("%d", &(optr+i)->no);
        printf("Ad: ");
        scanf("%s", (optr+i)->isim);
    }

    for(i=0;i<n;++i)
    {
        printf("*%d. OGRENCI*\n", (i+1));
        printf("No: %d\n", (optr+i)->no);
        printf("Ad: %s\n", (optr+i)->isim);
    }

    free(optr);

    return 0;
}


