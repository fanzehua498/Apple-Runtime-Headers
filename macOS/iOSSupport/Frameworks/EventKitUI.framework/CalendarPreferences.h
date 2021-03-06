//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CalPreferences, NSArray, NSDate, NSNumber, NSString;

@interface CalendarPreferences : NSObject
{
    CalPreferences *_preferences;
    BOOL _drawDebugViewColors;
}

+ (id)sharedPreferences;
- (void).cxx_destruct;
@property(nonatomic) BOOL drawDebugViewColors; // @synthesize drawDebugViewColors=_drawDebugViewColors;
@property(retain, nonatomic) NSNumber *dayViewFirstVisibleSecond;
@property(nonatomic) BOOL highColorCarplayEnabled;
@property(retain, nonatomic) NSString *upNextColor;
@property(retain, nonatomic) NSString *upNextLocation;
@property(nonatomic) double upNextDuration;
@property(retain, nonatomic) NSDate *upNextStartTime;
@property(retain, nonatomic) NSString *upNextTitle;
@property(nonatomic) BOOL upNextSimpleModeEnabled;
@property(readonly, nonatomic) NSArray *deselectedCalendarSyncHashes;
@property(nonatomic) BOOL eventAutocompleteEnabled;
@property(nonatomic) BOOL enableAvatars;
@property(nonatomic) BOOL disableTodayPushes;
@property(nonatomic, getter=isShortResumeToTodayTimeout) BOOL shortResumeToTodayTimeout;
@property(nonatomic) BOOL enableMultiwindowAsserts;
@property(nonatomic) BOOL hideInlineDayViewInEventDetails;
@property(nonatomic) BOOL showWindowDebugButton;
@property(nonatomic) BOOL largeListViewDisclosingEventDetails;
@property(nonatomic) BOOL swipeToDeleteEnabled;
@property(nonatomic) BOOL disableContinuity;
@property(nonatomic) BOOL showDetailedListView;
@property(nonatomic) BOOL showExperimentalUI;
@property(nonatomic) unsigned long long debugOccurrenceViewIconOverload;
@property(nonatomic) unsigned long long promptForCommentWhenDeclining;
@property(retain, nonatomic) NSNumber *locationSearchResultLimit;
@property(nonatomic) BOOL showEventsInPhoneMonthView;
@property(retain, nonatomic) NSArray *calendarUUIDsExcludedFromNotifications;
@property(nonatomic) BOOL requestSyncOnApplicationLaunch;
@property(nonatomic) BOOL viewedTimeZoneAutomatic;
@property(nonatomic) BOOL immediateAlarmCreation;
@property(nonatomic) BOOL showMonthDividedListView;
@property(nonatomic) BOOL showListView;
@property(nonatomic) BOOL weekViewStartsOnToday;
@property(nonatomic) BOOL showWeekNumbers;
@property(retain, nonatomic) NSString *overlayCalendarID;
@property(retain, nonatomic) NSString *searchString;
@property(retain, nonatomic) NSString *sourceIdentifierForSelectedIdentity;
@property(retain, nonatomic) NSNumber *weekViewHourScale;
@property(retain, nonatomic) NSNumber *dayViewHourScale;
@property(retain, nonatomic) NSNumber *lastSuspendTime;
@property(retain, nonatomic) NSNumber *lastViewedDate;
@property(retain, nonatomic) NSNumber *lastViewMode;
@property(retain, nonatomic) NSNumber *weekStart;
@property(retain, nonatomic) NSDate *simulatedCurrentDate;
- (id)init;

@end

