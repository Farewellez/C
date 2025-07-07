#include <stdio.h>
#include <string.h>
#include "utils.h"

void isFlag(char answer1[], char answer2[])
{
    // the answer's key
    char key1[] = "THE";
    char key2[] = "LIGHT";

    // validating the answer
    if (strcmp(answer1, key1) == 0 && strcmp(answer2, key2) == 0)
    {
        clearTerminal();
        printf("\nAHA{W000ooow_Yo0uu_a444areee_so00ooooOO_C00ooolll}");
    }
    else
    {
        clearTerminal();
        printf("\nSorry...Maybe another time but hey nice try!");
    }
}

int main()
{
    clearTerminal();
    // learning about function in C with implementation in CTF game
    // variable
    char first_input[10] = "";
    char second_input[10] = "";
    
    printf("Hello there...^_^\nIts me again...AHA!\n");
    printf("Now i will bring you to another game. Try fill in the blanks of this story. Maybe you will get the flag if you can hahaha $_$ ");
    printf("\n\nOBSCURA\n--------------------------\n");
    printf("Di tengah reruntuhan kota tua bernama Obscura, seorang petualang bernama Kael melangkah perlahan menyusuri lorong gelap yang dipenuhi ukiran aneh di dinding. Batu besar di tengah aula memancarkan cahaya redup, memperlihatkan tiga simbol berkilau: 0x54, 0x48, 0x45. Di samping simbol itu tertulis kalimat dalam bahasa kuno: \"Ucapan ini membuka gerbang menuju jawaban yang hilang.\" Kael menyadari bahwa simbol itu bukan sekadar ukiran, melainkan kode pesan dari peradaban yang dulu menguasai seni komunikasi rahasia.\n\n");
    printf("Dalam perjalanannya lebih dalam ke dalam kuil, Kael bertemu dengan roh penjaga yang berkata, \"Untuk melanjutkan perjalananmu, sebutkan kata yang mewakili tiga simbol itu.\" Kael menatap ulang dinding tadi, teringat sesuatu. Ia meraba-raba kata yang paling masuk akal dalam konteks kalimat: \"Ucapan ini...\" dan mengucapkan pelan, \"___\". Tiba-tiba lantai bergetar, dan sebuah lorong rahasia terbuka, mengarah ke tempat yang lebih dalam.\n\n");
    printf("Di ruang berikutnya, Kael menemukan papan batu dengan cerita setengah hilang: \"...dan ketika sang penjaga mendengar kata '_____', maka terbukalah gerbang terakhir menuju cahaya.\" Namun kali ini, simbolnya adalah 0x4C, 0x49, 0x47, 0x48, 0x54. Petualang itu harus mengartikan pesan terakhir—satu kata penting untuk menyelesaikan teka-teki dan membuka jalan menuju FLAG.");
    printf("--------------------------");   
    // ambil input pertama user
    printf("\n\nInput kata rumpang pertama: "); 
    fgets(first_input, sizeof(first_input), stdin);
    first_input[strcspn(first_input, "\n")] = '\0';

    // ambil input kedua user
    printf("\nInput kata rumpang kedua: ");
    fgets(second_input, sizeof(second_input), stdin);
    second_input[strcspn(second_input, "\n")] = '\0';

    // call the function
    isFlag(first_input, second_input);

    return 0;
}