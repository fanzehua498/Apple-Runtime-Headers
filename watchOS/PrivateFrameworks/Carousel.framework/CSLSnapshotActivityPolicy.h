//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLActivityPolicy-Protocol.h>
#import <Carousel/CSLThrottledActivityPolicyDelegate-Protocol.h>

@class CSLThrottledActivityPolicy, NSString;

@interface CSLSnapshotActivityPolicy : NSObject <CSLActivityPolicy, CSLThrottledActivityPolicyDelegate>
{
    CSLThrottledActivityPolicy *_throttledActivityPolicy;
}

- (void).cxx_destruct;
@property(readonly) CSLThrottledActivityPolicy *throttledActivityPolicy; // @synthesize throttledActivityPolicy=_throttledActivityPolicy;
- (id)policy:(id)arg1 budgetManagerForContext:(id)arg2;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;
- (_Bool)appliesToActivity:(id)arg1;
- (id)initWithThrottledActivityPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

