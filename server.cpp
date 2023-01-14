#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <bits/stdc++.h>
using namespace std;

// Need to link with Ws2_32.lib
#pragma comment(lib, "ws2_32.lib")


int __cdecl main()
{

    WORD wVersionRequested;
    WSADATA wsaData;
    
    int nSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if(nSocket<0) cout<<"The Socket is not Opened"<<endl;
    else cout<<"The Socket opened Successfully"<<endl;     

/* The Winsock DLL is acceptable. Proceed to use it. */

/* Add network programming using Winsock here */

/* then call WSACleanup when done using the Winsock dll */
    
  //  WSACleanup();

}