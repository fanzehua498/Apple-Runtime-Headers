//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMCertificateCollection-Protocol.h>

@class NSArray;

@interface CRKASMConcreteCertificateCollection : NSObject <CRKASMCertificateCollection>
{
    NSArray *_certificates;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationToRefreshCollection;
- (id)initWithCertificates:(id)arg1;

@end

