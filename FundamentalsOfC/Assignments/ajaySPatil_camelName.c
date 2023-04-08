#include <stdio.h>

void input(char *name) {
    printf("Enter the name of the camel: ");
    scanf("%s", name);
}

int has_nice_name(char *name) {
    char vowels[] = "aeiouAEIOU";
    char consonants[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int vcount = 0, scount = 0;
    int i = 0;
    while (name[i]) {
        int j = 0;
        while (vowels[j]) {
            if (name[i] == vowels[j]) {
                vcount++;
                break;
            }
            j++;
        }
        j = 0;
        while (consonants[j]) {
            if (name[i] == consonants[j]) {
                scount++;
                break;
            }
            j++;
        }
        i++;
    }
    return vcount >= 2 && scount >= 2;
}

void output(int res) {
    if (res) {
        printf("The camel has a nice name\n");
    } else {
        printf("The camel does not have a nice name\n");
    }
}

int main() {
    char name[100];
    input(name);
    int res = has_nice_name(name);
    output(res);
    return 0;
}
