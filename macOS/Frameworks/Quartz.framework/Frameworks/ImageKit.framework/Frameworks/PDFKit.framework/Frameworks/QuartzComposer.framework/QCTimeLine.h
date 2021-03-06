//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCPatch.h>

@class GFList;

__attribute__((visibility("hidden")))
@interface QCTimeLine : QCPatch
{
    GFList *_timeLines;
    BOOL _curveHullsEnabled;
    BOOL _legendHidden;
}

+ (id)serializedStateKeysWithIdentifier:(id)arg1;
+ (id)stateKeysWithIdentifier:(id)arg1;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (int)timeModeWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (Class)inspectorClassWithIdentifier:(id)arg1;
- (BOOL)performAction:(SEL)arg1 onSelectedTimeLines:(BOOL)arg2 withSelectedKeyFrames:(BOOL)arg3 object:(id)arg4 context:(void *)arg5;
- (void)deselectAll;
- (void)setControlsFixed:(BOOL)arg1 forKeyFrame:(long long)arg2 inTimeLine:(long long)arg3;
- (BOOL)controlsFixedForKeyFrame:(long long)arg1 inTimeLine:(long long)arg2;
- (void)setSelected:(BOOL)arg1 ifInRect:(struct CGRect)arg2;
- (void)setSelected:(BOOL)arg1 forKeyFrame:(long long)arg2 inTimeLine:(long long)arg3 extendSelection:(BOOL)arg4;
- (BOOL)keyFrameSelected:(long long)arg1 inTimeLine:(long long)arg2;
- (void)setActive:(BOOL)arg1 forTimeLine:(long long)arg2 extendSelection:(BOOL)arg3;
- (BOOL)timeLineActive:(long long)arg1;
- (id)inactiveTimeLineIndices;
- (id)activeTimeLineIndices;
- (void)setVisibility:(BOOL)arg1 forTimeLine:(long long)arg2;
- (void)setColor:(id)arg1 forTimeLine:(long long)arg2;
- (void)setIdentifier:(id)arg1 forTimeLine:(long long)arg2;
- (BOOL)visibilityForTimeLine:(long long)arg1;
- (id)colorForTimeLine:(long long)arg1;
- (id)identifierForTimeLine:(long long)arg1;
- (void)setCurveHullsEnabled:(BOOL)arg1;
- (BOOL)curveHullsEnabled;
- (void)setLegendHidden:(BOOL)arg1;
- (BOOL)legendHidden;
- (void)purgeKeyFrameCaches;
- (void)cacheKeyFrames;
- (double)maxValueForControlType:(int)arg1 keyFrame:(long long)arg2 inTimeLine:(long long)arg3;
- (double)minValueForControlType:(int)arg1 keyFrame:(long long)arg2 inTimeLine:(long long)arg3;
- (double)maxTimeForControlType:(int)arg1 keyFrame:(long long)arg2 inTimeLine:(long long)arg3;
- (double)minTimeForControlType:(int)arg1 keyFrame:(long long)arg2 inTimeLine:(long long)arg3;
- (struct CGPoint)locationOfControlType:(int)arg1 keyFrame:(long long)arg2 inTimeLine:(long long)arg3;
- (long long)offsetControlType:(int)arg1 byTime:(double)arg2 byValue:(double)arg3 keyFrame:(long long)arg4 inTimeLine:(long long)arg5;
- (void)setValue:(double)arg1 forKeyFrame:(long long)arg2 controlType:(int)arg3 inTimeLine:(long long)arg4;
- (void)setTime:(double)arg1 forKeyFrame:(long long)arg2 controlType:(int)arg3 inTimeLine:(long long)arg4;
- (double)valueForKeyFrame:(long long)arg1 controlType:(int)arg2 inTimeLine:(long long)arg3;
- (double)timeForKeyFrame:(long long)arg1 controlType:(int)arg2 inTimeLine:(long long)arg3;
- (void)removeKeyFrame:(long long)arg1 fromTimeLine:(long long)arg2;
- (long long)baseKeyFrameIndexAtTime:(double)arg1 inTimeLine:(long long)arg2;
- (long long)addKeyFrameAtTime:(double)arg1 value:(double)arg2 toTimeLine:(long long)arg3 preserveCurve:(BOOL)arg4;
- (void)removeTimeLine:(long long)arg1;
- (long long)createTimeLineWithTime:(double)arg1 value:(double)arg2;
- (unsigned long long)keyFramesCountForTimeLine:(long long)arg1;
- (void)setTimeLines:(id)arg1;
- (id)timeLines;
- (unsigned long long)timeLinesCount;
- (unsigned long long)maxTimeLinesCount;
- (unsigned long long)minTimeLinesCount;
- (void)dealloc;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (void)setSerializedValue:(id)arg1 forStateKey:(id)arg2;
- (id)serializedValueForStateKey:(id)arg1;
- (id)_copyTimeLines;
- (id)_createOutputPortForTimeLineIndex:(long long)arg1;

@end

