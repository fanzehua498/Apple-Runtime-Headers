//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICUserIdentity, ICUserIdentityStore;

@interface ICUserIdentityContext : NSObject <NSCopying, NSSecureCoding>
{
    ICUserIdentity *_identity;
    ICUserIdentityStore *_identityStore;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) ICUserIdentityStore *identityStore; // @synthesize identityStore=_identityStore;
@property(readonly, nonatomic) ICUserIdentity *identity; // @synthesize identity=_identity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2;

@end

