//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>

@class MPCPlaybackEngine, NSMutableSet, NSString;

@interface _MPCLeaseManager : NSObject <MPCPlaybackEngineEventObserving>
{
    _Bool _isPreparingForImminentPlaybackIntent;
    MPCPlaybackEngine *_playbackEngine;
    NSMutableSet *_leaseEndIgnoreReasons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *leaseEndIgnoreReasons; // @synthesize leaseEndIgnoreReasons=_leaseEndIgnoreReasons;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_updateStateForPlaybackPrevention;
- (void)_itemShouldPreventPlaybackDidChangeNotification:(id)arg1;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)engine:(id)arg1 didChangeToState:(unsigned int)arg2;
- (void)setCanStealLeaseIfNeeded;
- (void)prepareForCurrentItemPlayback;
- (void)endIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)beginIgnoringLeaseEndEventsForReason:(id)arg1;
- (void)prepareForPlaybackWithUserIdentity:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

