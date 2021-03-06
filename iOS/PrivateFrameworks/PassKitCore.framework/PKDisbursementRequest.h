//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDecimalNumber, NSString;

@interface PKDisbursementRequest : NSObject <NSSecureCoding>
{
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSString *_countryCode;
    long long _requestSchedule;
    NSArray *_summaryItems;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *summaryItems; // @synthesize summaryItems=_summaryItems;
@property(nonatomic) long long requestSchedule; // @synthesize requestSchedule=_requestSchedule;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (_Bool)isEqualToDisbursementRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

