//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Collaboration/CBIdentity.h>

@class NSArray;

@interface CBGroupIdentity : CBIdentity
{
}

+ (id)groupIdentityWithPosixGID:(unsigned int)arg1 authority:(id)arg2;
@property(readonly, nonatomic) NSArray *memberIdentities;
@property(readonly, nonatomic) NSArray *members;
- (id)_members;
@property(readonly, nonatomic) unsigned int posixGID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initGroupWithName:(id)arg1 authority:(id)arg2;

@end

