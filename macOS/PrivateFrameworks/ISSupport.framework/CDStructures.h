//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct in_addr {
    unsigned int s_addr;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char sin_len;
    unsigned char sin_family;
    unsigned short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8];
};

struct sockaddr_in6 {
    unsigned char sin6_len;
    unsigned char sin6_family;
    unsigned short sin6_port;
    unsigned int sin6_flowinfo;
    struct in6_addr sin6_addr;
    unsigned int sin6_scope_id;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
} CDStruct_87dc826d;

