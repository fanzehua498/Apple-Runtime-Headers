//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScroller.h>

@interface LUIHiddenScroller : NSScroller
{
}

+ (BOOL)isCompatibleWithOverlayScrollers;
- (struct CGRect)rectForPart:(unsigned long long)arg1;
- (unsigned long long)usableParts;
- (void)setScrollerStyle:(long long)arg1;
- (void)scrollerImp:(id)arg1 animateTrackAlphaTo:(double)arg2 duration:(double)arg3;
- (void)scrollerImp:(id)arg1 animateKnobAlphaTo:(double)arg2 duration:(double)arg3;

@end

