//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityVisuals/NSObject-Protocol.h>

@class AXVView, NSEvent;

@protocol AXVViewMouseEventDelegate <NSObject>

@optional
- (void)mouseDidExitView:(AXVView *)arg1 event:(NSEvent *)arg2;
- (void)mouseDidEnterView:(AXVView *)arg1 event:(NSEvent *)arg2;
- (void)mouseDownOnView:(AXVView *)arg1 event:(NSEvent *)arg2;
- (void)mouseDidExitView:(AXVView *)arg1;
- (void)mouseDidEnterView:(AXVView *)arg1;
- (void)mouseDownOnView:(AXVView *)arg1;
@end

