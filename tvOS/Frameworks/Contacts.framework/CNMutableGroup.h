//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNGroup.h>

@class NSData, NSDate, NSString;

@interface CNMutableGroup : CNGroup
{
}

- (id)freezeWithSelfAsSnapshot;
- (id)freeze;
@property(copy, nonatomic) CNGroup *snapshot; // @dynamic snapshot;
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
@property(copy, nonatomic) NSString *externalUUID; // @dynamic externalUUID;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(copy, nonatomic) NSData *externalRepresentation; // @dynamic externalRepresentation;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)copy;

@end

