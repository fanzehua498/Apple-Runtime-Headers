//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject
{
}

+ (id)analyzerForTrackType:(id)arg1 withTransform:(struct CGAffineTransform)arg2;
@property(readonly, retain, nonatomic) NSDictionary *privateResults;
@property(readonly, retain, nonatomic) NSDictionary *publicResults;
- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;

@end

