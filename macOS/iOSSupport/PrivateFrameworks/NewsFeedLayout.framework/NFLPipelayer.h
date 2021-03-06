//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NFLPipeSegment, NFLPipelayerDelegate;

@interface NFLPipelayer : NSObject
{
    id <NFLPipelayerDelegate> _delegate;
    NSArray *_pipeUnits;
    NSObject<NFLPipeSegment> *_previousPipeSegment;
    NSObject<NFLPipeSegment> *_nextPipeSegment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<NFLPipeSegment> *nextPipeSegment; // @synthesize nextPipeSegment=_nextPipeSegment;
@property(retain, nonatomic) NSObject<NFLPipeSegment> *previousPipeSegment; // @synthesize previousPipeSegment=_previousPipeSegment;
@property(copy, nonatomic) NSArray *pipeUnits; // @synthesize pipeUnits=_pipeUnits;
@property(nonatomic) __weak id <NFLPipelayerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)layPipeWithWallTime:(double)arg1 qualityOfService:(long long)arg2;
- (id)initWithPipe:(id)arg1 previousPipeSegment:(id)arg2 nextPipeSegment:(id)arg3;
- (id)init;

@end

