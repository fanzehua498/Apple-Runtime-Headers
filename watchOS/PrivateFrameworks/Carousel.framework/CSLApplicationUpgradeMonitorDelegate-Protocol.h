//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLApplicationUpgradeMonitor, NSString;

@protocol CSLApplicationUpgradeMonitorDelegate <NSObject>

@optional
- (void)applicationUpgradeMonitor:(CSLApplicationUpgradeMonitor *)arg1 installed:(NSString *)arg2;
- (void)applicationUpgradeMonitor:(CSLApplicationUpgradeMonitor *)arg1 removed:(NSString *)arg2;
- (void)applicationUpgradeMonitor:(CSLApplicationUpgradeMonitor *)arg1 upgradeEnded:(NSString *)arg2;
- (void)applicationUpgradeMonitor:(CSLApplicationUpgradeMonitor *)arg1 upgradeStarted:(NSString *)arg2;
@end

