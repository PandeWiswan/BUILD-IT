#include <stdio.h>
#include <string.h>

void bandingkan_string(const char *s1, const char *s2) {
    // Periksa panjang string
    if (strlen(s1) != strlen(s2)) {
        printf("BERBEDA\n");
        return;
    }

    // Periksa identik
    if (strcmp(s1, s2) == 0) {
        printf("IDENTIK\n");
    } else {
        printf("MIRIP\n");
    }
}

int main() {
    char s1[101], s2[101];
    
    // Membaca input
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    
    // Menghilangkan newline yang mungkin ada di akhir input
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    
    // Membandingkan string
    bandingkan_string(s1, s2);

    return 0;
}
