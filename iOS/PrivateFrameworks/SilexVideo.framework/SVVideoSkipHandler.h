//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipHandling-Protocol.h>

@class NSString;
@protocol SVVideoQueueProviding, SVVideoVisiblePercentageManager, SVVisibilityReporting;

@interface SVVideoSkipHandler : NSObject <SVVideoSkipHandling>
{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVisibilityReporting> _visiblityReporter;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVVideoVisiblePercentageManager> visiblePercentageManager; // @synthesize visiblePercentageManager=_visiblePercentageManager;
@property(readonly, nonatomic) id <SVVisibilityReporting> visiblityReporter; // @synthesize visiblityReporter=_visiblityReporter;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
- (void)skipToVideo:(id)arg1 animated:(_Bool)arg2;
- (id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

