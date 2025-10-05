# ft_printf

Bu proje, 42 Cursus müfredatının bir parçası olarak geliştirilen **ft_printf** kütüphanesidir. Amacı, standart C kütüphanesindeki `printf` fonksiyonunun temel işlevlerini kendi başımıza yeniden yazmaktır.

## Özellikler

- Karakter ve string çıktısı
- Tamsayı ve unsigned tamsayı çıktısı
- Hexadecimal ve pointer çıktısı
- Belirli formatlama seçenekleri
- Dosya descriptor ile yazdırma (fd kullanımı)

## Kullanım

```c
#include "ft_printf.h"

int main(void)
{
    int len = ft_printf("Hello %s, number: %d\n", "World", 42);
    return 0;
}
