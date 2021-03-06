//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NSWindow;

__attribute__((visibility("hidden")))
@interface WebWindowFadeAnimation : NSAnimation
{
    double _initialAlpha;
    double _finalAlpha;
    NSWindow *_window;
    BOOL _isStopped;
}

- (void)stopAnimation;
- (void)setWindow:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (double)currentAlpha;
- (void)setDuration:(double)arg1;
- (id)initWithDuration:(double)arg1 window:(id)arg2 initialAlpha:(double)arg3 finalAlpha:(double)arg4;
- (id)init;

@end

