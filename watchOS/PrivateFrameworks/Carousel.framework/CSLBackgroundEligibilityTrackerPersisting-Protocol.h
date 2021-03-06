//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol CSLBackgroundEligibilityTrackerPersisting <NSObject>
- (void)fetchEventDatesByBundleIDWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)fetchPingDateWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSDate *))arg2;
- (void)recordPing:(NSDate *)arg1;
- (void)recordEventDatesByBundleID:(NSDictionary *)arg1;
- (void)deleteEventDateForBundleID:(NSString *)arg1;
- (void)recordEventForBundleID:(NSString *)arg1 date:(NSDate *)arg2;
@end

