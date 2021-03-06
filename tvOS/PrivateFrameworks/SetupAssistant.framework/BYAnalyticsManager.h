//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject
{
    NSMutableArray *_events;
    NSMutableDictionary *_producers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *producers; // @synthesize producers=_producers;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)commit;
- (void)addEvent:(id)arg1 withPayloadBlock:(CDUnknownBlockType)arg2;
- (void)addEvent:(id)arg1 withPayload:(id)arg2;
- (void)addEvent:(id)arg1;
- (id)init;

@end

