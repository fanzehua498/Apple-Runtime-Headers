//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PepperUICore/PUICSwipeActionPullViewDelegate-Protocol.h>
#import <PepperUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PepperUICore/_UIScrollViewScrollObserver-Protocol.h>

@class NSIndexPath, NSString, PUICSwipeActionPullView, UIColor, UILongPressGestureRecognizer, UIPanGestureRecognizer;
@protocol PUICSwipeActionHost;

@interface PUICSwipeActionController : NSObject <UIGestureRecognizerDelegate, PUICSwipeActionPullViewDelegate, _UIScrollViewScrollObserver>
{
    id <PUICSwipeActionHost> _host;
    PUICSwipeActionPullView *_pullView;
    unsigned int _swipeDirection;
    UIPanGestureRecognizer *_panRecognizer;
    UILongPressGestureRecognizer *_dismisalRecognizer;
    _Bool _isSwiped;
    _Bool _explicitCornerRadius;
    NSIndexPath *_swipedIndexPath;
    int _actionStyle;
    float _buttonSpacing;
    float _buttonCornerRadius;
    float _horizontalMargin;
    UIColor *_tintColor;
    Class _buttonClass;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Class buttonClass; // @synthesize buttonClass=_buttonClass;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) float horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) float buttonCornerRadius; // @synthesize buttonCornerRadius=_buttonCornerRadius;
@property(nonatomic) float buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(nonatomic) int actionStyle; // @synthesize actionStyle=_actionStyle;
@property(readonly, nonatomic) NSIndexPath *swipedIndexPath; // @synthesize swipedIndexPath=_swipedIndexPath;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)pullView:(id)arg1 pressedActionAtIndex:(int)arg2;
- (void)_updatePullView;
- (void)reset;
- (void)_panRecognizerUpdated:(id)arg1;
- (void)_dismissalRecognizerUpdated:(id)arg1;
- (void)_dismissActionBar:(_Bool)arg1;
- (float)swipeDirectionMultiplier;
- (float)currentSwipeOpenWidth;
- (_Bool)_mayBeginSwipeAtLocation:(struct CGPoint)arg1 withDirection:(unsigned int)arg2;
- (unsigned int)_directionForGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (id)initWithSwipeActionHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

