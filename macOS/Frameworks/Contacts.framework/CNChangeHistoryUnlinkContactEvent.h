//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryUnlinkContactEvent : CNChangeHistoryEvent
{
    CNContact *_contact;
}

+ (unsigned long long)instanceSortOrder;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)init;

@end

