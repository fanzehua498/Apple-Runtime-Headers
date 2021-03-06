//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>
#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface MNTimepoint : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>
{
    int _type;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
+ (id)arriveBy:(id)arg1;
+ (id)leaveBy:(id)arg1;
+ (id)leaveNow;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)jsonDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 date:(id)arg2;

// Remaining properties
@property(readonly) Class superclass;

@end

