//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate;

@interface PLClusterTimeInfo : NSObject
{
    NSCalendar *_calendar;
    double _endOfSameDayTimestamp;
    double _maximumNextDayTimestamp;
    NSDate *_latestUTCDate;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSDate *latestUTCDate; // @synthesize latestUTCDate=_latestUTCDate;
@property(readonly, nonatomic) double maximumNextDayTimestamp; // @synthesize maximumNextDayTimestamp=_maximumNextDayTimestamp;
@property(readonly, nonatomic) double endOfSameDayTimestamp; // @synthesize endOfSameDayTimestamp=_endOfSameDayTimestamp;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (BOOL)utcDateBelongsInCluster:(id)arg1;
- (void)updateWithUTCDate:(id)arg1 localDate:(id)arg2;
- (void)_updateTimestampsWithUTCDate:(id)arg1 localDate:(id)arg2;
- (void)reset;
- (id)initWithCalendar:(id)arg1;

@end

