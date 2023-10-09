#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <unistd.h>

int main()
{
    FILE *KMP;
    FILE *TMD;
    FILE *Resume;
     int TMDVersion0 = 0;
     int TMDVersion1 = 0;
     int TMDVersion2 = 0;

     int TMDVersion10;
     int TMDVersion11 = 0;
     int TMDVersion12 = 0;

    int TMDName1 = 0;
    int TMDName2 = 0;
    int TMDName3 = 0;
    int TMDName4 = 0;
    int TMDName = 0;
    char TMDNameChar[9];
    int TMDAmounts = 0;

    int ContentAmount0 = 0;
    int ContentAmount00 = 0;
    int ContentAmount000 = 0;
    int ContentAmount1 = 0;
    int ContentAmount2 = 0;
    int ContentAmount3 = 0;
    int ContentAmount4 = 0;
    unsigned int loop1 = 0;
    unsigned int loop2 = 0;
    unsigned int loop3 = 0;
    unsigned int loop4 = 0;
    char * charfilename;
    char * charfilename69;
    char * charfilename11;
    char * charfilenametmd11;
    char * charfilename133;
    char charfilename15[9];
    char charfilenametype69[9];
    char * charfilename16;
    char * charfilename20;
    char * new_string;
    char * charfilename17;
    char * charfilename18;
    char * charfilenameType1;
    char * charfilenameType2;
    char * charfilenameType3;
    char * charfilenameType4;
    char * charfilenameType5;
    char * charfilenameType6;
    char * charfilenameType7;
    char * charfilenameType8;
    char * charfilenameType9;
    char * charfilenameType020;
    char * charfilenameTypeh34;
    char * charfilenameTypeh35;
    char * charfilenameTypeh3F;
    char * charfilenameTypeh315;
    char * charfilenameTypeh317;
    char * charfilenameTypeh500;
    char * charfilenameTypeh502;
    char * charfilenameTypeh50C;
    char * charfilenameTypeh50E;
    char * charfilenameTypeh510;
    char * charfilenameTypeh51B;
    char * charfilenameTypeh530;
    char * charfilenameTypeh410;
    char * charfilenameTypeh41B;
    char * charfilenameTypeh430;
    char * charfilenameTypeh49B;
    char * charfilenameTypeh4DB;
    char * charfilenameTypeh4130;
    char * charfilenameTypeh4138;
    char * charfilenameTypeh485;
    char * charfilenameTypeh48F;
    char * charfilenameType11;
    char * charfilenameType12;
    char * charfilenameType13;
    char * charfilenameType14;
    char * charfilenameType15;
    char * charfilenameType16;
    char * charfilenameType17;
    char * charfilenameType18;
    char * charfilenameType19;
    char * charfilenameType20;
    char * charfilenameType34;
    char * charfilenameType35;
    char * charfilenameType3F;
    char * charfilenameType315;
    char * charfilenameType317;
    char * charfilenameType500;
    char * charfilenameType502;
    char * charfilenameType50C;
    char * charfilenameType50E;
    char * charfilenameType510;
    char * charfilenameType51B;
    char * charfilenameType530;
    char * charfilenameType410;
    char * charfilenameType41B;
    char * charfilenameType430;
    char * charfilenameType49B;
    char * charfilenameType4DB;
    char * charfilenameType4130;
    char * charfilenameType4138;
    char * charfilenameType485;
    char * charfilenameType48F;

    charfilename = "./wii/";
    charfilename69 = "ccs/download/";

    charfilename133 = "/tmd";
    charfilename16 = " -P ./wii/ccs/download/";
    charfilename20 = ".h3";
    charfilename17 = "/FFFFFFFD"; // cetk
    charfilename18 = "/";
    charfilenameType11 = "00000001"; // Wii   Essential system titles
    charfilenameType12 = "00010000"; // Wii   Disc-based games
    charfilenameType13 = "00010001"; // Wii   Downloaded channels
    charfilenameType14 = "00010002"; // Wii   System channels
    charfilenameType15 = "00010004"; // Wii   Game channels and games that use them
    charfilenameType16 = "00010005"; // Wii   Downloaded Game Content
    charfilenameType17 = "00010008"; // Wii   Hidden channels
    charfilenameType18 = "00000007"; // vWii  Essential system titles
    charfilenameType19 = "00070002"; // vWii  System channels
    charfilenameType20 = "00070008"; // vWii  Hidden channels
    charfilenameType34 = "00030004"; // DSi   Downloaded Games and Applications
    charfilenameType35 = "00030005"; // DSi   System Applications
    charfilenameType3F = "0003000F"; // DSi   System Data Archives
    charfilenameType315 = "00030015"; // DSi  Essential channels (System Settings, DSi Shop, 3DS Transfer Tool)
    charfilenameType317 = "00030017"; // DSi  System Menu
    charfilenameType500 = "00050030"; // WiiU System Applet Titles
    charfilenameType502 = "00050002"; // WiiU Kiosk Interactive Demo and eShop Demo
    charfilenameType50C = "0005000C"; // WiiU eShop title DLC
    charfilenameType50E = "0005000E"; // WiiU eShop title updates
    charfilenameType510 = "00050010"; // WiiU System Application Titles
    charfilenameType51B = "0005001B"; // WiiU System Data Archive Titles
    charfilenameType530 = "00050000"; // WiiU eShop and disc titles
    charfilenameType410 = "00040010"; // 3DS  System Applications
    charfilenameType41B = "0004001B"; // 3DS  System Data Archives
    charfilenameType430 = "00040030"; // 3DS  System Applets
    charfilenameType49B = "0004009B"; // 3DS  Shared Data Archives
    charfilenameType4DB = "000400DB"; // 3DS  System Data Archives
    charfilenameType4130 = "00040130"; // 3DS System Modules
    charfilenameType4138 = "00040138"; // 3DS System Firmware
    charfilenameType485 = "00048005"; // vDSi System Applications
    charfilenameType48F = "0004800F"; // vDSi System Data Archives
    charfilenameType1 = "00000001.hex"; // Wii     Essential system titles
    charfilenameType2 = "00010000.hex"; // Wii     Disc-based games
    charfilenameType3 = "00010001.hex"; // Wii     Downloaded channels
    charfilenameType4 = "00010002.hex"; // Wii     System channels
    charfilenameType5 = "00010004.hex"; // Wii     Game channels and games that use them
    charfilenameType6 = "00010005.hex"; // Wii     Downloaded Game Content
    charfilenameType7 = "00010008.hex"; // Wii     Hidden channels
    charfilenameType8 = "00000007.hex"; // vWii    Essential system titles
    charfilenameType9 = "00070002.hex"; // vWii    System channels
    charfilenameType020 = "00070008.hex"; // vWii  Hidden channels
    charfilenameTypeh34 = "00030004.hex"; // DSi   Downloaded Games and Applications
    charfilenameTypeh35 = "00030005.hex"; // DSi   System Applications
    charfilenameTypeh3F = "0003000F.hex"; // DSi   System Data Archives
    charfilenameTypeh315 = "00030015.hex"; // DSi  Essential channels (System Settings, DSi Shop, 3DS Transfer Tool)
    charfilenameTypeh317 = "00030017.hex"; // DSi  System Menu
    charfilenameTypeh500 = "00050030.hex"; // WiiU System Applet Titles
    charfilenameTypeh502 = "00050002.hex"; // WiiU Kiosk Interactive Demo and eShop Demo
    charfilenameTypeh50C = "0005000C.hex"; // WiiU eShop title DLC
    charfilenameTypeh50E = "0005000E.hex"; // WiiU eShop title updates
    charfilenameTypeh510 = "00050010.hex"; // WiiU System Application Titles
    charfilenameTypeh51B = "0005001B.hex"; // WiiU System Data Archive Titles
    charfilenameTypeh530 = "00050000.hex"; // WiiU eShop and disc titles
    charfilenameTypeh410 = "00040010.hex"; // 3DS  System Applications
    charfilenameTypeh41B = "0004001B.hex"; // 3DS  System Data Archives
    charfilenameTypeh430 = "00040030.hex"; // 3DS  System Applets
    charfilenameTypeh49B = "0004009B.hex"; // 3DS  Shared Data Archives
    charfilenameTypeh4DB = "000400DB.hex"; // 3DS  System Data Archives
    charfilenameTypeh4130 = "00040130.hex"; // 3DS System Modules
    charfilenameTypeh4138 = "00040138.hex"; // 3DS System Firmware
    charfilenameTypeh485 = "00048005.hex"; // vDSi System Applications
    charfilenameTypeh48F = "0004800F.hex"; // vDSi System Data Archives

    Resume=fopen("resume.hex","rb");
    fread(&loop1,1,sizeof(int),Resume);
    fread(&loop2,1,sizeof(int),Resume);
    fclose (Resume);

    while (loop1 < 31)
    {
        switch (loop1)
            {
            case 0:
            TMD=fopen(charfilenameType1,"rb");
                break;
            case 1:
            TMD=fopen(charfilenameType2,"rb");
                break;
            case 2:
            TMD=fopen(charfilenameType3,"rb");
                break;
            case 3:
            TMD=fopen(charfilenameType4,"rb");
                break;
            case 4:
            TMD=fopen(charfilenameType5,"rb");
                break;
            case 5:
            TMD=fopen(charfilenameType6,"rb");
                break;
            case 6:
            TMD=fopen(charfilenameType7,"rb");
                break;
            case 7:
            TMD=fopen(charfilenameType8,"rb");
                break;
            case 8:
            TMD=fopen(charfilenameType9,"rb");
                break;
            case 9:
            TMD=fopen(charfilenameType020,"rb");
                break;
            case 10:
            TMD=fopen(charfilenameTypeh34,"rb");
                break;
            case 11:
            TMD=fopen(charfilenameTypeh35,"rb");
                break;
            case 12:
            TMD=fopen(charfilenameTypeh3F,"rb");
                break;
            case 13:
            TMD=fopen(charfilenameTypeh315,"rb");
                break;
            case 14:
            TMD=fopen(charfilenameTypeh317,"rb");
                break;
            case 15:
            TMD=fopen(charfilenameTypeh500,"rb");
                break;
            case 16:
            TMD=fopen(charfilenameTypeh502,"rb");
                break;
            case 17:
            TMD=fopen(charfilenameTypeh50C,"rb");
                break;
            case 18:
            TMD=fopen(charfilenameTypeh50E,"rb");
                break;
            case 19:
            TMD=fopen(charfilenameTypeh510,"rb");
                break;
            case 20:
            TMD=fopen(charfilenameTypeh51B,"rb");
                break;
            case 21:
            TMD=fopen(charfilenameTypeh530,"rb");
                break;
            case 22:
            TMD=fopen(charfilenameTypeh410,"rb");
                break;
            case 23:
            TMD=fopen(charfilenameTypeh41B,"rb");
                break;
            case 24:
            TMD=fopen(charfilenameTypeh430,"rb");
                break;
            case 25:
            TMD=fopen(charfilenameTypeh49B,"rb");
                break;
            case 26:
            TMD=fopen(charfilenameTypeh4DB,"rb");
                break;
            case 27:
            TMD=fopen(charfilenameTypeh4130,"rb");
                break;
            case 28:
            TMD=fopen(charfilenameTypeh4138,"rb");
                break;
            case 29:
            TMD=fopen(charfilenameTypeh485,"rb");
                break;
            case 30:
            TMD=fopen(charfilenameTypeh48F,"rb");
                break;
            default:
                return -1;
            }

        switch (loop1)
            {
            case 0:
                sprintf(charfilenametype69,"%s",charfilenameType11);
                break;
            case 1:
                sprintf(charfilenametype69,"%s",charfilenameType12);
                break;
            case 2:
                sprintf(charfilenametype69,"%s",charfilenameType13);
                break;
            case 3:
                sprintf(charfilenametype69,"%s",charfilenameType14);
                break;
            case 4:
                sprintf(charfilenametype69,"%s",charfilenameType15);
                break;
            case 5:
                sprintf(charfilenametype69,"%s",charfilenameType16);
                break;
            case 6:
                sprintf(charfilenametype69,"%s",charfilenameType17);
                break;
            case 7:
                sprintf(charfilenametype69,"%s",charfilenameType18);
                break;
            case 8:
                sprintf(charfilenametype69,"%s",charfilenameType19);
                break;
            case 9:
                sprintf(charfilenametype69,"%s",charfilenameType20);
                break;
            case 10:
                sprintf(charfilenametype69,"%s",charfilenameType34);
                break;
            case 11:
                sprintf(charfilenametype69,"%s",charfilenameType35);
                break;
            case 12:
                sprintf(charfilenametype69,"%s",charfilenameType3F);
                break;
            case 13:
                sprintf(charfilenametype69,"%s",charfilenameType315);
                break;
            case 14:
                sprintf(charfilenametype69,"%s",charfilenameType317);
                break;
            case 15:
                sprintf(charfilenametype69,"%s",charfilenameType500);
                break;
            case 16:
                sprintf(charfilenametype69,"%s",charfilenameType502);
                break;
            case 17:
                sprintf(charfilenametype69,"%s",charfilenameType50C);
                break;
            case 18:
                sprintf(charfilenametype69,"%s",charfilenameType50E);
                break;
            case 19:
                sprintf(charfilenametype69,"%s",charfilenameType510);
                break;
            case 20:
                sprintf(charfilenametype69,"%s",charfilenameType51B);
                break;
            case 21:
                sprintf(charfilenametype69,"%s",charfilenameType530);
                break;
            case 22:
                sprintf(charfilenametype69,"%s",charfilenameType410);
                break;
            case 23:
                sprintf(charfilenametype69,"%s",charfilenameType41B);
                break;
            case 24:
                sprintf(charfilenametype69,"%s",charfilenameType430);
                break;
            case 25:
                sprintf(charfilenametype69,"%s",charfilenameType49B);
                break;
            case 26:
                sprintf(charfilenametype69,"%s",charfilenameType4DB);
                break;
            case 27:
                sprintf(charfilenametype69,"%s",charfilenameType4130);
                break;
            case 28:
                sprintf(charfilenametype69,"%s",charfilenameType4138);
                break;
            case 29:
                sprintf(charfilenametype69,"%s",charfilenameType485);
                break;
            case 30:
                sprintf(charfilenametype69,"%s",charfilenameType48F);
                break;
            default:
                return -1;
            }

            if (loop1 < 22)
            {
                charfilename11 = "wget.exe -c -t 0 http://ccs.cdn.wup.shop.nintendo.net/ccs/download/";
                charfilenametmd11 = "wget.exe -o http://ccs.cdn.wup.shop.nintendo.net/ccs/download/";
            }
            if (loop1 > 21)
            {
                charfilename11 = "wget.exe -c -t 0 http://ccs.cdn.c.shop.nintendowifi.net/ccs/download/";
                charfilenametmd11 = "wget.exe -o http://ccs.cdn.c.shop.nintendowifi.net/ccs/download/";
            }

        fseek(TMD,0x0,SEEK_END);
        TMDAmounts = ftell(TMD)/4;

        while (loop2 < TMDAmounts)
        {
            fseek(TMD,4*loop2,SEEK_SET);
            fread(&TMDName1,1,1,TMD);
            fread(&TMDName2,1,1,TMD);
            fread(&TMDName3,1,1,TMD);
            fread(&TMDName4,1,1,TMD);
            TMDName = TMDName1 * 16777216 + TMDName2 * 65536 + TMDName3 * 256 + TMDName4;
            sprintf(TMDNameChar,"%08X",TMDName);

            if((new_string = malloc(strlen(charfilenameType11)+strlen(TMDNameChar)+1)) != NULL)
            {
                new_string[0] = '\0';   // ensures the memory is an empty string
                strcat(new_string,charfilenametype69);
                strcat(new_string,TMDNameChar);
            }

            // TMD

            if((new_string = malloc(strlen(charfilenametmd11)+strlen(charfilenameType11)+strlen(TMDNameChar)+strlen(charfilename133)+strlen(charfilename16)+strlen(charfilenameType11)+strlen(TMDNameChar)+1)) != NULL)
            {
                new_string[0] = '\0';   // ensures the memory is an empty string
                strcat(new_string,charfilenametmd11); // "curl -f http://ccs.cdn.shop.wii.com/ccs/download/"
                strcat(new_string,charfilenametype69);
                strcat(new_string,TMDNameChar); // ID
                strcat(new_string,charfilename133); // "/tmd"
                strcat(new_string,charfilename16); // "-P "
                strcat(new_string,charfilenametype69);
                strcat(new_string,TMDNameChar); // ID
            }

            system(new_string);

            // Read TMD Version and Content Amount

            if((new_string = malloc(strlen(charfilename)+strlen(charfilenameType11)+strlen(charfilename69)+strlen(TMDNameChar)+strlen(charfilename133)+1)) != NULL)
                {
                    new_string[0] = '\0';   // ensures the memory is an empty string
                    strcat(new_string,charfilename);
                    strcat(new_string,charfilename69);
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar);
                    strcat(new_string,charfilename133);
                }

            KMP=fopen(new_string,"rb");
            fseek(KMP,0x1DC,SEEK_SET);
            fread(&TMDVersion1,1,1,KMP);
            fread(&TMDVersion2,1,1,KMP);
            TMDVersion0 = TMDVersion1 * 256 + TMDVersion2;

            fseek(KMP,0x1DE,SEEK_SET);
            fread(&ContentAmount1,1,1,KMP);
            fread(&ContentAmount2,1,1,KMP);
            ContentAmount0 = ContentAmount1 * 256 + ContentAmount2;

            loop3 = 0;
            ContentAmount00 = 0;

            while (ContentAmount0 > loop3)
            {
                fseek(KMP,0x1E4+loop3*36,SEEK_SET);
                fread(&ContentAmount1,1,1,KMP);
                fread(&ContentAmount2,1,1,KMP);
                fread(&ContentAmount3,1,1,KMP);
                fread(&ContentAmount4,1,1,KMP);
                ContentAmount000 = ContentAmount1 * 16777216 + ContentAmount2 * 65536 + ContentAmount3 * 256 + ContentAmount4;

                if (ContentAmount00 < ContentAmount000)
                {
                    ContentAmount00 = ContentAmount000;
                }
                loop3++;
            }

            if (loop1 > 14)
            {
                ContentAmount00 = 0;
                loop3 = 0;

                while (ContentAmount0 > loop3)
                {
                    fseek(KMP,0xB04+loop3*48,SEEK_SET);
                    fread(&ContentAmount1,1,1,KMP);
                    fread(&ContentAmount2,1,1,KMP);
                    fread(&ContentAmount3,1,1,KMP);
                    fread(&ContentAmount4,1,1,KMP);
                    ContentAmount000 = ContentAmount1 * 16777216 + ContentAmount2 * 65536 + ContentAmount3 * 256 + ContentAmount4;

                    if (ContentAmount00 < ContentAmount000)
                    {
                        ContentAmount00 = ContentAmount000;
                    }
                    loop3++;
                }
            }
            fclose (KMP);

            // CETK

            if((new_string = malloc(strlen(charfilename11)+strlen(charfilenameType11)+strlen(TMDNameChar)+strlen(charfilename17)+strlen(charfilename16)+strlen(charfilenameType11)+strlen(TMDNameChar)+1)) != NULL)
            {
                new_string[0] = '\0';   // ensures the memory is an empty string
                strcat(new_string,charfilename11); // "curl -f http://ccs.cdn.shop.wii.com/ccs/download/"
                strcat(new_string,charfilenametype69);
                strcat(new_string,TMDNameChar); // ID
                strcat(new_string,charfilename17); // "/cetk"
                strcat(new_string,charfilename16); // " --create-dirs --output "
                strcat(new_string,charfilenametype69);
                strcat(new_string,TMDNameChar); // ID
            }

            system(new_string);

            // All TMD Download

            loop3 = 0;

            while (TMDVersion0 >= loop3)
            {
                sprintf(charfilename15,"%08X",0xFFFEFFFF-loop3);
                if((new_string = malloc(strlen(charfilename11)+strlen(charfilenameType11)+strlen(TMDNameChar)+strlen(charfilename18)+strlen(charfilename15)+strlen(charfilename16)+strlen(charfilenameType11)+strlen(TMDNameChar)+1)) != NULL)
                {

                    new_string[0] = '\0';   // ensures the memory is an empty string
                    strcat(new_string,charfilename11); // "curl -f http://ccs.cdn.shop.wii.com/ccs/download/"
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                    strcat(new_string,charfilename18); // "/"
                    strcat(new_string,charfilename15); // loop3
                    strcat(new_string,charfilename16); // " --create-dirs --output "
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                    loop3++;
                }
                system(new_string);

            if((new_string = malloc(strlen(charfilename)+strlen(charfilenameType11)+strlen(charfilename69)+strlen(TMDNameChar)+strlen(charfilename18)+strlen(charfilename17)+1)) != NULL)
                {
                    new_string[0] = '\0';   // ensures the memory is an empty string
                    strcat(new_string,charfilename);
                    strcat(new_string,charfilename69);
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar);
                    strcat(new_string,charfilename18);
                    strcat(new_string,charfilename15);
                }

                KMP=fopen(new_string,"rb");
                fseek(KMP,0x1DC,SEEK_SET);
                fread(&TMDVersion11,1,1,KMP);
                fread(&TMDVersion12,1,1,KMP);
                TMDVersion10 = TMDVersion11 * 256 + TMDVersion12;
                fclose (KMP);
                if (TMDVersion10 == TMDVersion0)
                {
                    loop3 = 0xFFFE;
                }
            }

            // All Content Download

            loop3 = 0;

            while (loop4 < ContentAmount00+1)
            {
                sprintf(charfilename15,"%08x",loop4);
                if((new_string = malloc(strlen(charfilename11)+strlen(charfilenameType11)+strlen(TMDNameChar)+strlen(charfilename18)+strlen(charfilename15)+strlen(charfilename16)+strlen(charfilenameType11)+strlen(TMDNameChar)+1)) != NULL)
                {

                    new_string[0] = '\0';   // ensures the memory is an empty string
                    strcat(new_string,charfilename11); // "curl -f http://ccs.cdn.shop.wii.com/ccs/download/"
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                    strcat(new_string,charfilename18); // "/"
                    strcat(new_string,charfilename15); // loop3
                    strcat(new_string,charfilename16); // " --create-dirs --output "
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                }
                system(new_string);

                if (loop1 > 14 && loop1 < 22) // h3 download for Wii U files
                {
                if((new_string = malloc(strlen(charfilename11)+strlen(charfilenameType500)+strlen(TMDNameChar)+strlen(charfilename18)+strlen(charfilename15)+strlen(charfilename16)+strlen(charfilename20)+strlen(charfilenameType500)+strlen(TMDNameChar)+strlen(charfilename20)+1)) != NULL)
                {

                    new_string[0] = '\0';   // ensures the memory is an empty string
                    strcat(new_string,charfilename11); // "curl -f http://ccs.cdn.shop.wii.com/ccs/download/"
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                    strcat(new_string,charfilename18); // "/"
                    strcat(new_string,charfilename15); // loop3
                    strcat(new_string,charfilename20); // h3
                    strcat(new_string,charfilename16); // " --create-dirs --output "
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                }
                system(new_string);
                }

                loop4++;

            Resume=fopen("resume.hex","wb");
            fwrite(&loop1,1,sizeof(int),Resume);
            fwrite(&loop2,1,sizeof(int),Resume);
            fclose (Resume);

            }

            loop4 = 0;

            // All Special Content Download

            loop3 = 0;
            while (loop3 < 0xFFE0)
            {
                sprintf(charfilename15,"%08X",loop3+0xFFFD0000);
                if((new_string = malloc(strlen(charfilename11)+strlen(charfilenameType11)+strlen(TMDNameChar)+strlen(charfilename18)+strlen(charfilename15)+strlen(charfilename16)+strlen(charfilenameType11)+strlen(TMDNameChar)+1)) != NULL)
                {

                    new_string[0] = '\0';   // ensures the memory is an empty string
                    strcat(new_string,charfilename11); // "curl -f http://ccs.cdn.shop.wii.com/ccs/download/"
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                    strcat(new_string,charfilename18); // "/"
                    strcat(new_string,charfilename15); // loop3
                    strcat(new_string,charfilename16); // " --create-dirs --output "
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                }
                system(new_string);
                if((new_string = malloc(strlen(charfilename)+strlen(charfilename69)+strlen(charfilenameType11)+strlen(TMDNameChar)+strlen(charfilename18)+strlen(charfilename15)+1)) != NULL)
                {
                    new_string[0] = '\0';   // ensures the memory is an empty string
                    strcat(new_string,charfilename);
                    strcat(new_string,charfilename69);
                    strcat(new_string,charfilenametype69);
                    strcat(new_string,TMDNameChar); // ID
                    strcat(new_string,charfilename18); // "/"
                    strcat(new_string,charfilename15); // loop3
                }

                if( access( new_string, F_OK ) == 0 )
                    {
                        loop3++;
                    }
                else
                    {
                        loop3 = 0xFFE0;
                    }
            }

            // Build Info

            if((new_string = malloc(strlen(charfilename11)+strlen(charfilenameType11)+strlen(TMDNameChar)+strlen(charfilename18)+strlen(charfilename15)+strlen(charfilename16)+strlen(charfilenameType11)+strlen(TMDNameChar)+1)) != NULL)
            {
                new_string[0] = '\0';   // ensures the memory is an empty string
                sprintf(charfilename15,"%08X",0xFFFFFFFE);
                strcat(new_string,charfilename11); // "curl -f http://ccs.cdn.shop.wii.com/ccs/download/"
                strcat(new_string,charfilenametype69);
                strcat(new_string,TMDNameChar); // ID
                strcat(new_string,charfilename18); // "/"
                strcat(new_string,charfilename15); // "0xFFFFFFFE"
                strcat(new_string,charfilename16); // " --create-dirs --output "
                strcat(new_string,charfilenametype69);
                strcat(new_string,TMDNameChar); // ID
            }

            system(new_string);

            loop2++;
            Resume=fopen("resume.hex","wb");
            fwrite(&loop1,1,sizeof(int),Resume);
            fwrite(&loop2,1,sizeof(int),Resume);
            fclose (Resume);
        }

        loop2 = 0;
        fclose (TMD);
        loop1++;
    }
    return 0;
}
