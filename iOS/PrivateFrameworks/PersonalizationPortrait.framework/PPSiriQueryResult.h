//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface PPSiriQueryResult : NSObject <NSCopying>
{
    NSString *_qid;
    NSString *_domain;
    NSNumber *_confidence;
}

+ (id)siriQueryResultWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *qid; // @synthesize qid=_qid;
- (id)init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSiriQueryResult:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQid:(id)arg1 domain:(id)arg2 confidence:(id)arg3;

@end

