//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SymptomEvaluator/NSObject-Protocol.h>

@class NSDictionary, NWStatisticsManager, NWStatisticsSource;

@protocol NWStatisticsManagerDelegate <NSObject>

@optional
- (void)statisticsManager:(NWStatisticsManager *)arg1 didReceiveDirectSystemInformation:(NSDictionary *)arg2;
- (void)statisticsManager:(NWStatisticsManager *)arg1 didRemoveSource:(NWStatisticsSource *)arg2;
- (void)statisticsManager:(NWStatisticsManager *)arg1 didAddSource:(NWStatisticsSource *)arg2;
@end

