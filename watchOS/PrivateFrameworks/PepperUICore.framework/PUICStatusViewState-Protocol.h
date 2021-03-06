//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/NSObject-Protocol.h>

@class NSString, UITapGestureRecognizer, UIView;
@protocol PUICStatusViewState;

@protocol PUICStatusViewState <NSObject>
@property(nonatomic) _Bool iconShadow;
- (_Bool)statusViewIsStateActive;
- (UIView *)statusViewIndicatorView;
- (NSString *)statusViewStateName;

@optional
- (void)statusViewHandleTapGesture:(UITapGestureRecognizer *)arg1;
- (_Bool)statusViewDoEntranceAnimation:(id <PUICStatusViewState>)arg1 willGoToState:(id <PUICStatusViewState>)arg2 completion:(void (^)(_Bool))arg3;
- (_Bool)statusViewDoExitAnimation:(id <PUICStatusViewState>)arg1 completion:(void (^)(_Bool))arg2;
- (double)statusViewTransitionOutDuration;
- (double)statusViewTransitionInDuration;
@end

